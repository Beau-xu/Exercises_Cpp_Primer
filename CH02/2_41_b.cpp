#include "Sales_data.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Sales_data data1, data2;

    double price = 0.0; // 单价
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    while (cin >> data2.bookNo >> data2.units_sold >> price) {
        data2.revenue = data2.units_sold * price;
        if (data1.bookNo == data2.bookNo) {
            data1.units_sold = data1.units_sold + data2.units_sold;
            data1.revenue = data1.revenue + data2.revenue;
        } else {
            cerr << "ERROR: These books must have the same ISBN" << endl;
            return -1;
        }
    }
    cout << "ISBN: " << data1.bookNo << endl;
    cout << "Total NO. of books: " << data1.units_sold << endl;
    cout << "Total revenue: " << data1.revenue << endl;
    return 0;
}
