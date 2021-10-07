/* Slip no : 23_2 Create a C++ class MyFile containing:
                                - FILE *fp;
                                - Char filename[maxsize];
                Write necessary member Functions using operator overloading:
<<                 To display the contents of a file
>>           To write the contents into a file */

#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<ctype.h>
#include<cstring>
using namespace std;
class MyFile
{
                int rno;
                char name[30];
                public:
                MyFile(){}
                MyFile(int r,char nm[])
                {
                                rno=r;
                                strcpy(name,nm);
                }
                friend ofstream& operator<<(ofstream & ,MyFile &);
                friend ifstream& operator>>(ifstream & ,MyFile &);

};

ofstream& operator<<(ofstream &out,MyFile &f)
{
                out<<f.rno<<"\t"<<f.name<<endl;
                return out;
}

ifstream& operator>>(ifstream &in,MyFile &f)
{
                in>>f.rno>>f.name;
                return in;
}

int main()
{
                MyFile ob(1,"ABC"),ob2(2,"XYz");
                ofstream fout("Slip23.txt");
                fout<<ob<<ob2;
                fout.close();
                ifstream fin("Slip23.txt");
                fin>>ob>>ob2;
                fin.close();
                return 0;
}
