#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee()
{
    salary = 0;
    office = false;
    dateHired = " ";
}
Employee::Employee(bool office,double salary,string dateHired)
{
    this->office = office;
    this->salary = salary;
    this->dateHired = dateHired;
}
bool Employee::getOffice() const
{
    return office;
}
double Employee::getSalary() const
{
    return salary;
}
string Employee::getDateHired() const
{
    return dateHired;
}
void Employee::setSalary(double salary)
{
    this->salary = salary;
}
void Employee::setOffice(bool office)
{
    this->office = office;
}
void Employee::setDateHired(string dateHired)
{
    this->dateHired = dateHired;
}
string Employee::getEmployeeName() const
{
    string name = getName();
    return name;
}
void Employee::toString() const
{
    cout<<"Class name: "<<"Employee Class"<<endl;
    cout<<"Employee Name: "<<getEmployeeName()<<endl;
}