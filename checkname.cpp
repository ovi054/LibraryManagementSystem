#include"header.h"
int checkname(string t)
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
        if(t==name) return 0;
        //return 1;
    }
}

