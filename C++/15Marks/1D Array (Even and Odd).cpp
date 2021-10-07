/*Slip no : 7_1 Write a C++ program to create a class which contains
  single dimensional integer array of given size. Write a member function to
  display even and odd numbers from a given array.
  (Use Dynamic Constructor to allocate and Destructor to free memory of
  an object) */

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class dynamic
{
                int size,*ptr,*p;
                public:
                dynamic(int no)
                {
                                size=no;
                                ptr=new int[size];
                                for(int i=0;i<size;i++)
                                {
                                                cout<<"enter element";
                                                cin>>ptr[i];
                                }
                }
                void display()
                {
                                cout<<"elements are";
                                for(int i=0;i<size;i++)
                                {
                                                cout<<ptr[i]<<"\t";
                                }
                }

                void evnodd()
                {
                                int i;
                                cout<<"even nos are : \t";
                                for(i=0;i<size;i++)
                                {
                                                if(ptr[i]%2==0)
                                                {
                                                                cout<<ptr[i];
                                                                cout<<"\t";
                                                }
                                }
                                cout<<"\n Odd nos are : \t ";
                                for(i=0;i<size;i++)
                                {
                                                if(ptr[i]%2!=0)
                                                {
                                                                cout<<ptr[i];
                                                                cout<<"\t";
                                                }
                                }
                }

                ~dynamic()
                {
                    delete ptr;
                }

};

int main()
{
                int n;

                cout<<"enter size";
                cin>>n;
                dynamic d(n);
                d.display();
                d.evnodd();
                return 0;
}

