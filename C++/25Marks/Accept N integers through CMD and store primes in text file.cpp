/* Slip no : 26_2 Write a C++ program which will accept ‘n’ integers from user through command line argument. Store Prime numbers in file “Prime.txt” and remaining numbers in “Others.txt”.*/

#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<cstring>
using namespace std;
int main(int argc,char *a[])
{
                char ch[4];
                ofstream fp,fo;int i,j,k,no,flag;
                fp.open("prime.txt",ios::out|ios::app);
                fo.open("other.txt",ios::out|ios::app);
                for(i=1;i<argc;i++)
                {
                                strcpy(ch,a[i]);
                                no=atoi(a[i]);

                                flag=0;
                                for(j=2;j<=no/2;j++)
                                {
                                                if(no%j==0)
                                                {              flag=1;
                                                                break;
                                                }
                                }

                                if(flag==0)
                                {              for(k=0;ch[k]!='\0';k++)
                                                fp.put(ch[k]);
                                                fp.put(' ');
                                }

                                else
                                {              for(k=0;ch[k]!='\0';k++)
                                                fo.put(ch[k]);
                                                fo.put(' ');

                                }


                }
                fp.close();
                fo.close();
                return 0;
}
