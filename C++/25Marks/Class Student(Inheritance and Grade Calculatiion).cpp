/* Slip no : 3_2 Create a base class Student(Roll_No, Name)  which derives two classes Academic_Marks(Mark1, Mark2, Mark3)  and Extra_Activities_Marks(Marks). Class Result(Total_Marks, Grade) inherits both Academic_Marks and Extra_Activities_Marks classes.  (Use Virtual Base Class)
                    Write a C++ menu driven program to perform the following functions:
                                                Build a master table
                                                Calculate Total_marks and grade              */

#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
class student
{
                 protected:
                                int rno;
                                char name[10];
                 public:
                                void accept()
                                {
                                                cout<<"\nEnter roll no if sudent : ";
                                                cin>>rno;
                                                cout<<"\nEnter the name of student :";
                                                cin>>name;
                                                cout<<endl;
                                }
                                void display()
                                {
                                                cout<<"\nRoll no : "<<rno<<"\t Name : "<<name<<endl;
                                 }
 };
 class Academic_Mark:public virtual student
 {
                protected:
                                int mark1,mark2,mark3;
                public:
                                void accept_A()
                                {
                                                cout<<"\nEnter the 3 subject marks :";
                                                cin>>mark1>>mark2>>mark3;
                                }
                                void display_A()
                                {
                                                cout<<"\nMarks sub1 :"<<mark1<<"\nMarks sub2 :"<<mark2<<"\nMarks sub3 :"<<mark3;
                                }
 };
 class Extra_Activity : public virtual student
 {
                 protected:
                                int mark;
                 public:
                                void accept_E()
                                {
                                                cout<<"\nEnter Extra Activity mark :";
                                                cin>>mark;
                                }
                                void display_E()
                                {
                                                cout<<"\nEnter Extra activity mark  :"<<mark<<endl;
                                }
  };

class result: public Academic_Mark,public Extra_Activity
 {
                public:
                                 int total;
                                 char grade[10];
                                 float per;

                                void cal_res()
                                {
                                                total=mark1+mark2+mark3+mark;
                                                per=(total/3);
                                                if(per>=70)
                                                                strcpy(grade,"distinction");
                                                else
                                                                if(per<70 && per>=60)
                                                                strcpy(grade,"A+");
                                                else
                                                                if(per<60 && per>=50)
                                                                strcpy(grade,"A");
                                                else if(per<50 && per>=40)
                                                                strcpy(grade,"B");
                                                else
                                                                strcpy(grade,"Fail");
                                                cout<<"\n ==============================";
                                                cout<<"\nTotal :"<<total<<"\nGrade :"<<grade<<endl;

                                }
   };

int main()
 {

                int n,ch;
                result obj;
                do
                {
                cout<<"\n 1.student info \n 2.Academic mark \n 3.Extra activity mark \n 4.Result \n 0.Exit";
                cout<<"\n Enter your choice : ";
                cin>>ch;
                switch(ch)
                                {              case 1: obj.accept();
                                                                break;
                                                case 2: obj.accept_A();
                                                                break;
                                                case 3: obj.accept_E();
                                                                break;
                                                case 4: obj.display();
                                                                obj.display_A();
                                                                obj.display_E();
                                                                obj.cal_res();
                                                                break;
                                                case 0: break;
                                                default: cout<<"\n Invalid choice : ";
                                }
                   }while(ch!=0);

                return 0;
  }
