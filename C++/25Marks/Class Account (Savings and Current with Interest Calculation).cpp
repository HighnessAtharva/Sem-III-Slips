/* Slip no : 4_2 Create a base class Account (Acc_Holder_Name, Acc_Holder_Contact_No). Derive a two classes as Saving_Account(S_Acc_No., Balance) and Current_Account( C_Acc_No., Balance) from Account. Write a C++ menu driven program to perform following functions :
   Accept the details for n account holders.
   Display the details of n account holders by adding interest amount where interest rate for Saving account is 5% of balance and interest rate for Current account is 1.5% of   balance.*/

#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
                public:
                                char name[10];
                                long cno;
                public:
                                void getdata()
                                {
                                                cout<<"\n Account holder name : ";
                                                cin>>name;
                                                cout<<"\n contact no : ";
                                                cin>>cno;
                                }
                                void display()
                                {
                                                cout<<"\n Name :"<<name;
                                                cout<<"\n contact No :"<<cno;
                                }
};
class saving_Account:public Account
{
                int acc_no;
                float bal,T_bal;
                public:
                                void getdata()
                                {   Account::getdata();
                                                cout<<"\n Account no : ";
                                                cin>>acc_no;
                                                cout<<"\n Enter balance: ";
                                                cin>>bal;
                                }
                                void cal()
                                {
                                                T_bal=bal+(bal*0.05);
                                }
                                void display()
                                {  Account::display();

                                                cout<<"\nAccount no : "<<acc_no;
                                                cout<<"\nbalance :"<<bal<<endl;
                                                cout<<"\nTotal balance :"<<T_bal<<endl;
                                }
};

class current_Account:public Account
{              int acc_no;
                float bal;
                public:
                                void getdata()
                                {    Account::getdata();
                                                cout<<"\n Enter current account number";
                                                cin>>acc_no;
                                                cout<<"\n Enter available balance : ";
                                                cin>>bal;

                                }

                                void cal()
                                {
                                                bal=bal+(bal*(1.5/100));
                                }
                                void display()
                                {  Account::display();
                                                cout<<"\n Account no : "<<acc_no;
                                                cout<<"\n Total balance :"<<bal<<endl;
                                }


};
int main()
{
                int i,n,n1,ch;

                current_Account c[10];saving_Account s[10];

                do
                {cout<<"\n 1.Enter Current Account datails \n 2.Enter Saving Account Details \n 3.Display Current Account Holder \n 4.Display Saving Account Holders \n 0.Exit";
                                cout<<"\n Enter your choice : ";
                                cin>>ch;
                                switch(ch)
                                {
                                                case 1 : cout<<"\n Enter how many current Account holders ? ";
                                                                cin>>n;
                                                                for(i=0;i<n;i++)
                                                                {
                                                                                c[i].getdata();
                                                                                c[i].getdata();
                                                                }
                                                                break;
                                                case 2 : cout<<"\n Enter how many saving Account holders ? ";
                                                                cin>>n1;
                                                                for(i=0;i<n1;i++)
                                                                {
                                                                                s[i].getdata();
                                                                                s[i].cal();
                                                                }
                                                                break;
                                                case 3 : cout<<"\n Details of curent account holders : ";
                                                                for(i=0;i<n;i++)
                                                                {              c[i].cal();
                                                                                c[i].display();
                                                                }
                                                                break;
                                                case 4 : cout<<"\n Details of saving account holders : ";
                                                                for(i=0;i<n1;i++)
                                                                {
                                                                                s[i].display();
                                                                }
                                                                break;
                                                case 0 : break;
                                }
                }while(ch!=0);
                return 0;
}
