#include <iostream>
// #include <string>
// #include <cctype>
// #include <vector>

using namespace std;

int bigger(const int i, const int* ip)
{
    if (i > *ip)
        return i;
    else
        return *ip;
}

void swapPointer(int*& p1, int*& p2)
{ // 指针的引用
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    int* ip1 = &i1;
    int* ip3 = &i3;
    int res = 0;

    cout << "Tests 6.21: " << endl;
    res = bigger(i2, ip1);
    cout << res << endl;
    res = bigger(i2, ip3);
    cout << res << endl;

    cout << "\nTests 6.22: " << endl;
    cout << "Before swap: " << *ip1 << ' ' << *ip3 << ' ' << ip1 << ' ' << ip3 << endl;
    swapPointer(ip1, ip3);
    cout << "After swap: " << *ip1 << ' ' << *ip3 << ' ' << ip1 << ' ' << ip3 << endl;

    return 0;
}
