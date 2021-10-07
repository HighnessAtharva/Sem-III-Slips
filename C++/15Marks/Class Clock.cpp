/* Slip no : 25_1 Create a class Clock that contains integer data members as hours, minutes and seconds. Write a C++ program to perform following member functions:
   void setclock(int, int, int ) to set the initial time of clock object.
   void showclock() to display the time in hh:min:sec format.
   Write a function tick( ) which by default increment the value of second by 1 or according to user specified second. The clock uses 24 hours format.         */

#include<iostream>
#include<conio.h>
using namespace std;
class Clock
{
                int h,m,s,sec;
                public :
                void setclock(int hr,int min,int sec)
                {
                                h=hr;
                                m=min;
                                s=sec;
                }
                void showclock()
                {
                                cout<<"\n"<<h<<":"<<m<<":"<<s;
                }
                void tick()
                {
                                cout<<"\n Enter sec to be incremented : ";
                                cin>>sec;
                                s=s+sec;
                                if(s>=60)
                                {              m=m+s/60;
                                                s=s%60;
                                                if(m>=60)
                                                {
                                                                h=h+m/60;
                                                                m=m%60;
                                                }

                                }
                }
};

int main()
{
                Clock c;
                int hr,min,sec;
                cout<<"\n Enter hr : ";
                cin>>hr;
                cout<<"\n Enter min : ";
                cin>>min;
                cout<<"\n Enter sec : ";
                cin>>sec;
                c.setclock(hr,min,sec);
                c.showclock();
                c.tick();
                c.showclock();
                return 0;
}
