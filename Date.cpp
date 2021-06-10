#include "Date.h"
#include <iostream>
#include <ctime>
#include<string>
using namespace std;

Date::Date()
{
    year = 0;
    day = 0;
    month = 0;
}
Date::Date(int year,int month,int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}
int Date::getYear() const
{
    return year;
}
int Date::getMonth() const
{
    return month;
}
int Date::getDay() const
{
    return day;
}
void Date::setYear(int year)
{
    this->year = year;
}
void Date::setDay(int day)
{
    this->day = day;
}
void Date::setMonth(int month)
{
    this->month = month;
}
void Date::getCurrentTime()
{
    int totalSeconds = time(0);
    int currentSeconds = totalSeconds % 60; //*
    int totalMinutes = totalSeconds / 60;
    int currentMinute = totalMinutes % 60; //*
    int totalHours = totalMinutes / 60;
    int currentHour1 = totalHours % 24;
    int currentHour = currentHour1 + 3;

    int currentMonth = getMonth();
    int currentDate = getDay();
    int currentYear = getYear();
    string month;

    switch(currentMonth)
    {
        case 1:month = "January";break;
        case 2:month = "February";break;
        case 3:month = "March";break;
        case 4:month = "April";break;
        case 5:month = "May";break;
        case 6:month = "June";break;
        case 7:month = "July";break;
        case 8:month = "August";break;
        case 9:month = "September";break;
        case 10:month = "October";break;
        case 11:month = "November";break;
        case 12:month = "December";break;
    }
    cout<<"Current Date is "<<currentDate<<" / "<<month<<" / "<<currentYear<<endl;
    cout<<"Current time is "<<currentHour<<":"<<currentMinute<<":"<<currentSeconds<<endl;
}