#ifndef XAMINE_STATION_H_
#define XAMINE_STATION_H_

#include <string>

namespace Xamine {

using namespace std;

class Station {
public:
    Station() {
    }

    Station(const string &name) :
        m_name(name)
    {
    }

    Station(const char *name) :
        m_name(name)
    {
    }

    const string &getName() const {
        return m_name;
    }

private:
    string m_name;
};

}

#endif
