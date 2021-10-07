/* Slip no : 25_2 Create a class Person that contains data members as Person_Name, City, Mob_No. Write a C++ program to perform following functions:
To accept and display Person information
To search the mobile number of a given person
To search the Person details of a given mobile number
(Use Function Overloading)        */

#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
class person
 {
     char name[10],city[10],mno[12];
     public:
     void accept()
     {
                cout<<"\n Enter name : ";
                cin>>name;
                cout<<"\n Enter city : ";
                cin>>city;
                cout<<"\n Enter mob no : ";
                cin>>mno;
     }

     void display()
     {
                cout<<"\n Name of person = "<<name;
                cout<<"\n city = "<<city<<"\n mobile no = "<<mno;
                cout<<"\n=======================================";
     }

     int display(char a[])
     {
                if(strcmp(name,a)==0)
                 { cout<<"mno="<<mno;
                   return 1;
                 }
                   return 0;
     }


     int display(char mbno[],int no)
     {
                if(strcmp(mno,mbno)==0)
                 {
                                display();
                   return 1;
                 }
                   return 0;
                }

};

int main()
 {
    int n,i,cnt=0,ans;
    char sname[20],mbno[12];
    person ob[20];

    cout<<"\n Enter no of persons : ";
    cin>>n;
    for(i=0;i<n;i++)
     {
                ob[i].accept();
     }

    for(i=0;i<n;i++)
     {
                ob[i].display();
     }

    cout<<"\n Enter name of person to be search : ";
    cin>>sname;
    for(i=0;i<n;i++)
     {
                ans=ob[i].display(sname);
                if(ans==1)
                cnt++;
     }
      if(cnt==0)
      cout<<"\n person not found\n ";

   cout<<"\n Enter mobile no to be search : ";
    cin>>mbno;
                cnt=0,ans=0;
    for(i=0;i<n;i++)
     {
                 ans=ob[i].display(mbno,1);
                 if(ans==1)
                 cnt++;
     }
       if(cnt==0)
       cout<<"\n person not found\n";


   return 0;
}
