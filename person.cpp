#include <iostream>
#include "person.h"
#include <string>
using namespace std;

Person::Person()
{
    name = "Loop Quantum";
    phoneNo = 0;
    address = " ";
    email = " ";
}
Person::Person(string name,string address,double phoneNo,string email):
name(name),address(address),phoneNo(phoneNo),email(email){}

double Person::getPhoneNo() const
{
    return phoneNo;
}
string Person::getEmail() const
{
    return email;
}
string Person::getAddress() const
{
    return address;
}
string Person::getName() const
{
    return name;
}
void Person::toString() const
{
    cout<<"Class Name: "<<"Person Class"<<endl;
    cout<<"Person Name: "<<getName()<<endl;
}

void Person::setName(string name)
{
    this->name = name;
}
void Person::setEmail(string email)
{
    this->email = email;
}
void Person::setAddress(string address)
{
    this->address = address;
}
void Person::setPhoneNo(double number)
{
    this->phoneNo = number;
}