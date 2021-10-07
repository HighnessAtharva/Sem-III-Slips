/* Slip no : 13_2 Create a class Matrix and Write a C++ program with following functions:
i. To accept a Matrix
ii. To display a Matrix
iii. Overload unary minus ‘–‘ operator to calculate transpose of a Matrix
iv. Overload binary multiplication '*’ operator to calculate multiplication of two matrices */

#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
public:
int r,c,a[10][10],i,j;
void getdata()
{
                cout<<"\n Enter number of rows to be inserted in matrix : ";
                cin>>r;
                cout<<"\n Enter number of columns to be inserted in matrix : ";
                cin>>c;
                for(i=0;i<r;i++)
                {
                                for(j=0;j<c;j++)
                                {
                                cout<<"\n Enter matrix elements of "<<i<<" row";
                                cin>>a[i][j];
                                }
                }
}
void display()
{
                for(i=0;i<r;i++)
                {
                                cout<<endl;
                                for(j=0;j<c;j++)
                                {
                                cout<<a[i][j];
                                cout<<"\t";
                                }
                }
}
void operator-()
{
                matrix m(r,c);
                for(i=0;i<r;i++)
                {
                                cout<<endl;
                                for(j=0;j<c;j++)
                                {
                                                m.a[i][j]=a[j][i];
                                }
                }
                m.display();
}

matrix()
{}
matrix(int row,int column)
{
                r=row;
                c=column;
}
friend matrix operator*(matrix,matrix);
};
matrix operator*(matrix obj,matrix obj1)
{
int i,j,k,sum;
if(obj.c==obj1.r)
{
                matrix k1(obj.r,obj1.c);
                for(i=0;i<obj.r;i++)
                {
                                //cout<<endl;
                                for(j=0;j<obj1.c;j++)
                                {
                                                //k.a[i][j]=0;
                                                sum=0 ;
                                                for(k=0;k<obj.c;k++)
                                                {
                                                sum=sum+obj.a[i][k] * obj1.a[k][j];
                                                }
                                                k1.a[i][j]=sum;
                                }
                }
                return k1;
}
else
{
                cout<<"Multipliction is not possible";
                matrix k(0,0);
                return k;
}
}
int main()
{

matrix m1,m2,m3;
m1.getdata();
m2.getdata();
cout<<"\n first matrix is :";
m1.display();
cout<<"\n 2nd matrix is : ";
m2.display();
m3=m1*m2;
cout<<"\n Transpose of 1st matrix is : ";
-m1;
cout<<"\n mutiplication of matrix is : \n";
m3.display();
return 0;
}
