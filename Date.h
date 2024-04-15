#include <iostream>
using namespace std;

class Time {
    public:
    int min;
    int hr;

    Time();
    Time(int minute, int hour);

};

class Date {
    public:
    int d;
    int m;
    int y;

    Date();
    Date(int day, int month, int year);
    void setDate(int day, int month, int year);

    friend ostream& operator<<(ostream& ,const Date&);
    friend fstream& operator<<(fstream& os,const Date &d1);
    friend istream& operator>>(istream& ,Date&);
    friend fstream& operator>>(fstream& is,Date &d1);
    friend bool operator==(const Date&, const Date&);
};