/* Slip no : 21_1 Write a C++ program to swap two integer values and two float values by using function template.*/


#include<conio.h>
#include<iostream>
using namespace std;
template<class T>

void swapper(T &n1,T &n2)
{
                T temp;
                temp=n1;
                n1=n2;
                n2=temp;
}
int main()
{       int no1,no2;
        float no3,no4;

                cout<<"\n Enter 2 interger no : ";
                cin>>no1>>no2;
                cout<<"\n Before swapping : ";
                cout<<"\n no1 = "<<no1 <<"\t no2 = "<<no2;
                swapper(no1,no2);
                cout<<"\n After swapping : ";

                cout<<"\n no1 = "<<no1 <<"\t no2 = "<<no2;
                cout<<"\n Enter 2 float no : ";
                cin>>no3>>no4;
                cout<<"\n Before swapping : ";

                cout<<"\n no1 = "<<no3 <<"\t no2 = "<<no4;
                swapper(no3,no4);
                cout<<"\n After swapping : ";

                cout<<"\n no1 = "<<no3 <<"\t no2 = "<<no4;
                return 0;

}
