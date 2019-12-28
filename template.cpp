#include"header.h"
void student::view()
{
    cout<<setw(15)<<stname<<" "<<setw(16)<<roll<<endl;
}
void template_use()
{
    int a=numofrecordissue();
    student s[a];
    ifstream fin;
        fin.open("issue.txt");
        string line;
    for(int i=0;i<a;i++)
    {
        getline(fin,line);
        stringstream sin(line);
        string dummy1,dummy2;
        int a1,a2;
        sin>>a1; s[i].id=a1;
        sin>>dummy1;//s[i].showbookname()=dummy1;
        sin>>dummy2;s[i].stname=dummy2;
        sin>>a2;s[i].roll=a2;
        //s[i].show();
        //cout<<s[i];
    }
    library<student> l[a];
    for(int i=0;i<a;i++)
    {
        l[i].getdata(s[i]);
        l[i].putdata().view();
    }

}
/*void library::getdata()
{
    int a=numofrecordissue();
    for(int i=0;i<a;i++)
    {
        list[i]=s[i];
    }
}
void library::putdata()
{
    cout<<list[i];
}*/


