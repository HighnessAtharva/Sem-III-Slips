/* Sip no : 2-1 Write a C++ program using class which contains two data members of type integer. Create and initialize the object using default constructor, parameterized constructor and parameterized constructor with default value. Write a member function to display maximum from given two numbers for all objects.*/

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class maxi
{
                int a,b;
                public:
                maxi()
                {
                                cout<<"\nEnter 2 numbers : ";
                                cin>>a;
                                cin>>b;
                }
                maxi(int a1,int b1)
                {
                                a=a1;
                                b=b1;
                }


                void maximum()
                {
                                if(a>b)
                                                cout<<endl<<a<<"is greater";
                                else
                                                cout<<endl<<b<<"is greater";
                }
};

int main()
{
                int c,d;
                cout<<endl<<"enter number";
                cin>>c;
                cin>>d;
                maxi a(12,56),b(c,d),e;
                a.maximum();
                b.maximum();
                e.maximum();
                return 0;
}

