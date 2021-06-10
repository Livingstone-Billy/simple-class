#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
class Student:public Person
{
    public:
        Student();
        Student(string name,string status);
        string getStudentName() const;
        string getStatus() const;

        virtual void toString() const;
        void setStudentName(string name);
        void setStatus(string status);
    protected:
        string name;
        string status;
};

#endif