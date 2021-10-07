
/* Slip no : 28_2 Create a base class Media. Derive two different classes Book (Book_id, Book_name, Publication, Author, Book_price) and CD (CD_title, CD_price) from Media. Write a C++ program to accept and display information of both Book and CD. (Use pure virtual function) */

#include<iostream>
#include<conio.h>
using namespace std;
class media
{
public:
virtual void accept()=0;
virtual void display()=0;
};

class book:public media
{
public:
int bid,price;
char name[20],publication[29];
void accept()
{
   cout<<"\n Enter book id : ";
   cin>>bid;
   cout<<"\n Enter name : ";
   cin>>name;
   cout<<"\n Enter publication : " ;
   cin>>publication;
   cout<<"\n Enter price : ";
   cin>>price;
}

void display()
{
cout<<"\n bid = "<<bid<<"\n name = "<<name<<"\n publication = "<<publication<<"\n price = "<<price;
}

};

class CD:public media
{
public:
int price;
char title[20];
void accept()
{
cout<<"\n Enter title : ";
cin>>title;
cout<<"\n Enter price : ";
cin>>price;
}

void display()
{
cout<<"\n Title = "<<title<<"\n price = "<<price;
}
};

int main()
{
book ob1;
media *ptr;

ptr=&ob1;
ptr->accept();
ptr->display();
CD ob2;
ptr=&ob2;
ptr->accept();
ptr->display();
return 0;
}
