/*Slip no : 1 Write a C++ program to create a class Worker with data members as Worker_Name, No_of_Hours_worked, Pay_Rate. Write necessary member functions to calculate and display the salary of worker. (Use default value for Pay_Rate)           */

#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
class worker
{
                char name[10];
                int hr;
                public:
                void accept()
                {
                                cout<<"enter name";
                                cin>>name;
                                cout<<"enter hours";
                                cin>>hr;
                }

                void calculate(int rate=50){
                cout<<"salary of worker is Rs."<<(hr*30)*rate;
                }

};

int main()
{
                worker ob;
                ob.accept();
                ob.calculate();
                return 0;
}
