#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
    public:
        Person();
        Person(string name,string address,double phoneNo,string email);
        double getPhoneNo() const;
        string getName() const;
        string getAddress() const;
        string getEmail() const;

        void setPhoneNo(double number);
        void setName(string name);
        void setAddress(string address);
        void setEmail(string email);
        virtual void toString() const;

    protected:
        string name;
        string email;
        string address;
        double phoneNo;
};

#endif