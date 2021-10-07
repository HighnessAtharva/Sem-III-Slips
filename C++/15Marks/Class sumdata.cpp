/* Slip no : 24_1 Create a C++ class Sumdata to perform following functions:
   int sum( int, int)  returns the addition of two integer arguments.
   float sum(flaot, float, float)  returns the addition of three float arguments.
   int sum( int [ ] ,int)  returns the sum of all elements in an array of size ‘n’.*/

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class sumdata
{
                public:
                                void sum(int a,int b)
                                {
                                                int c;
                                                c=a+b;
                                                cout<<"\n Addition = "<<c;
                                }

                                void sum(float a,float b,float c)
                                {
                                                float d;
                                                d=a+b+c;
                                                cout<<"\n Addition = "<<d;
                                }

                                void sum(int a[],int n)
                                {
                                                int sum=0;
                                                for(int i=0;i<n;i++)
                                                {
                                                                sum=sum+a[i];
                                                }
                                                cout<<"sum="<<sum;
                                }

                                void accept(int a[],int n)
                                {
                                                int sum=0;
                                                cout<<"enter elements";
                                                for(int i=0;i<n;i++)
                                                {
                                                                cin>>a[i];
                                                }
                                }


};

int main()
{
                int a,b,j,k[19];
                sumdata ob;
                float x,y,z;

                cout<<"\n Enter 2 numbers";
                cin>>a;
                cin>>b;
                ob.sum(a,b);
                cout<<"\n How many numbers you want to enter";
                cin>>j;
                ob.accept(k,j);
                ob.sum(k,j);
                cout<<"\n Enter 3 float values";
                cin>>x;
                cin>>y;
                cin>>z;
                ob.sum(x,y,z);
                return 0;
}
