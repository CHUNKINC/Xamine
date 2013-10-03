#ifndef XAMINE_PERSON_H_
#define XAMINE_PERSON_H_

#include <string>

using namespace std;

namespace Xamine {

/**
 * Represents a person who participates in an exam.
 */
class Person {
public:
    /**
     * Initialize Person without name.
     */
    Person() {
    }

    /**
     * Initialize person with name.
     * \param name Name of the person
     */
    Person(const char *name) :
        m_name(name)
    {
    }

    /**
     * Initialize person with name.
     * \param name Name of the person
     */
    Person(const string &name) :
        m_name(name)
    {
    }

    /**
     * Returns name of the person.
     * \return Name of the person
     */
    const string &getName() const {
        return m_name;
    }

    /**
     * Sets the name of the person.
     * \param name Name of the person
     */
    void setName(string name) {
        m_name = name;
    }

    /**
     * Sets the name of the person.
     * \param name Name of the person
     */
    void setName(const char *name) {
        m_name = string(name);
    }

private:
    //! Name of the person
    string m_name;
};

}

#endif
