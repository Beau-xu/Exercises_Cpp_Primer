#include <iostream>
// #include <string>
// #include <vector>

using namespace std;

void swap(int* ip1, int* ip2)
{
    int temp = 0;
    temp = *ip1;
    *ip1 = *ip2;
    *ip2 = temp;
}

int main()
{
    int ival1 = 1, ival2 = 2;
    cout << ival1 << " " << ival2 << endl;
    swap(ival1, ival2);
    cout << "Swapped: " << ival1 << " " << ival2 << endl;

    return 0;
}
