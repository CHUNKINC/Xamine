#include "Exam.h"

namespace Xamine {
    Exam::~Exam() {
        // delete everything
    }

    void Exam::generate() {
        vector<Station *>::iterator stationIt = getStations().begin();
        vector<Station *>::iterator stationEnd = getStations().end();
        for(; stationIt != stationEnd; ++stationIt) {
            vector<Person *>::iterator personIt = getPersons().begin();
            vector<Person *>::iterator personEnd = getPersons().end();
            for(; personIt != personEnd; ++personIt) {
                StationExam *exam = new StationExam();
                exam->setPerson(*personIt);
                exam->setStation(*stationIt);

                m_exams.push_back(exam);
            }
        }
    }
}
