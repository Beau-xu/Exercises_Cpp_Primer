#include <iostream>

#include "textquery.h"

using std::cin;
using std::cout;
using std::endl;

void runQueries(std::ifstream &infile) {
    TextQuery tq(infile);
    std::string s;
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
    cout << "quit search" << endl;
}

int main() {
    std::ifstream ftrm("file.txt");
    runQueries(ftrm);
    return 0;
}
