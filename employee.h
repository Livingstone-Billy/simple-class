#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"
class Employee: public Person
{
    public:
        Employee();
        Employee(bool office,double salary,string dateHired);
        bool getOffice() const;
        double getSalary() const;
        string getDateHired() const;

        string getEmployeeName() const;
        void setOffice(bool office);
        void setSalary(double salary);
        void setDateHired(string dateHired);
        virtual void toString() const;

    protected:
        double salary;
        bool office;
        string dateHired;
};

#endif 