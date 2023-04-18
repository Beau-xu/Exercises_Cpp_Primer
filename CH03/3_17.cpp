#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> strvec;
    string str;
    while (cin >> str) {
        strvec.push_back(str);
    }
    for (auto& ele : strvec) {
        for (auto& ch : ele) {
            ch = toupper(ch);
        }
    }
    for (auto ele : strvec) {
        cout << ele << endl;
    }

    return 0;
}
