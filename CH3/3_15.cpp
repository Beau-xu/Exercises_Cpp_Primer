#include <iostream>
// #include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vs;
    string s;
    while (cin >> s) {
        vs.push_back(s);
    }
    for (auto ele : vs) {
        cout << ele << endl;
    }

    return 0;
}
