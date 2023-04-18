#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int ffCnt = 0, flCnt = 0, fiCnt = 0;
    while (cin >> s) {
        for (auto its = s.begin(); its != s.end() - 1; ++its) {
            if (*its == 'f') {
                switch (*(its + 1)) {
                case 'f':
                    ++ffCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;
                default:
                    break;
                }
            }
        }
    }
    cout << ffCnt << ' ' << flCnt << ' ' << fiCnt << endl;

    return 0;
}
