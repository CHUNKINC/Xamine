#ifndef XAMINE_STATIONEXAM_H_
#define XAMINE_STATIONEXAM_H_

#include "Person.h"
#include "Station.h"

#include <time.h>

namespace Xamine {

class StationExam {
public:
    StationExam() :
        m_person(NULL),
        m_station(NULL),
        m_start(0),
        m_end(0)
    {
    }

    Person *getPerson() {
        return m_person;
    }

    void setPerson(Person *person) {
        m_person = person;
    }

    Station *getStation() {
        return m_station;
    }

    void setStation(Station *station) {
        m_station = station;
    }

    void start() {
        time(&m_start);
    }

    void end() {
        time(&m_end);
    }

    int getDuration() const {
        return (int)(m_end - m_start);
    }

    bool hasPassed() const {
        return m_passed;
    }

    bool hasStarted() const {
        return getStart() != 0;
    }

    bool hasEnded() const {
        return hasStarted() && getEnd() != 0;
    }

private:

    time_t getStart() const {
        return m_start;
    }

    time_t getEnd() const {
        return m_end;
    }

    Person  *m_person;
    Station *m_station;

    time_t m_start, m_end;

    bool m_passed;
};

}

#endif
