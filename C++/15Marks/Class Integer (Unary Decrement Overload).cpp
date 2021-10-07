/* Slip no : 19_1 Write a C++ program to create a class Integer. Write necessary member functions to overload the operator unary pre and post decrement ‘--’  for an integer number. */

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class integer
{
                int no;
                public:
                integer(){}
                integer(int num)
                {
                                no=num;
                }

                integer operator--()
                {
                                --no;
                                return *this;
                }

                integer operator--(int) //post increment
                {
                                integer temp=*this;
                                no--;
                                return temp;
                }

                void display()
                {
                                cout<<"\nNo = "<<no;
                }

};

int main()
{
                integer i(10),i1(10),i3;
                cout<<"\nAfter postdecrement : ";
                i3=i--;
                i3.display();
                cout<<"\nAfter predecrement : ";
                i3=--i1;
                i3.display();
                return 0;
}
