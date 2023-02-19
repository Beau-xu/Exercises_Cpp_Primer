#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    string address;
public:
    const string& getName() const { return name; }
    const string& getAddress() const { return address; }
};

#endif
