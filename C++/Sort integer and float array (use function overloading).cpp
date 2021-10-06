/* Slip no : 30_1 Write a C++ program to sort integer and float array elements in ascending order by using function overloading. */


#include<iostream>
#include<conio.h>
using namespace std;
class sorting
{
                public:
                                double a[10];
                                int n,i;
                public:
                                void sort(int [],int);
                                void sort(float[],int);
};

void sorting::sort(float a[],int n)
{
                float temp;
                for(i=n-1;i>=0;i--)
                {
                                for(int j=0;j<i;j++)
                                {

                                                if(a[j]>a[j+1])
                                                {
                                                                temp=a[j];
                                                                a[j]=a[j+1];
                                                                a[j+1]=temp;
                                                }//if
                                }//2nd for
                } //1st for
}

void sorting::sort(int a[],int n)
{
                int temp;
                for(i=n-1;i>=0;i--)
                {
                                for(int j=0;j<i;j++)
                                {
                                                if(a[j]>a[j+1])
                                                {
                                                                temp=a[j];
                                                                a[j]=a[j+1];
                                                                a[j+1]=temp;
                                                }
                                }
                }
}

int main()
{
                int n,i;
                int a[10];float a1[10];
                sorting s1;

                cout<<"\nEnter how many element :";
                cin>>n;
                for(i=0;i<n;i++)
                {       cout<<"\nEnter element";
                                cin>>a[i];
                }
                s1.sort(a,n);
                cout<<"\Sorted element For integer array: \n";
                for(i=0;i<n;i++)
                {
                                cout<<"\t"<<a[i];
                }

                cout<<"\nEnter how many element :";
                cin>>n;

                for( i=0;i<n;i++)
                {       cout<<"\n Enter element :";
                                cin>>a1[i];
                }
                s1.sort(a1,n);
                cout<<"\Sorted element For float array: \n";
                for(i=0;i<n;i++)
                {
                                cout<<"\t"<<a1[i];
                }
                return 0;
}
