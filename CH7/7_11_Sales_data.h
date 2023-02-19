#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    Sales_data() = default;
    Sales_data(const std::string& s): bookNo(s) {}
    Sales_data(const std::string& s, unsigned number, double price): bookNo(s), units_sold(number), revenue(number*price) {}
    Sales_data(std::istream&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data& data)
{
    units_sold += data.units_sold;
    revenue += data.revenue;
    return *this;
}

Sales_data add(const Sales_data& item1, const Sales_data& item2)
{
    Sales_data sum = item1;
    sum.combine(item2);
    return sum;
}

std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price(); // 不负责换行
    return os;
}

#endif // _SALES_DATA_
