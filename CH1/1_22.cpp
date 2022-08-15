#include "Sales_item.h"
#include <iostream>

using namespace std;

int main()
{
    Sales_item item;
    Sales_item sum_item;
    cin >> sum_item;
    while (cin >> item) {
        sum_item += item;
    }
    cout << sum_item << endl;

    return 0;
}
