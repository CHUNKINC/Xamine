#ifndef XAMINE_EXAM_H_
#define XAMINE_EXAM_H_

#include <vector>

#include "Person.h"
#include "Station.h"
#include "StationExam.h"

namespace Xamine {

using namespace std;

class Exam {
public:
    Exam() {
    }

    ~Exam();

    const vector<Person *> &getPersons() const {
        return m_persons;
    }

    vector<Person *> &getPersons() {
        return m_persons;
    }

    const vector<Station *> &getStations() const {
        return m_stations;
    }

    vector<Station *> &getStations() {
        return m_stations;
    }

    const vector<StationExam *> &getExams() const {
        return m_exams;
    }

    vector<StationExam *> &getExams() {
        return m_exams;
    }

    void generate();

private:
    vector<Person *> m_persons;
    vector<Station *> m_stations;

    vector<StationExam *> m_exams;
};

}
#endif
