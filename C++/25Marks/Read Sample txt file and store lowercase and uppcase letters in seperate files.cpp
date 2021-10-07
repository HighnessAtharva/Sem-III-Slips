/* Slip no : 19_2 Write a C++ program to read the contents of a Sample.txt” file. Store all the uppercase characters in ”Upper.txt”, lowercase characters in ”Lower.txt” and digits in “Digit.txt” files. Change the case of each character from “Sample.txt” and store it in “Convert.txt” file.*/

#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
int main()
{
                char fname[20];
                ifstream fin; ofstream fc,fu,fl,fd;
                cout<<"\n Enter file name : ";
                cin>>fname;
                fin.open(fname,ios::in);
                fc.open("convert.txt",ios::out);
                fu.open("upper.txt",ios::out);
                fl.open("lower.txt",ios::out);
                fd.open("digit.txt",ios::out);
                if(fin.fail())
                {
                                cout<<"file not exists ";
                                exit(1);
                }

                char ch;
                while(!fin.eof())
                {
                                ch=fin.get();
                                if(islower(ch))
                                {
                                                fl.put(ch);
                                                ch=toupper(ch);
                                                fc.put(ch);

                                }
                                else if(isupper(ch))
                                {
                                                fu.put(ch);
                                                ch=tolower(ch);
                                                fc.put(ch);
                                }
                                else if(isdigit(ch))
                                {
                                                fd.put(ch);
                                                }
                                else if(isspace(ch))
                                {              fc.put(ch);
                                }
                }
                cout<<"file coped....";
                return 0;
}
