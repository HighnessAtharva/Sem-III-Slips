/* Slip no : 23_1 Write the definition for a class called ‘point’ that has x & y as integer data members. Use copy constructor to copy one object to another. (Use Default and parameterized constructor to initialize the appropriate objects)
    Write a C++ program to illustrate the use of above class.           */

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class point
{
                int x,y;
                public:
                point()
                {
                }

                point(int a,int b)
                {
                                x=a;
                                y=b;
                }

                point(point &ob2)
                {
                                x=ob2.x;
                                y=ob2.y;
                }

                void display()
                {
                                cout<<"\nx = "<<x<<"\t y = "<<y;
                }
};

int main()
{
                point ob1(100,200);
                int n,m;
                ob1.display();
                point ob2(ob1);
                cout<<"\nAfter copy comstructor .\n";
                ob2.display();

                cout<<"\nEnter number : ";
                cin>>n;
                cout<<"\nEnter number : ";
                cin>>m;
                point ob3(n,m);
                ob3.display();
                ob2=ob3;
                cout<<"\nAfter copy comstructor .\n";
                ob2.display();

                return 0;
}
