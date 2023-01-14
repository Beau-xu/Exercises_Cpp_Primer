#include "Chapter6.h"
#include <iostream>
using namespace std;

int main()
{
    int ival;
    int res;
    cout << "Input an integer for computing factorial: " << endl;
    cin >> ival;
    res = fact(ival);
    cout << res << endl;

    return 0;
}
