#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "world";
    if (s1 > s2)
        cout << "s1 is bigger" << endl;
    else if (s1 == s2)
        cout << "Same string" << endl;
    else
        cout << "s2 is bigger" << endl;

    cout << "=======================" << endl;

    char cs1[] = "hello";
    char cs2[] = "world";
    auto cmp_res = strcmp(cs1, cs2);
    if (cmp_res > 0)
        cout << "s1 is bigger" << endl;
    else if (cmp_res == 0)
        cout << "Same string" << endl;
    else
        cout << "s2 is bigger" << endl;

    return 0;
}
