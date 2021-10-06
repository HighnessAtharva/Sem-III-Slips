/* Slip no : 13_1 Write a C++ program to calculate area of cone, sphere and circle by using function overloading. */

#include<iostream>
#include<conio.h>
using namespace std;
class calculate
{
                float r_cn,r_s,side;
                int r_c;
                public:

                void area(float r, float s)
                {
                                r_c=r;
                                side=s;
                                cout<<"\nArea of cone =\t\t"<<3.14*r_c*side;
                }

                void area(float r)
                {
                                r_s=r;
                                cout<<"\nArea of sphere =\t"<<4*3.14*r_s*r_s;
                }

                void area(int r)
                {
                                r_c=r;
                                cout<<"\nArea of circle =\t"<<3.14*r_c*r_c;
                }
};
int main()
{
                float r_cone,side;
                int r_circle;
                float sp;
                calculate c;
                cout<<"\nEnter radius of cone\t";
                cin>>r_cone;
                cout<<"\nEnter side of cone\t";
                cin>>side;
                cout<<"\nEnter radius of sphere\t";
                cin>>sp;
                cout<<"\nEnter radius  of circle\t";
                cin>>r_circle;
                c.area(r_cone,side);
                c.area(sp);
                c.area(r_circle);
                return 0;
}

