#ifndef STAFF_H
#define STAFF_H
#include "employee.h"
#include <string>
using namespace std;

class Staff:public Employee
{
    public:
        Staff();
        Staff(string title);
        string getTitle() const;
        virtual void toString() const;
        void setTitle(string title);

    protected:
        string title;
};
#endif