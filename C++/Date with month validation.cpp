
/* Slip no 3_1: Write a C++ program to create a class Date which contains three data members as dd, mm, yyyy. Create and initialize the object by using parameterized constructor and display date in dd-mon-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month.*/

#include<iostream>
#include<conio.h>
using namespace std;
class date
{
                int dd,mm,yy;
                public:
                date(int d,int m,int y)
                {
                                dd=d;
                                mm=m;
                                yy=y;
                }
                void display()
                {
                                cout<<"\ngiven date is\t";
                                cout<<dd<<"-"<<mm<<"-"<<yy;
                                cout<<"\nAfter formating  date is\t";
                                switch(mm)
                                {
                                                case 1:
                                                                cout<<"\n"<<dd<<"-Jan-"<<yy;
                                                                break;
                                                case 2:
                                                                cout<<"\n"<<dd<<"-Feb-"<<yy;
                                                                break;
                                                case 3:
                                                                cout<<"\n"<<dd<<"-Mar-"<<yy;
                                                                break;
                                                case 4:
                                                                cout<<"\n"<<dd<<"-Apr-"<<yy;
                                                                break;
                                                case 5:
                                                                cout<<"\n"<<dd<<"-May-"<<yy;
                                                                break;
                                                case 6:
                                                                cout<<"\n"<<dd<<"-Jun-"<<yy;
                                                                break;
                                                case 7:
                                                                cout<<"\n"<<dd<<"-Jul-"<<yy;
                                                                break;
                                                case 8:
                                                                cout<<"\n"<<dd<<"-Aug-"<<yy;
                                                                break;
                                                case 9:
                                                                cout<<"\n"<<dd<<"-Sep-"<<yy;
                                                                break;
                                                case 10:
                                                                cout<<"\n"<<dd<<"-Oct-"<<yy;
                                                                break;
                                                case 11:
                                                                cout<<"\n"<<dd<<"-Nov-"<<yy;
                                                                break;
                                                case 12:
                                                                cout<<"\n"<<dd<<"-Dec-"<<yy;
                                                                break;
                                                default:
                                                                cout<<"\nInvalid month";
                                }
                }

};
int main()
{
                int m,dt,y;
                cout<<"\n Enter date : ";
                cin>>dt;
                cout<<"\n Enter month : ";
                cin>>m;
                cout<<"\n Enter year : ";
                cin>>y;
                date d(dt,m,y);
                d.display();
                return 0;
}
