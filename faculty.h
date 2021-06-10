#ifndef FACULTY_H
#define FACULTY_H
#include "employee.h"
#include <string>
using namespace std;

class Faculty:public Employee
{
    public:
        Faculty();
        Faculty(int hour,string rank);
        int getHour() const;
        string getRank() const;

        void setHour(int hour);
        void setRank(string rank);
        virtual void toString() const;

    protected:
        string rank;
        int hour;
};

#endif