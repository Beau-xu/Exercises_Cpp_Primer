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
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo) {
        int totalUnits = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout << "ISBN: " << data1.bookNo << endl;
        cout << "Total NO. of books: " << totalUnits << endl;
        cout << "Total revenue: " << totalRevenue << endl;
        return 0;
    } else {
        cerr << "ERROR: Two books must have the same ISBN" << endl;
        return -1;
    }
}
