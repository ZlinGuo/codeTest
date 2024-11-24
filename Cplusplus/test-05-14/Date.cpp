#include "Date.h"

// 全缺省的构造函数
Date::Date(int year, int month, int day)
{
    _year = year;
    _month = month;
    _day = day;
}

// 拷贝构造函数
// d2(d1)
Date::Date(const Date& d)
{
    _year = d._year;
    _month = d._month;
    _day = d._day;
}

void Date::Print()
{
    cout << _year << "-" << _month << "-" << _day << endl;
}

// 赋值运算符重载
// d2 = d3 -> d2.operator=(&d2, d3)
Date& Date::operator=(const Date& d)
{
    _year = d._year;
    _month = d._month;
    _day = d._day;
    return *this;
}

  // 日期+=天数
Date& Date::operator+=(int day)
{
    _day += day;
    while(_day > GetMonthDay(_year, _month))
    {
        _day -= GetMonthDay(_year, _month);
        _month++;
        if(_month == 13)
        {
            _year++;
            _month = 1;
        }
    }

    return *this;
}

// 日期+天数
Date Date::operator+(int day)
{
    Date d2 = *this;
    d2 += day;

    return d2;
}

// 日期-天数
Date Date::operator-(int day)
{
    Date tmp = *this;
    tmp -= day;

    return tmp;
}

// 日期-=天数
Date& Date::operator-=(int day)
{
    _day -= day;
    while(_day <= 0)
    {
        --_month;
        if(_month == 0)
        {
            --_year;
            _month = 12;
        }

        _day += GetMonthDay(_year, _month);
    }

    return *this;
}

  // 日期-日期 返回天数
int Date::operator-(const Date& d)
{
    Date max = *this;
    Date min = d;
    int flag = 1;
    if(*this < d)
    {
        min = *this;
        max = d;
        flag = -1;
    }

    int n = 0;
    while(max != min)
    {
        ++min;
        n++;
    }

    return n * flag;
}

  // ==运算符重载
bool Date::operator==(const Date& d)
{
    if(_year == d._year && _month == d._month && _day == d._day)
    {
        return true;
    }
    
    return false;
}

  // >运算符重载
bool Date::operator>(const Date& d)
{
    if(_year > d._year)
    {
        return true;
    }
    else if(_year == d._year)
    {
        if(_month > d._month)
        {
            return true;
        }
        else
        {
            return _day > d._day;
        }
    }

    return false;
}

  // >=运算符重载
bool Date::operator>=(const Date& d)
{
    return *this > d || *this == d;
}

  // <运算符重载
bool Date::operator < (const Date& d)
{
    return !(*this >= d);
}

   // <=运算符重载
bool Date::operator <= (const Date& d)
{
    return !(*this > d);
}

  // !=运算符重载
bool Date::operator != (const Date& d)
{
    return !(*this == d);
}

  // 前置++
Date& Date::operator++()
{
    *this += 1;

    return *this;
}

  // 后置++
Date Date::operator++(int)
{
    Date tmp = *this;
    *this += 1;

    return tmp;
}

  // 后置--
Date Date::operator--(int)
{
    Date tmp = *this;
    *this -= 1;

    return tmp;
}

  // 前置--
Date& Date::operator--()
{
    *this -= 1;

    return *this;
}