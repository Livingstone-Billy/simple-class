#include "faculty.h"
#include <string>
#include <iostream>
using namespace std;

Faculty::Faculty()
{
    rank = " ";
    hour = 0;
}
Faculty::Faculty(int hour,string rank)
{
    this->hour = hour;
    this->rank = rank;
}
int Faculty::getHour() const
{
    return hour;
}
string Faculty::getRank() const
{
    return rank;
}
void Faculty::setHour(int hour)
{
    this->hour = hour;
}
void Faculty::setRank(string rank)
{
    this->rank = rank;
}
void Faculty::toString() const
{
    string name = getName();
    cout<<"Class name: "<<"Faculty Class"<<endl;
    cout<<"Faculty member name: "<<name<<endl;
}