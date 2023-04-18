#include <iostream>

using namespace std;

int main()
{
    cout << "Input a list of integer ended with Ctrl+Z" << endl;
    int curVal = 0, val = 0;
    if (cin >> curVal) {
        int cnt = 1;
        while (cin >> val) {
            if (val == curVal) {
                cnt++;
            } else {
                cout << curVal << " occurs " << cnt << " times" << endl;
                cnt = 1;
                curVal = val;
            }
        }
        cout << curVal << " occurs " << cnt << " times" << endl;
    }

    cout << endl;
    return 0;
}
