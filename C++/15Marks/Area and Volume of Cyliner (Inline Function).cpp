#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class cylinder
{
                float r,h;
                public:
                void getdata()
                {
                                cout<<"\n Enter radius : ";
                                cin>>r;
                                cout<<"\n Enter height : ";
                                cin>>h;
                }
                inline void area()
                {
                                cout<<"\n Area of cylinder =\t"<<2*3.14*r*h;
                }
                inline void volume()
                {
                                cout<<"\nVolume of clyinder =\t"<<3.14*r*r*h;
                }
};

int main()
{

                cylinder c;
                c.getdata();
                c.volume();
                c.area();
                return 0;
}
