/* Slip no : 5_2 Write C++ program to Create two classes Array1 and Array2 which contains data members as Integer array of a specified size. Write necessary member functions to accept and display array elements of both the classes. Find and display smallest number from both the array. (Use Friend function and Memory Management operators)                                           */

#include<conio.h>
#include<iostream>
using namespace std;
class Array2;
class Array1
{
int *a;
int n1,i;
public :
void accept()
{
   cout<<"\n Enter length for first array : ";
   cin>>n1;
   a=new int[n1];
   for(i=0;i<n1;i++)
   {
      cout<<"\n Enter value : ";
      cin>>a[i];
   }
}

void display()
{
   for(i=0;i<n1;i++)
   {
      cout<<a[i]<<"\t";
   }
}
friend void smallest(Array1,Array2);
};

class Array2
{
  int *a;
  int n2,i;
  public :
  void accept1()
  {
    cout<<"\n Enter length for second array : ";
    cin>>n2;
    a=new int[n2];
    for(i=0;i<n2;i++)
    {
    cout<<"\n Enter elements : ";
    cin>>a[i];
    }
  }

  void display()
  {
    for(i=0;i<n2;i++)
    cout<<a[i]<<"\t";
  }
  friend void smallest(Array1,Array2);
};

void smallest(Array1 ob1,Array2 ob2)
{
  int s1,s2;
  int i;
  s1=ob1.a[0];
  for(i=1;i<ob1.n1;i++)
  {
     if(s1>ob1.a[i])
     {
                s1=ob1.a[i];
     }
  }
  s2=ob2.a[0];
  for(i=1;i<ob2.n2;i++)
  {
    if(s2>ob2.a[i])
    {
       s2=ob2.a[i];
    }
  }
  if(s1<s2)
  cout<<"\n smallest no = "<<s1;
  else
  cout<<"\nsmallest no = "<<s2;
}

int main()
{
  Array1 a1;
  Array2 a2;

  a1.accept();
  a2.accept1();
  cout<<"\n 1st array : ";
  a1.display();
  cout<<"\n 2nd array : ";
  a2.display();
  smallest(a1,a2);
  return 0;
}
