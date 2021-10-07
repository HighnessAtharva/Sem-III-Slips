/* Slip no : 9_2 Create  two base classes Learning_Info( Roll_No, Stud_Name, Class, Percentage) and Earning_Info(No_of_hours_worked, Charges_per_hour). Derive a class Earn_Learn_info from above two classes. Write necessary member functions to accept and display Student information. Calculate total money earned by the student. (Use constructor in derived class) */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class learning_info
{
   public:
   int rno;
   char name[20],cls[10];
   float per;
   learning_info(int roll,char sname[],char cl[],float perc)
   {
      rno=roll;
      strcpy(name,sname);
      strcpy(cls,cl);
      per=perc;
   }
   void display()
   {
      cout<<"\n Roll no = "<<rno<<"\n Name="<<name<<"\n class = "<<cls;
      cout<<"\n Percentage = "<<per;
   }
};

class earning_info
{
    public:
   int hrs,charges;
   earning_info(int hr,int chrgs)
   {
     hrs=hr;
     charges=chrgs;
   }
   void display()
   {
     cout<<"\n Hours = "<<hrs;
     cout<<"\t charges = "<<charges;
   }
};

class earn_learn_info:public learning_info,public earning_info
{
   public:
   earn_learn_info(int roll,char sname[],char cl[],float perc,int hr,int chrgs):learning_info(roll,sname,cl,perc),earning_info(hr,chrgs)
   {
   }
   void display()
   {
      learning_info::display();
      earning_info::display();
   }
   void calculate()
   {
                  int total;
                  total=charges*hrs;
                  cout<<"\n Money earned by student:= "<<total;
   }
};

int main()
{

    int rno,ch,hr;
    float p;
    char nm[10],c[10];
    earn_learn_info ob1(1,"abc","sy",77,5,50);
    ob1.display();
    ob1.calculate();
    cout<<"\n Enter rno : ";
    cin>>rno;
    cout<<"\n enter name : ";
    cin>>nm;
    cout<<"\n Enter class : ";
    cin>>c;
    cout<<"\n Enter percentage : ";
    cin>>p;
    cout<<"\n Enter working hr : ";
    cin>>hr;
    cout<<"\n Enter charges : ";
    cin>>ch;
    earn_learn_info ob2(rno,nm,c,p,hr,ch);
    ob2.display();
    ob2.calculate();
    return 0;
}
