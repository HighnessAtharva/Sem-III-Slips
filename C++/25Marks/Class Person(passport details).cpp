/* slip 1_2 Create class Person which contains data member as Passport_Id,
Person_name,Nationality,  Gender, Date_of_Birth, Date_of_Issue,
Date_of_expiry .
Write a c++ program to perform following member functions:
Enter details of all persons
Display passport details of one person
Display passport details of  all persons
(Use Function overloading and Array of object).*/


#include<conio.h>
#include<iostream>
using namespace std;
class Person
{
int id;
char name[10],gender[5],nationality[10];
char dob[10],issue[10],exp[10];
public:
void accept()
{
cout<<"Enter id ";
cin>>id;
cout<<"Enter name ";
cin>>name;
cout<<"Enter date of birth ";
cin>>dob;
cout<<"Enter gender ";
cin>>gender;
cout<<"Enter date of issue ";
cin>>issue;
cout<<"Enter date of expiry ";
cin>>exp;
cout<<"Enter nationality ";
cin>>nationality;
}

void display()
{
cout<<"Id = "<<id<<endl<<"Name = "<<name<<endl<<"Gender = "<<gender<<endl<<"DOB = "<<dob;
cout<<"Issue Date = "<<issue<<endl<<"Expiry Date = "<<exp<<endl<<"Nationality = "<<nationality;
cout<<endl;
}

int display(int pid)
{
if(id==pid)
{
display();
return 1;
}
else return 0;
}

};

int main()
{
Person ob[10];
int id,i,n;

cout<<"\n Enter how many person ";
cin>>n;
cout<<"\n Enter information "<<endl;
for(i=0;i<n;i++)
{
ob[i].accept();
}
cout<<"\n Detials of all person ";
cout<<"\n ============================ \n";
for(i=0;i<n;i++)
{
ob[i].display();
}

cout<<"\n Enter id to search ";
cin>>id;
int ans,cnt=0;
for(i=0;i<n;i++)
{
ans=ob[i].display(id);
if(ans==1)
cnt++;
}
if(cnt==0)
cout<<"id is not found...";
return 0;
}
