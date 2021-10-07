/* Slip no : 9_1 Write a C++ program to create a class Person which contains data members as P_Name, P_City, P_Contact_Number.Write member functions to accept and display five Persons information. Design User defined
   Manipulator to print P_Contact_Number. (For Contact Number set right justification,
   maximum width to 10 and fill remaining spaces with *) */

#include<iostream>
#include<conio.h>
//#include<manip.h>
using namespace std;
class person
{
                char p_name[20],p_city[10];
                long int p_c_no;
                public:
                void getdata()
                {
                                cout<<"\n enter person name\t";
                                cin>>p_name;
                                cout<<"\n enter persons city\t";
                                cin>>p_city;
                                cout<<"enter person contact no\t";
                                cin>>p_c_no;
                }


                void display()
                {
                                cout<<"\n\n*************OUTPUT******************\n";
                                cout<<"\nperson name =\t"<<p_name;
                                cout<<"\nperson city =\t"<<p_city;
                                //cout<<"\npersons contact number is\t"<<p_c_no;
                                cout.width(10);
                                cout.fill('*');
                                cout<<endl<<p_c_no;
                                //cout<<cout.setw(10)<<p_c_no;
                }
};
int main()
{
                int i;
                person p[5];
                for(i=0;i<1;i++)
                {
                                p[i].getdata();
                }
                for(i=0;i<1;i++)
                {
                                p[i].display();
                }
                return 0;
}
