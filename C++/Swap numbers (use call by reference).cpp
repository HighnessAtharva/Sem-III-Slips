/* Slip no : 15_1 Write a C++ program to create a class which contains two data members. Write member functions to accept display and swap two entered numbers using call by reference.  */

#include<iostream>
#include<conio.h>
using namespace std;
class swapp
{
                public:
                                int a,b;
                                void accept()
                                {
                                                cout<<"enter two numbers";
                                                cin>>a>>b;
                                }
                                void swaptwo(int &a,int &b)
                                {
                                                int temp;
                                                temp=a;
                                                a=b;
                                                b=temp;
                                }
                                void display()
                                {
                                                cout<<"\n no1 = "<<a<<"\t no2 = "<<b;
                                                swaptwo(a,b);
                                }
};
int main()
{
                swapp s;
                s.accept();
                cout<<"\n Before swapping : ";
                s.display();
                cout<<"\n After swapping : ";
                s.display();
                return 0;
}
