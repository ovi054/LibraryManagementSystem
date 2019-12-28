#include"header.h"
int numofrecord()
{
    ifstream fin;
    fin.open("book.txt");
    int count=0;
    string line;
    while(getline(fin,line))
    {
        count++;//return 1;
    }
    return count;
}
int numofrecordissue()
{
    ifstream fin;
    fin.open("issue.txt");
    int count=0;
    string line;
    while(getline(fin,line))
    {
        count++;//return 1;
    }
    return count;
}
