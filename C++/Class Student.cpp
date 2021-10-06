/* Slip no: 17_1 Write a C++ program to create a class Student which contains data members as Roll_Number, Stud_Name, Percentage.  Write member functions to accept Student information.  Display all details of student along with a class obtained depending on percentage. (Use array of objects)          */
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class student
{
                char name[10];
                float per;
                int rno;
                public:
                void accept()
                {
                                cout<<"\nEnter rno : ";
                                cin>>rno;
                                cout<<"\nEnter name : ";
                                cin>>name;
                                cout<<"\nEnter percentage : ";
                                cin>>per;
                }

                void display()
                {
                                cout<<"\nrno = "<<rno;
                                cout<<"\nName = "<<name;
                                cout<<"\nPercantage = "<<per<<"%";
                                if(per>=70&&per<=100)
                                                cout<<"\nDistinction";
                                else if(per<70&&per>=60)
                                                cout<<"\n1st class";
                                else if(per<60&&per>=50)
                                                cout<<"\n2nd class";
                                else if(per<50&&per>40)
                                                cout<<"\npass class";
                                else
                                                cout<<"\nfail";
                                cout<<"\n=================================";
                }

};

int main()
{
                int n,i;
                student ob[10];
                cout<<"enter no of students";
                cin>>n;
                for(i=0;i<n;i++)
                {
                                ob[i].accept();
                }

                for(i=0;i<n;i++)
                {
                                ob[i].display();
                }

                return 0;
}
