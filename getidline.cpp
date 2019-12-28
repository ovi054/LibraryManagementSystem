#include"header.h"
string getidline(int t)
{
    ifstream fin;
    fin.open("book.txt");
    string line;
    while(getline(fin,line))
    {
        stringstream sin(line);
        int val;
        sin>>val;
        //cout<<val;
        if(t==val) return line;
        //return 1;
    }
}

string getnameline(string t)
{
    ifstream fin;
    fin.open("book.txt");
    string line;
    while(getline(fin,line))
    {
        stringstream sin(line);
        int val;
        sin>>val;
        string dummy;
        sin>>dummy;
        string name;
        sin>>name;
        //cout<<val;
        if(t==name) return line;
        //return 1;
    }
}
