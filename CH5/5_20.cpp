#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string lastStr = "";
    string curStr;
    while (cin >> curStr) {
        if (curStr == lastStr) {
            break;
        }
        lastStr = curStr;
    }
    if (curStr == lastStr) {
        cout << curStr << endl;
    } else {
        cout << "No such word" << endl;
    }

    return 0;
}
