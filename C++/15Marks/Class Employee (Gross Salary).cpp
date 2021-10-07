/*Slip no : 8_1 Write a C++ program to create a class Employee which
  contains data members as Emp_Id, Emp_Name, Basic_Salary, HRA, DA, Gross_Salary.
  Write member functions to accept Employee information. Calculate and display
  Gross salary of an employee. (DA=12% of Basic salary and HRA = 30% of Basic
  salary) (Use appropriate manipulators to display employee information in
  given format :- Emp_Id and Emp_Name should be left justified and Basic_Salary,
  HRA, DA, Gross salary Right justified with a precision of two digits) */

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class emp
{
                int eid;
                float bs,hra,da,gs;
                char name[10];
                public:
                void accept()
                {
                                cout<<"enter id";
                                cin>>eid;
                                cout<<"enter name";
                                cin>>name;
                                cout<<"enter bs";
                                cin>>bs;
                }

                void display()
                {
                                cout<<"\n eid="<<eid<<"\n name="<<name<<"\n bssic salary = "<<bs;
                                cout<<"\n HRA = "<<(bs*0.30);
                                cout<<"\n DA = "<<(bs*0.12);
                                cout<<"\n Gross Salary = "<<(bs-((bs*0.12)+(bs*0.30)));
                }
};

int main()
{
                emp ob;
                ob.accept();
                ob.display();
                return 0;
}
