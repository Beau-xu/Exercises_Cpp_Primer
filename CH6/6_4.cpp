#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fact(int ival)
{
    if (ival > 13 || ival < 1) {
        throw runtime_error("Input integer should be within [1, 12]");
    }
    int res = 1;
    while (ival != 1) {
        res *= ival--;
    }
    return res;
}

int main()
{
    int ival = 0;
    int result = 0;
    cout << "Input an integer for computing factorial: " << endl;
    cin >> ival;
    result = fact(ival);
    cout << "Factorial: " << result << endl;

    return 0;
}
