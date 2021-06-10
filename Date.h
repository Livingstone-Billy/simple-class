#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;
class Date
{
    private:
        int year;
        int month;
        int day;

    public:
        Date();
        Date(int year,int month,int day);
        int getYear()const;
        int getDay()const;
        int getMonth()const;
        void getCurrentTime();

        void setYear(int year);
        void setDay(int day);
        void setMonth(int month);
};

#endif 