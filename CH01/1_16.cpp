#include <iostream>

using namespace std;

int main()
{
    cout << "Input a list of integer ended with Ctrl+Z" << endl;
    int val = 0, sum = 0;
    while (cin >> val)
    {
        sum += val;
    }
    cout << sum << endl;

    cout << endl;
    return 0;
}
