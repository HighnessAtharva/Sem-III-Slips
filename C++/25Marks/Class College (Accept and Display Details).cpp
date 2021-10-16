/* Slip no : 11_2 Create a class College containing data members as College_Id, College_Name,
Establishment_year, University_Name.  Write a C++ program with following member functions:
i. To accept ‘n’ College details
ii. To display College details of a specified University
iii. To display College details according to a specified establishment year
 (Use Array of Object and Function overloading) */

#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class college
{
int id,n,yr;
char name[10],uname[10];
public:
void accept()
{
cout<<"\n Enter id : ";
cin>>id;
cout<<"\n Enter name : ";
cin>>name;
cout<<"\n Enter university name : ";
cin>>uname;
cout<<"\n Enter year : ";
cin>>yr;

}

void display()
{
cout<<"\n id = "<<id<<"\n name = "<<name<<"\n University name = "<<uname<<"\n year = "<<yr<<endl;
}

int display(char unin[])
{
if(strcmp(uname,unin)==0)
{
display();
return 1;
}
else return 0;
}

int display(int year)
{
if(yr==year)
{
display();
return 1;
}
else return 0;
}
};

int main()
{
int n,yr,a;
college ob[10];
char uni[10];
cout<<"enter no of colleges: ";
cin>>n;
for(int i=0;i<n;i++)
{
ob[i].accept();
}

for(int i=0;i<n;i++)
{
ob[i].display();
}

cout<<"\n Enter uname to search : "<<endl;
cin>>uni;
int cnt=0;
for(int i=0;i<n;i++)
{
a=ob[i].display(uni);
if(a==1)
                cnt++;
}
if(cnt==0)
cout<<"\n University name is NOT found "<<endl;

cout<<"\n Enter establishment year to search : "<<endl;
cin>>yr;
cnt=0;
for(int i=0;i<n;i++)
{
a=ob[i].display(yr);
if(a==1)
cnt++;
}
if(cnt==0)
cout<<"\n Year NOT found ";

return 0;
}
