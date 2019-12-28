#include"header.h"
int checkid(int t)
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
        if(t==val) return 0;
        //return 1;
    }

}
