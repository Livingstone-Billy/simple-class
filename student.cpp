#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student()
{
    status = " ";
    name = " ";
}
Student::Student(string name,string status)
{
    this->name = name;
    this->status = status;
}
string Student::getStudentName() const
{
    return name;
}
string Student::getStatus() const
{
    return status;
}
void Student::setStudentName(string name)
{
    this->name = name;
}
void Student::setStatus(string status)
{
    this->status = status;
}
void Student::toString () const
{
    cout<<"Class name: Student Class"<<endl;
    cout<<"Student Name: "<<getStudentName()<<endl;
}