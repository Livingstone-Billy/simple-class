#include "staff.h"
#include <iostream>
#include <string>
using namespace std;

Staff::Staff()
{
    title = " ";
}
Staff::Staff(string title)
{
    this->title = title;
}
string Staff::getTitle() const
{
    return title;
}
void Staff::setTitle(string title)
{
    this->title = title;
}
void Staff::toString() const
{
    cout<<"Class name: "<<"Staff Class"<<endl;
    cout<<"Staff name: "<<getName()<<endl;
}