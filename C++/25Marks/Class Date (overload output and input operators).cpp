/* Slip no : 8_2 Create a class Date containing members as:
dd
mm
yyyy
Write a C++ program for overloading operators >> and << to accept and display a Date also write a member function to validate a date. */

#include<conio.h>
#include<iostream>
using namespace std;
class date
{
int dd,mm,yy;
public:
friend istream &operator>>(istream &,date &);
friend ostream &operator<<(ostream &,date &);

void validate()
{
int flag=0;
if(mm==2)
{
                if(yy%4==0)
                {
                                if(dd>=1&&dd<=29)
                                                flag=1;
                }
                else if(dd>=1&&dd<=28)
                                flag=1;
}
else if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
{
                if(dd>=1&&dd<=31)
                                flag=1;
}
else
{              if(mm==4||mm==6||mm==9||mm==11)
                {
                                if(dd>=1&&dd<=30)
                                                flag=1;
                }
}

if(flag==1)
cout<<"valid date \t";
else cout<<"invalid date \t ";

}//end of validation
};

istream &operator>>(istream &in,date &ob)
{
cout<<"enter date";
cin>>ob.dd;
cout<<"enter month";
cin>>ob.mm;
cout<<"enter year";
cin>>ob.yy;
return in;
}

ostream &operator<<(ostream &out,date &n)
{
cout<<n.dd<<"/"<<n.mm<<"/"<<n.yy;
return out;
}

int main()
{
date ob;

cin>>ob;
ob.validate();
cout<<ob;
return 0;
}
