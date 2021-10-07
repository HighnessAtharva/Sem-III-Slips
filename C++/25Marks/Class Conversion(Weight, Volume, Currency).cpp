/* Slip no : 22_2 Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram), Volume(Milliliter, Liter), Currency(Rupees, Paise) from Conversion class. Write a C++ program to perform read, convert and display operations. (Use Pure virtual function) */

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class conversion
{
public:
virtual void accept1()=0;
virtual void accept2()=0;
virtual void convert1()=0;
virtual void convert2()=0;
};
class weight:public conversion
{
  public:
  float gm,kgm;
  void accept1()
  {
     cout<<"Enter grams to convert : ";
     cin>>gm;
  }
  void accept2()
  {
      cout<<"Enter kilograms to convert : ";
      cin>>kgm;
  }
  void convert1()
  {
     cout<<"After conversion gm = "<<gm/1000<<" kgm\n";
  }
  void convert2()
  {
      cout<<"After conversion kgm = "<<kgm*1000<<" gm\n";
  }
};

class volume:public conversion
{
   public:
   float ml,ltr;
   void accept1()
   {
      cout<<"\n Enter mililiter to convert : ";
      cin>>ml;
   }
   void accept2()
   {
       cout<<"\n Enter liter to convert : ";
       cin>>ltr;
   }
   void convert1()
   {
       cout<<"After conversion ml = "<<ml/1000<<" ltr\n";
   }
   void convert2()
   {
                cout<<"After conversion ltr = "<<ltr*1000<<" ml\n";
   }
};

class currency:public conversion
{
   public:
   float ps,rs;
   void accept1()
   {
      cout<<"Enter paise to convert :";
      cin>>ps;
   }
   void accept2()
   {
       cout<<"Enter rupees to convert : ";
       cin>>rs;
   }
   void convert1()
   {
       cout<<"After conversion ps = "<<ps/100<<" rs\n";
   }
   void convert2()
   {
                cout<<"After conversion rs = "<<rs*100<<" ps\n";
   }
};

int main()
{
int ch;
weight w;
volume v;

currency c;

do
{
   cout<<"\nEnter your choice\n";
   cout<<"1.weight\t2.volume\t3.currency\t4.exit\n";
   cin>>ch;
   switch(ch)
   {
     case 1: int ch1;
                     cout<<"Enter your choice to convert weight\n";
                     cout<<"1.gm to kgm\t2.kgm to gm \n";
                     cin>>ch1;
                     if(ch1==1)
                     {
                                w.accept1();
                                w.convert1();
                                break;
                     }
                     else if(ch1==2)
                     {
                                w.accept2();
                                w.convert2();
                                break;
                     }
                     else
                     {
                                cout<<"wrong choice";
                                break;
                     }

     case 2:  int ch2;
                      cout<<"Enter choice to convert to volume\n";
                      cout<<"1.ml to ltr\t2.ltr to ml \n";
                      cin>>ch2;
                      if(ch2==1)
                      {
                                  v.accept1();
                                  v.convert1();
                                  break;
                      }
                      else if(ch2==2)
                      {
                                  v.accept2();
                                  v.convert2();
                                  break;
                      }
                      else
                      {
                                 cout<<"wrong choice";
                                 break;
                      }

     case 3:int ch3;
                    cout<<"Enter choice to convert currency";
                    cout<<"\n1psp to rp\t2.rp to ps \n";
                    cin>>ch3;
                    if(ch3==1)
                    {
                       c.accept1();
                       c.convert1();
                       break;
                    }
                    else if(ch3==2)
                    {
                       c.accept2();
                       c.convert2();
                       break;
                    }
                    else
                    {
                       cout<<"wrong choice";
                       break;
                    }
     case 4:break;

     default:  cout<<"Enter valid choice";
                       break;
     }
}while(ch!=4);
return 0;
}
