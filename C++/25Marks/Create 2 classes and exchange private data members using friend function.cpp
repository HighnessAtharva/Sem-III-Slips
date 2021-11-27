/* Slip no : 24_2 Write a C++ program to create two classes Class1 and Class2. Each class contains one float data member.  Write following functions:
To accept float numbers
To display float numbers in right justified format with precision of two digits
To Exchange the private values of both these classes by using Friend function. */

#include<iostream>
#include<conio.h>
using namespace std;
class class2;
class class1
{
float a;
public:
void accept()
{
  cout<<"\n Enter number : ";
  cin>>a;
}
void display()
{
  cout.setf(ios::left,ios::adjustfield);
  cout.width(20);
  cout.precision(2);
  cout<<"\n a="<<a;
}
friend void swap(class1 &,class2 &);
};

class class2
{
float b;
public:
void accept()
{
   cout<<"\n Enter number : ";
   cin>>b;
}
void display()
{
  cout.setf(ios::left,ios::adjustfield);
  cout.width(20);
   cout.precision(2);
  cout<<"\n b="<<b;
}
friend void swap(class1 &,class2 &);
};

void swap(class1 &ob1,class2 &ob2)
{
  float temp;
  temp=ob1.a;
  ob1.a=ob2.b;
  ob2.b=temp;
}

int main()
{
  class1 ob1;
  class2 ob2;
  ob1.accept();
  ob2.accept();
  ob1.display();
  ob2.display();
  swap(ob1,ob2);
  cout<<"\n After swapping: ";
  ob1.display();
  ob2.display();
  return 0;
}
