/* Slip no 5_1 : Write a C++ program to create a class Item with data members Item_Code, Item_Name, Item_Price. Write member functions to accept and display Item information also display number of objects created for a class. (Use Static data member and Static member function)         */


#include<iostream>
#include<conio.h>
using namespace std;
class item
{
                int code,price;
                char i_name[20];
                static int cnt;
                public:
                void getdata()
                {
                                cout<<"\nenter item code\t\t";
                                cin>>code;
                                cout<<"\nenter item name\t\t";
                                cin>>i_name;
                                cout<<"\nenter item price\t";
                                cin>>price;
                                cnt++;
                }
                void display()
                {
                                //cout<<"\n*********************OUTPUT***********************";
                                cout<<"\n\nitem code =\t"<<code;
                                cout<<"\nitem name =\t"<<i_name;
                                cout<<"\nitem price =\t"<<price;
                }
                static void nob()
                {
                                cout<<"\n number of objects created for class are\t"<<cnt;
                }
};
int item::cnt;
int main()
{

                item ob[10];
                int n;
                cout<<"\n Enter how many items : ";
                cin>>n;
                for(int i=0;i<n;i++)
                                ob[i].getdata();
                for(int i=0;i<n;i++)
                                ob[i].display();
                ob[n-1].nob();
                return 0;
}
