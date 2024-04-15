#include <iostream>
using namespace std;


// follows 24 hour format
class Time {
    public:
    int min;
    int hr;

    Time(){}
    Time(int minute, int hour){
        min = minute;
        hr = hour;
    }

};

class Date {
    public:
    int d;
    int m;
    int y;

    Date(){}

    Date(int day, int month, int year){
        d = day;
        m = month;
        y = year;
    }

    void setDate(int day, int month, int year){
        d = day;
        m = month;
        y = year;
    }

    friend ostream& operator<<(ostream& ,const Date&);
    friend fstream& operator<<(fstream& os,const Date &d1);
    friend istream& operator>>(istream& ,Date&);
    friend fstream& operator>>(fstream& is,Date &d1);
    friend bool operator==(const Date&, const Date&);
};

ostream& operator<<(ostream& os, const Date &d1)   //overloading o/p operator
{
    os<<d1.d<<"/"<<d1.m<<"/"<<d1.y;
    return os;
}

ostream& operator<<(ostream& os,const Date &d1)   //overloading o/p operator
{
    os<<d1.d<<"/"<<d1.m<<"/"<<d1.y;
    return os;
}

istream& operator>>(istream& is,Date &d1)   //overloading i/p operator
{
    is>>d1.d;
    is>>d1.m;
    is>>d1.y;
    return is;
}

istream& operator>>(istream& is,Date &d1)   //overloading i/p operator
{
    is>>d1.d;
    is>>d1.m;
    is>>d1.y;
    return is;
}

bool operator==(const Date &d1, const Date &d2)
{
    return d1.d==d2.d && d1.m==d2.m && d1.y==d2.y;
}