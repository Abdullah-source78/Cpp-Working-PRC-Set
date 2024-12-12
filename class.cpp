#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    /* out;
    string name;
    int roll;
    float marks;

    out.open("D:\\BSCS_2024.txt",ios::out);
    if(out.fail())
    {
        cout<<"file opening Error..";
    }
    else
    {
        char opt = 'y';
        while(opt == 'y')
        {
            cout<<"Enter roll ";
            cin>>roll;
            cout<<"Enter name ";
            cin>>name;
            cout<<"Enter Marks ";
            cin>>marks;

            out<<roll<<'\t'<<name<<'\t'<<marks<<endl;
            cout<<"Continue (y/n)? ";
            cin>>opt;
        }
    }
    out.close();*/


    /*ifstream in;
    string na;
    in.open("D:\\BSCS.txt",ios::in);
    if(in.fail())
    {
        cout<<"file opening Error..";
    }
    else
    {
        char ch[1000];

        ofstream out;
        out.open("D:\\Aamir.txt",ios::out);
        int i = 0;
        //out<<"word\t\t\tLocation\n"<<endl;
        while(!in.eof() == true)
        {
            ++i;
            in>>ch;
            //if(ch[0] == 'A' || ch[0] == 'a')
                out<<ch<<endl;
        }
        in.close();
        out.close();
    }**/


    char ch1[10] = "Ali";
    char ch2[10] = "ali";

    if(stricmp(ch1,ch2) == 0)
        cout<<"Same"<<endl;
    else
        cout<<"Not Same"<<endl;
    return 0;
}