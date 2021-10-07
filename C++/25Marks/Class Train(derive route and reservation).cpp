/*Slip no :7_2 Create a Base class Train containing protected data members as Train_no, Train_Name. Derive a class Route (Route_id, Source, Destination) from Train class. Also derive a class Reservation(Number_Of_Seats, Train_Class, Fare, Travel_Date) from Route. Write a C++ program to perform following necessary functions :
Enter  details of n reservations
Display details of all reservations
Display reservation details of a specified Train class */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Train
{
                protected :
                int t_no;
                char t_name[20];
                public:
                void getdata()
                {
                                cout<<"\n Enter train no";
                                cin>>t_no;
                                cout<<"Enter tain name ";
                                cin>>t_name;
                }
                void display()
                {
                                cout<<"\nEnter train no "<<t_no;
                                cout<<"\nEnter tain name "<<t_name;

                }
};

class Route : public Train
{

                int r_id;
                char src[20];
                char dest[20];
                public:
                void getdata()
                {              Train::getdata();
                                cout<<"Enter route id \t";
                                cin>>r_id;
                                cout<<"Enter source \t";
                                cin>>src;
                                cout<<"Enter destination \t";
                                cin>>dest;
                }
                void display()
                {              Train::display();
                                cout<<"\n route id "<<r_id;
                                cout<<"\nsource is  "<<src;
                                cout<<"\ndestination is "<<dest;

                }
};

class Reservation : public Route
{              int seat; float f;
                char cls[20];
                char date[20];
                public:
                void getdata()
                {              Route::getdata();
                                cout<<"Enter no of seats \t";
                                cin>>seat;
                                cout<<"Enter classs \t";
                                cin>>cls;
                                cout<<"Enter fare \t";
                                cin>>f;
                                cout<<"Enter date for reservation";
                                cin>>date;
                }
                void display()
                {
                                Route::display();
                                cout<<"\nNO of seats is "<<seat;
                                cout<<"\nClass is  "<<cls;
                                cout<<"\nFare is "<<f<<"\nDate is "<<date;
                                cout<<"\n===============================" ;

                }
                int search(char s[])
                {
                                if(strcmp(s,cls)==0)
                                {
                                display();
                                return 1;
                                }
                                return 0;

                }
};

int main()
{              int no,ans,i;
                Reservation R[10];
                cout<<"\n Enter how many resevation";
                cin>>no;
                for(int i=0;i<no;i++)
                {
                                R[i].getdata();
                }
                cout<<"Information about resrcation is : ";
                for(i=0;i<no;i++)
                {
                                R[i].display();

                }
                cout<<"\n Enter name of class ";
                char scls[10];
                cin>>scls  ;
                int cnt=0;
                for(i=0;i<no;i++)
                {    ans=R[i].search(scls);
                                if(ans==1)
                                cnt++;
                }
                if(cnt==0)
                {
                                cout<<"\n Record not found";
                }
                return 0;
}
