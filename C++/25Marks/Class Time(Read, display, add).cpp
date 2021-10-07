/* Slip no : 6_2 Create a class Time which contains data members as: Hours, Minutes and Seconds. Write C++ program to perform following necessary member functions:
To read time
To display time in format like: hh:mm:ss
To add two different times (Use Objects as argument)   */

#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
                int hr,min,sec;
                public:
                void settime(int x,int y,int z)
                {              hr=x;
                                min=y;
                                sec=z;
                }

                void showtime()
                {              cout<<"\n"<<hr<<":"<<min<<":"<<sec<<endl;
                }

                Time add(Time t)
                {
                                Time t1;
                                t1.sec=sec+t.sec;
                                t1.min=t1.sec/60;
                                t1.sec=t1.sec%60;
                                t1.min=t1.min+min+t.min;

                                t1.hr=t1.min/60;
                                t1.min=t1.min%60;
                                t1.hr=t1.hr+hr+t.hr;
                                return t1;
                }

};

int main()
{
                int h,m,s;
                cout<<"\n Enter hr:\t";
                cin>>h;
                cout<<"\n Enter min:\t";
                cin>>m;
                cout<<"\n Enter sec:\t";
                cin>>s;
                Time t1;
                t1.settime(h,m,s);
                t1.showtime();
                Time t2;
                cout<<"\n Enter hr:\t";
                cin>>h;
                cout<<"\n Enter min:\t";
                cin>>m;
                cout<<"\n Enter sec:\t";
                cin>>s;

                t2.settime(h,m,s);
                t2.showtime();

                Time t3;
                cout<<"\t Addition of 2 times : ";
                t3=t1.add(t2);
                t3.showtime();
                return 0;
}
