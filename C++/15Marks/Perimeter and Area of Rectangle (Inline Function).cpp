/* Slip no : 12_1 Write a C++ program to accept length and width of a rectangle. Calculate and display perimeter as well as area of a rectangle by using Inline function. */

#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
                float l,w;
                public:
                void getdata()
                {
                                cout<<"\nEnter length of rectangle : ";
                                cin>>l;
                                cout<<"\nEnter width of rectangle : ";
                                cin>>w;
                }
                inline void Peri()
                {
                                cout<<"\nPerimeter of rectangle = "<<2*(l+w);
                }
                inline void Area()
                {
                                cout<<"\nArea of rectangle = "<<l*w;
                }
};
int main()
{

                rectangle obj;
                obj.getdata();
                obj.Peri();
                obj.Area();
                return 0;
}
