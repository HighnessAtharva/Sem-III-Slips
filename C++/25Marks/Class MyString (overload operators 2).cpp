/* Slip no : 27_2 Create a class MyString which contains a character pointer (Use new and delete operator). Write a C++ program to overload following operators:
 !     To change the case of each alphabet from given string
 [ ]     To print a character present at specified index    */


#include<iostream>
#include<conio.h>
#include<cstring>
#include<ctype.h>
using namespace std;
class mystring
{
char *str;
int len;
public:
mystring()
{
}
mystring(char s[])
{
len=strlen(s);
str=new char[len+1];
strcpy(str,s);
}
void display()
{
cout<<"\n Case-Switched String is: "<<str;
}
void operator !()
{
int i;

for(i=0;str[i]!='\0';i++)
{
if(islower(str[i]))
{
str[i]=toupper(str[i]);
}
else
{
str[i]=tolower(str[i]);
}
}
}
char operator [](int &index)
{
 if(index>0 && index<len)
                return str[index];
else
                return '_';
}
};
int main()
{

int i;
char str[30];
cout<<"\nEnter string: \t";
cin>>str;
mystring m(str);
m.display();
!m;
m.display();
cout<<"\nEnter index: ";
cin>>i;
char ch = m[i];
if(ch!='_')
cout<<"\nChracter at given position: "<<ch;
else
cout<<"\nInvalid index";

}
