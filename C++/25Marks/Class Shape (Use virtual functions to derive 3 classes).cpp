/* Slip no : 14_2 Create a base class Shape. Derive three different classes Circle, Rectangle and Triangle from Shape class. Write a C++ program to calculate area of Circle, Rectangle and Triangle. (Use pure virtual function). */


#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
public:
virtual void accept()=0;
virtual void area()=0;
};

class circle:public shape
{
public:
int r;
void accept()
{
  cout<<"\n Enter radius for circle : ";
  cin>>r;
}
void area()
{
  cout<<"\n Area of circle="<<3.14*r*r;
}
};

class rectangle:public shape
{
public:
int l,b;
void accept()
{
  cout<<"\n Enter length and breadth for rectangle : ";
  cin>>l;
  cin>>b;
}

void area()
{
   cout<<"\n Area of rectangle="<<l*b;

}
};

class triangle:public shape
{
  public:
  int b,h;
  void accept()
  {
     cout<<"\n Enter base and height for triangle : ";
     cin>>b;
     cin>>h;
  }

  void area()
  {
     cout<<"\n Area of triangle="<<0.5*b*h;
  }
};

int main()
{
     triangle t;
     circle c;
     rectangle r;
     shape *ptr;

     ptr=&t;
     ptr->accept();
     ptr->area();
     ptr=&c;
     ptr->accept();
     ptr->area();
     ptr=&r;
     ptr->accept();
     ptr->area();
     return 0;
}
