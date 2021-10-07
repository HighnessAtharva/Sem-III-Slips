/* Slip no : 14_1 Write a C++ program to create a class Book which contains data members as B_Id, B_Name, B_Author, B_Publication. Write member functions to accept and display Book information also display Count of books. (Use Static data member to maintain Count of books) */

#include<iostream>
#include<conio.h>
using namespace std;
class book
{
                int id;
                char name[20],author[20],pub[20];
                static int cnt;
                public:
                void getdata()
                {
                                cout<<"\nEnter book id : ";
                                cin>>id;
                                cout<<"\nEnter book name : ";
                                cin>>name;
                                cnt++;
                                cout<<"\nEnter author name : ";
                                cin>>author;
                                cout<<"\nEnter publication : ";
                                cin>>pub;
                }
                void display()
                {
                                //cout<<"\n\n*************OUTPUT*****************";
                                cout<<"\nbook id = "<<id;
                                cout<<"\nbook name = "<<name;
                                cout<<"\nAuthor name = "<<author;
                                cout<<"\npublication = "<<pub;
                }
                static void no_of_book()
                {
                                cout<<"\nNumber of book = "<<cnt;
                }
};

int book::cnt;

int main()
{               book b[20];int n, i=0;
                cout<<"\nEnter no of Books : ";
                cin>>n;
                for(int i=0;i<n;i++)
                                b[i].getdata();
                cout<<"\n Book Information are : \n \n";
                for(int i=0;i<n;i++){
                                b[i].display();
                }
                b[i-1].no_of_book();
                return 0;
}
