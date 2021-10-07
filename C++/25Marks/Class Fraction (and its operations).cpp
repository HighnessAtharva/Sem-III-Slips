/* Slip no : 30_2 Create a class Fraction containing data members as Numerator and Denominator.
Write a C++ program to overload operators ++ , -- and * to increment , decrement a Fraction and multiply two Fraction respectively. (Use constructor to initialize values of an object). */

#include<iostream>
#include<conio.h>
using namespace std;
class fraction
{
public:
int num,den;
fraction()
{
num=0;
den=0;
}
fraction(int n,int d)
{
num=n;
den=d;
}
void display()
{
cout<<num<<"/"<<den;
cout<<endl;
}
fraction operator++() //pre increment
{
num=den+num;
den=den;
return *this;
}
fraction operator--()              //pre decrement
{
num=den-num;
den=den;
return *this;
}
fraction operator++(int)     //post increment
{
fraction temp=*this;
num=num+den;
den=den;
return temp;
}
fraction operator--(int)     //post decrement
{
fraction temp=*this;
num=num-den;
den=den;
return temp;
}
friend fraction operator*(fraction,fraction);
};
fraction operator*(fraction f1,fraction f2)
{
fraction temp;
temp.num=f1.num*f2.num;
temp.den=f1.den*f2.den;
return temp;
}
int main()
{
fraction f1(5,10),f2(15,20),f4(25,30),f5(35,40);
f1.display();
f2.display();
fraction f3=f1*f2;
cout<<"multiplication of fraction is";
f3.display();
cout<<"pre increment is";
fraction f6=++f1;
f6.display();
cout<<"post increment is";
fraction f7=f2++;
f7.display();
cout<<"pre decrement is";
fraction f8=--f4;
f8.display();
cout<<"post decrement is";
fraction f9=f5--;
f9.display();
return 0;
}

