#include <iostream>
#include <iomanip>
#include "Date.h"
#include "person.h"
#include "student.h"
#include "staff.h"
#include "faculty.h"
#include "employee.h"
#include <string>
using namespace std;

int main()
{
    Person person;
    Employee employee;
    Student student;
    Staff staff;
    Date date;
    Faculty faculty;

    person.setName("Loop Quantum");
    person.setAddress("P.O BOX 344 Kiroch");
    person.setEmail("loopquantum@gmail.com");
    person.setPhoneNo(254759244544);
    employee.setDateHired("12/3/2007");
    employee.setSalary(100000);
    employee.setOffice(true);
    student.setStatus("Junior");
    student.setStudentName("Junior Lizard");
    staff.setTitle("Lecturer");
    faculty.setHour(8);
    faculty.setRank("Senior Lecturer");
    date.setYear(2021);
    date.setMonth(5);
    date.setDay(5);

    person.toString();
    cout<<"Address: "<<person.getAddress()<<endl;
    cout<<"Email: "<<person.getEmail()<<endl;
    cout<<"Phone No: "<<fixed<<setprecision(0)<<person.getPhoneNo()<<endl;
    cout<<"                                                       "<<endl;
    student.toString();
    cout<<"College Level: "<<student.getStatus()<<endl;
    cout<<"                                                       "<<endl;
    employee.toString();
    cout<<"Date Hired: "<<employee.getDateHired()<<endl;
    cout<<"Office: "<<(employee.getOffice() ? "Yes":"No")<<endl;
    cout<<"Salary: "<<employee.getSalary()<<endl;
    cout<<"                                                       "<<endl;
    staff.toString();
    cout<<"Title: "<<staff.getTitle()<<endl;
    cout<<"                                                       "<<endl;
    faculty.toString();
    cout<<"Works for "<<faculty.getHour()<<" hours a day"<<endl;
    cout<<"Current rank "<<faculty.getRank()<<endl;
    cout<<"                                                       "<<endl;
    date.getCurrentTime();
    return 0;
}