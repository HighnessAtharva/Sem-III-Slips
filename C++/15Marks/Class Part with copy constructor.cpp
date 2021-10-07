
/* Slip4_1 : Write a C++ program to create a class Part which contains data members as Part_Id, Part_Name, Part_Price. Create and Initialize all values of Part object by using parameterized constructor and copy constructor. Display the values of Part object. (Part_price should be right justified with a precision of two digits) */

#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class part
{
                int pid;
                float price;
                char name[10];
                public:
                part(int prtid,float prce,char nam[])
                {
                                pid=prtid;
                                price=prce;
                                strcpy(name,nam);
                }
                part(part &ob1)
                {
                                pid=ob1.pid;
                                price=ob1.price;
                                strcpy(name,ob1.name);
                }

                void display()
                {
                                cout.precision(2);
                                cout<<"part id"<<"\t"<<pid<<endl;
                                cout<<"name"<<"\t"<<name<<endl;
                                cout<<"price"<<"\t"<<price<<endl;
                }
};

int main()
{
                int pid;
                float price;
                char name[10];
                cout<<"\n enter pid :";
                cin>>pid;
                cout<<"\n Enter price : ";
                cin>>price;
                cout<<"\n Entr name : ";
                cin>>name;
                part ob(pid,price,name),ob1(ob);
                ob.display();
                cout<<"\n Ater copy constructor : \n ";
                ob1.display();

                return 0;
}
