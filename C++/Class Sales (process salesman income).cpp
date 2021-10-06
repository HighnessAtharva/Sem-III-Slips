/* Slip no : 27_1 Write a class sales (Salesmam_Name, Product_name, Sales_Quantity, Target). Each salesman deals with a separate product and is assigned a target for a month. At the end of the month his monthly sales is compared with target and commission is calculated as follows:
   If Sales_Quantity > target then commission is 25% of extra sales made + 10% of target
   If Sales_Quantity ==target then commission is 10% of target.
   Otherwise commission is zero
   Display the salesman information along with commission obtained. (Use array of objects) */

#include<conio.h>
#include<iostream>
using namespace std;
class sales
{
                char sname[20],pname[20];
                int s_qty,t;
                float com;
                public :
                void getdata()
                {
                                cout<<"\n Enter Salesmam_Name  :  ";
                                cin>>sname;
                                cout<<"\n Enter Product Name  :  ";
                                cin>>pname;
                                cout<<"\n Enter sales Quantity : ";
                                cin>>s_qty;
                                cout<<"\n Enter target : ";
                                cin>>t;
                }
                void cal()
                {
                                if(s_qty>t)
                                                com=(s_qty+(s_qty*0.25))+(t+(t*0.10));
                                else if(s_qty==t)
                                                com=t+(t*0.10);
                                else
                                                com=0;

                }
                void display()
                {
                                cout<<"\n Salesmam_Name  :  "<<sname;
                                cout<<"\n Product Name  :  "<<pname;
                                cout<<"\n Sales Quantity : "<<s_qty;
                                cout<<"\n Target : "<<t;
                                cout<<"\n Monthly comission is : "<<com;
                                cout<<"\n ========================================";
                }


};

int main()
{
                sales s[10];int i,n;
                cout<<"\n Enter how many Salesman : ";
                cin>>n;
                for(i=0;i<n;i++)
                {              s[i].getdata();
                                s[i].cal();
                }

                for(i=0;i<n;i++)
                {              s[i].display();

                }
                return 0;
}
