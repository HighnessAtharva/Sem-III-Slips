/* slip no : 6_1 Write a C++ program to create a class which contains two dimensional integer array of size mXn. Write a member function to display sum of all elements of entered matrix. (Use Dynamic Constructor for allocating memory and Destructor to free memory of an object)              *//* slip no : 6_1 Write a C++ program to create a class which contains two dimensional integer array of size mXn. Write a member function to display sum of all elements of entered matrix. (Use Dynamic Constructor for allocating memory and Destructor to free memory of an object)              */
#include<conio.h>
#include<iostream>
using namespace std;

class matrix{
    int r, c, sum=0;
    public:
    int matrixSum(int r, int c){
                int **a;
                a=new int*[r];//[s];
                for(int i=0;i<r;i++)
                {      a[i]=new int[c];
                }
                for(int i=0;i<r;i++)
                {
                                for(int j=0;j<c;j++)
                                {
                                                cout<<"\n enter data : ";
                                                cin>>a[i][j];
                                }
                }
                for(int i=0;i<r;i++)
                {
                                for(int j=0;j<c;j++)
                                {
                                                cout<<"\t"<<a[i][j];
                                }
                                cout<<endl;
                }

                for(int i=0;i<r;i++)
                {
                                for(int j=0;j<c;j++)
                                {

                                                sum=sum+a[i][j];
                                }
                }
                cout<<"\n sum of all elements of matrix : "<<sum;
    }
};


int main()
{
                matrix xyz;
                int r,c,sum=0;
                cout<<"\n Enter dimension ";
                cin>>r;
                cin>>c;
                xyz.matrixSum(r,c);
                return 0;

}
