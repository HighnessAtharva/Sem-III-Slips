/* Slip no : 20_1 Write a C++ program to calculate maximum of two integer numbers of two different classes using friend function. */

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class xyz;
class abc
{
                int n1;
                public:
                abc()
                {cout<<"\nEnter no : ";
                                cin>>n1;
                }
                void display()
                {
                                cout<<"\nNo1 = "<<n1;
                }
                friend void max(abc,xyz);
};

class xyz
{
                int n2;
                public:
                xyz()
                {
                                cout<<"\nEnter no";
                                cin>>n2;
                }
                void display()
                {
                                cout<<"\nNo2 = "<<n2;
                }
                friend void max(abc,xyz);
};

void max(abc ob1,xyz ob2)
{
                if(ob1.n1>ob2.n2)
                                cout<<"\nmax = "<<ob1.n1;
                else
                                cout<<"\nmax = "<<ob2.n2;
}

int main()
{

                abc a;
                xyz z;
                a.display();
                z.display();
                max(a,z);
                return 0;
}
