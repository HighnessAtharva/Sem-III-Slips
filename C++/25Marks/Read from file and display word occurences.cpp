/* Slip no : 18_2 Write a C++ program to read the contents of a text file. Count and display number of characters, words and lines from a file. Find the number of occurrences of a given word  present in a file. */

#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
                char character,file[20],word[20];
                ifstream in;
                int charcnt,wcnt,lcnt; //clrscr();
                cout<<"\n Enter file name : ";
                cin>>file;

                in.open(file);
                if(in.fail())
                {
                                cout<<"\n file does not exists :"<<endl;
                                exit(1);
                }

                charcnt = 0;
                lcnt = 0;
                wcnt = 0;

                char ch;
                while(!in.eof())
                {
                                ch=in.get();
                                if(ch == '\n')
                                {
                                                lcnt++;  wcnt++;
                                }
                                else if(ch==' ' ||ch=='\t' )
                                {wcnt++; charcnt++;
                                }
                                else charcnt++;

                    }
                    cout << "Characters: " << charcnt << endl;
                    cout << "Lines: " << lcnt << endl;
                    cout << "Words: " << wcnt << endl;
                                in.close();

                    cout<<"\n Enter word yo be search : ";
                                cin>>word;

                                in.open(file);

                                char str[20];int f=0;
                                while(!in.eof())
                                {
                                                in>>str;
                                                if(strcmp(str,word)==0)
                                                {
                                                                f++;
                                                }
                                }
                                if(f!=0)
                                {cout<<"\n word found : "<<f;}
                                else cout<<"\n NOT found";
                                return 0;
                }

