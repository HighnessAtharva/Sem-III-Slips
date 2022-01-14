/* Slip no : 21_2 Imagine a ticket Selling booth at a fair. People passing by are requested to purchase a ticket. A ticket is priced as Rs. 5/- . The ticketbooth keeps the track of the number of peoples that have visited the booth and of the total amount of cash collected.
Create a class ticketbooth that contains No_of_people_visited, Total_Amount_collected. Write C++ program to perform following functions:
To assign initial values.
To increment the No_of_people_visited  if visitors have just visited the booth.
To increment the  No_of_people_visited  and Total_amount_collected if tickets have been purchased.
To display both totals     */
#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
class ticket
{
static int cnt;
static int amt;
char name[20];
char response[2];
public:
void accept()
{
cout<<"Thank you for visiting the Ticket Booth.\nEnter name:";
cin>>name;
cnt++;
cout<<"\nWould you like to book ticket? (Y/N)";
cin>>response;
if (strcmp(response, "Y")==0){
amt=amt+5;
}
}

void display()
{
cout<<"\nName of the Attendee="<<name<<"\nNo of people who just visited the booth="<<cnt<<"\nNo of people who booked the ticket="<<(amt/5)<<"\nTotal amount collected="<<amt<<endl;
}

};
int ticket:: amt;
int ticket::cnt;
int main()
{
int n,i;
ticket ob[20];

cout<<"\nEnter no of people\t";
cin>>n;
for(i=0;i<n;i++)
{
ob[i].accept();
ob[i].display();
}
return 0;
}
