#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data& data)
{
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
}

#endif // _SALES_DATA_
