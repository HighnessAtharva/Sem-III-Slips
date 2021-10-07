/* Slip no : 16_2 Define a class Product that contains data member as Prod_no, Prod_Name, Prod_Price. Derive a class Discount(discount_in_Percentage) from class Product. A Customer buys ‘n’ products. Accept quantity for each product , calculate Total Discount and accordingly generate Bill. Display the bill using appropriate Manipulators.*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Product
{              public:
                int no;
                char pname[20];
                float price;
                public :
                void accept()
                {              cout<<"\n Enter product id : ";
                                cin>>no;
                                cout<<"\n Enter product name : ";
                                cin>>pname;
                                cout<<"\n Enter product price : ";
                                cin>>price;
                }


};

class Discount : public Product
{
                public :
                int d;
                void accept_D()
                {
                                cout<<"\n Enter product discount : ";
                                cin>>d;
                }
                void display()
                {                    cout<<setiosflags(ios::left)<<setw(15)<<pname<<setw(10)<<price<<setiosflags(ios::right)<<setw(10)<<d<<endl;
                }
};

int main()
{
                Discount ob[10];
                int i,n,total=0,discnt=0;
                char cname[20];
                cout<<"\n Enter name of customer :  ";
                cin>>cname;
                cout<<"\n Enter no product to be puraches : ";
                cin>>n;
                for(i=0;i<n;i++)
                {
                ob[i].accept();
                ob[i].accept_D();
                }
                cout<<"\n **********YOUR BILL**************\n";
                cout<<"\n Name of customer : "<<cname<<endl;
                cout<<setiosflags(ios::left)<<setw(15)<<"Product name "<<setw(10)<<"Price"<<setiosflags(ios::right)<<setw(10)<<"Discount"<<endl;
                for(i=0;i<n;i++)
                {
                 ob[i].display();
                 total=total+ob[i].price;
                 discnt=discnt+((ob[i].price * ob[i].d)/100);

                }
                cout<<"\n=====================================\n";
                cout<<"Total : ";
                cout<<setw(25)<<setiosflags(ios::right)<< total-discnt;
                return 0;
}
