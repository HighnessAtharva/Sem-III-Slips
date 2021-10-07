/* Slip no : 29_1 Write a C++ program to find maximum of  two integer numbers and two float numbers by using function template.*/

#include<conio.h>
#include<iostream>
using namespace std;
template<class T>
T maximum(T n1,T n2)
{
                if(n1>n2)
                                return n1;
                else
                                return n2;
}
int main()
{    int no1,no2;
                float no3,no4;

                cout<<"\n Enter 2 interger no : ";
                cin>>no1>>no2;
                cout<<"\n no1 = "<<no1 <<"\t no2 = "<<no2;
                cout<<"\n maximum = "<<maximum(no1,no2);

                cout<<"\n Enter 2 float no : ";
                cin>>no3>>no4;
                cout<<"\n no1 = "<<no3 <<"\t no2 = "<<no4;
                cout<<"\n maximum = "<<maximum(no3,no4);

                return 0;

}
