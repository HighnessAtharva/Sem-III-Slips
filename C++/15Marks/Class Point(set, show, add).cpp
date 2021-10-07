/* Slip no : 28_1 Create a class Point that has x & y as integer data members. Write a C++ program to perform following functions:
   void setpoint(int, int)    To set the specified values of x and y in object.
   void showpoint()            To display contents of point object.
   point addpoint(point) To add the corresponding values of x, and y in point argument to current point object return point.
 */

#include<conio.h>
#include<iostream>
using namespace std;
class point
{
                int x,y;
                public :
                void setpoint(int x1,int y1)
                {
                                x=x1;
                                y=y1;
                                //            cout<<x<<y;
                }

                void showpoint()
                {
                                cout<<"\n x = "<<x<<"\t y = "<<y;
                }

                point addpoint(point ob)
                {
                                point temp;
                                temp.x = x+ob.x;
                                temp.y = y+ob.y;
                                return temp;
                }
};

int main()
{
                int n1,n2,n3,n4;
                point p1,p2,p3;

                cout<<"\n Enter x,y co-ordinate: ";
                cin>>n1;
                cin>>n2;
                p1.setpoint(n1,n2);

                cout<<"\n Enter x,y co-ordinate: ";
                cin>>n3;
                cin>>n4;
                p2.setpoint(n3,n4);

                cout<<"\n 1st co-ordinate : ";
                p1.showpoint();
                cout<<"\n 2nd co-ordinate : ";
                p2.showpoint();

                cout<<"\n Addition is : ";
                p3=p1.addpoint(p2);
                p3.showpoint();
                return 0;

}
