#include "13_33-37.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    Message firstMail("hello");
    Message signInMail("welcome to cppprimer");
    Folder mailBox;

    cout << firstMail << endl;  // print: "hello"
    firstMail.save(&mailBox);   // send to mailBox
    cout << mailBox << endl;    // print: "hello"

    cout << signInMail << endl;  // print "welcome to cppprimer"
    signInMail.save(&mailBox);   // send to mailBox
    cout << mailBox << endl;     // print "welcome to cppprimer hello"

    firstMail = firstMail;      // test for assignment to self.
    cout << firstMail << endl;  // print "hello"
    cout << mailBox << endl;    // print "welcome to cppprimer hello"
}
