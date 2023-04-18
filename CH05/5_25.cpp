#include <iostream>
// #include <string>
// #include <vector>

using namespace std;

int main()
{
    int dividend = 0;
    int divisor = 0;
    cout << "Input the dividend and divisor:" << endl;
    while (cin >> dividend >> divisor) {
        try {
            if (divisor == 0) {
                throw runtime_error("Divisor cannot be zero");
            }
            cout << static_cast<float>(dividend) / divisor << endl;
            break;
        } catch (runtime_error err) {
            cout << err.what() << "\nInput again? (y or n)" << endl;
            char c;
            cin >> c;
            if (c == 'y') {
                cout << "Input the dividend and divisor:" << endl;
                continue;
            } else {
                break;
            }
        }
    }

    return 0;
}
