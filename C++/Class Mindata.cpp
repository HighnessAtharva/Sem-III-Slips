
/* Slip no : 26_1 Create a C++ class Mindata to perform following functions:
   int min( int, int) – returns the minimum of two integer arguments.
   float min(float, float,   float) – returns the minimum of three float arguments.
   int min( int [ ] ,int) – returns the minimum of all elements in an array of size ‘n’.
 */

#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class mindata
{
                public:
                                //int mini;
                                int min(int a,int b)
                                {
                                                if(a<b)
                                                                return a;
                                                else return b;
                                }

                                float min(float a,float b,float c)
                                {
                                                if(a<b&&a<c)
                                                                return a;
                                                else if(b<c)
                                                                return b;
                                                else
                                                                return c;
                                }

                                int min(int arr[],int n)
                                {
                                                int i=0,mini;
                                                mini=arr[i];
                                                for(i=1;i<n;i++)
                                                {
                                                                if(arr[i]<mini)
                                                                                mini=arr[i];
                                                }
                                                return mini;
                                }

};

int main()
{
                int a,b;
                int arr[100],n,c,e;
                float x,y,z,d;
                mindata ob;

                cout<<"\n Enter 2 integer no : ";
                cin>>a;
                cin>>b;
                c=ob.min(a,b);
                cout<<"\n Minimum = "<<c;

                cout<<"\n Enter 3 float values : ";
                cin>>x;
                cin>>y;
                cin>>z;
                d=ob.min(x,y,z);
                cout<<"\n Minimum = "<<d;

                cout<<"\n Enter no of elements : ";
                cin>>n;
                for(int i=0;i<n;i++)
                {cout<<"\n Enter element : ";
                                cin>>arr[i];
                }
                e=ob.min(arr,n);
                cout<<"\n Minimum of array is = "<<e;

                return 0;
}

