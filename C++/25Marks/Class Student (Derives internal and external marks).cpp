/* Slip no : 15_2 Create a base class Student(Roll_No, Name, Class)  which derives two classes Internal_Marks(IntM1, IntM2, IntM3, IntM4, IntM5)  and External_Marks(ExtM1 ExtM2, ExtM3, ExtM4, ExtM5). Class Result(T1, T2, T3, T4, T5) inherits both Internal_Marks and External_Marks classes.  (Use Virtual Base Class) Write a C++ menu driven program to perform the following functions:
To Accept and display student details
Calculate Subject wise total marks obtained. Check whether student has passed  in Internal and External Exam of each subject. Also check whether he has passed in respective subject or not and display result accordingly.   */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
                 protected:
                                int rno;
                                char name[10],cls[10];
                 public:
                                void accept()
                                {
                                                cout<<"\n Enter roll no if sudent : ";
                                                cin>>rno;
                                                cout<<"\n Enter the name of student :";
                                                cin>>name;
                                                cout<<"\n Enter the class of student :";
                                                cin>>cls;
                                }
                                void display()
                                {
                                                cout<<"\n Roll no. :"<<rno<<"\n Name :"<<name<<"\n class : "<<cls<<endl;
                                 }
 };
 class Internal_Mark:public virtual student
 {
                protected:
                                int i_mark[6];
                public:
                                int internal_mark()
                                {              int i;
                                                cout<<"\n Enter the 6 subjects marks :";
                                                for(i=0;i<6;i++)
                                                {              cout<<"subject "<<i+1<<" : ";
                                                                cin>>i_mark[i];
                                                }
                                                for(i=0;i<6;i++)
                                                {              if(i_mark[i]>20)
                                                                return 1;
                                                }
                                                return 0;
                                }
                                void i_display()
                                {
                                                cout<<"\n Internal marks is : \n ";
                                                for(int i=0;i<6;i++)
                                                {
                                                                cout<<"subject "<<i+1<<"\t"<<i_mark[i]<<endl;
                                                }
                                }
 };
 class External_Mark:public virtual student
 {
                protected:
                                int e_mark[6];
                public:
                                int external_mark()
                                {              int i;
                                                cout<<"\n Enter the 6 subjects External marks :";

                                                for(i=0;i<6;i++)
                                                {              cout<<"\n subject "<<i+1<<" : ";
                                                                cin>>e_mark[i];
                                                }
                                                for(i=0;i<6;i++)
                                                {              if(e_mark[i]>80 || e_mark[i]<32)
                                                                return 1;
                                                }
                                                return 0;

                                }
                                void e_display()
                                {
                                                cout<<"\n eXternal marks are : \n ";
                                                for(int i=0;i<6;i++)
                                                {
                                                                cout<<"subject "<<i+1<<"\t"<<e_mark[i]<<endl;
                                                }
                                }
 };

 class result: public Internal_Mark,public External_Mark
 {
                                 int total[6];
                                 char grade[10];
                                 float per;
                public:
                                 void cal_res()
                                {              for(int i=0;i<6;i++)
                                                                {
                                                                                total[i]=i_mark[i]+e_mark[i];
                                                                }
                                }


                                void dis_res()
                                 {
                                                display();
                                                i_display();
                                                e_display();
                                                cout<<"Total marks : \n ";
                                                for(int i=0;i<6;i++)
                                                {cout<<"subject "<<i+1<<"\t"<<total[i]<<endl;}

                                }

   };
 int main()
 {


                int n,ch,a,b;
                result obj;
                do
                {
                cout<<"\n 1.student info \n 2.Internal mark \n 3.Extranal mark \n 4. Result \n 0. exit";
                cout<<"\n Enter your choice : ";
                cin>>ch;
                switch(ch)
                                {              case 1: obj.accept();
                                                                break;
                                                case 2: a=obj.internal_mark();
                                                                break;
                                                case 3: b=obj.external_mark();
                                                                break;
                                                case 4: if(a==0 && b==0)
                                                                {obj.cal_res();
                                                                obj.dis_res();}
                                                                else cout<<"Fail";
                                                                break;
                                                case 0: break;
                                                default: cout<<"\n Invalid choice : ";
                                }
                   }while(ch!=0);
                return 0;
 }
