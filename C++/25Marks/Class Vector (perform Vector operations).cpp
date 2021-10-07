/* Slip no : 10_2Create a Vector class to represent a series of integer values. Allocate memory for Vector object using new operator. Write a C++ menu driven program with following member functions:
i. To accept a vector
ii. To display a vector in the form (10,20,30)
iii. To multiply by a scalar value
iv. To modify the value of a given position from vector   */

#include<conio.h>
#include<iostream>
using namespace std;
class vector
{
                int *a;
                int n;
                public:

                void create()
                {
                                int i;
                                cout<<"\nEnter the dimensions of the vector space: ";
                                cin>>n;
                                a=new int[n];
                                cout<<"\nEnter the vector: ";

                                for(i=0;i<n;i++)
                                {
                                                cin>>a[i];
                                }
                }

                void modify()
                {
                                int m,i;
                                cout<<"\nEnter the position of the co-ordinate to be changed: ";
                                cin>>i;
                                cout<<"\nEnter the new value: ";
                                cin>>m;
                                a[i-1]=m;
                }

                void scalar()
                {
                                int x,i;
                                cout<<"\nEnter the scalar: ";
                                cin>>x;

                                for(i=0;i<n;i++)
                                {
                                                a[i]=x*a[i];
                                }
                }

                void display()
                {
                                int i;
                                cout<<"\nThe vector is: (";
                                for(i=0;i<n-1;i++)
                                {
                                                cout<<a[i]<<",";
                                }
                                cout<<a[n-1]<<")";
                }
};

int main()
{
                vector v;

                int ch;
                do
                {
                cout<<"\n 1.Accpet vector \n 2.Display Vetor \n 3.Modify vector element \n 4.scalar operation \n 0.Exit";
                cout<<"\n Enter choice : ";
                cin>>ch;
                switch(ch)
                {

                                case 1 : v.create();
                                                break;
                                case 2 : v.display();
                                                break;

                                case 3 : v.modify();
                                                break;
                       case 4 : v.scalar();
                                                break;
                       case 0 : break;
                }
                }while(ch!=0);
                return 0;

}
