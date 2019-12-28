#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
//static int find_id[9999];
void menu();
void add_books();
void book_list();
void delete_book();
void delete_by_id();
void delete_by_name();
void edit_book();
void search_book();
void search_by_id();
void search_by_name();
void issue_book();
void design();
void gotoxy (int x, int y);

int checkid(int t);
int checkname(string t);
string getidline(int t);
string getnameline(string t);
string getnamebyid(int t);
int numofrecord();
int numofrecordissue();
void template_use();
static int n;
class books
{

    //char cat[15];
    //int id;
protected:
    string name;
    string author;
    int qty;
//    int rackno;
//    int num;
    string price;
//    int qrack;
public:
    int num;
    int id;
    string cat;
    int rackno;
    //void edit();
    virtual void show()
    {

    }
    void friend operator>>(istream &input, books &B)
    {
a:
        system("cls");
        design();
        gotoxy(21,5);
        cout<<"Book id: ";
        input>>B.id;
        if(checkid(B.id)==0)
        {
            gotoxy(20,13);
            cout<<"ID already Exist"<<endl;
            gotoxy(20,14);
            cout<<"Press any key to continue"<<endl;
            char c[2];
            cin>>c;
            if(c) goto a;
        }
        gotoxy(21,6);
        cout<<"Book Name: ";
        input>>B.name;
        gotoxy(21,7);
        cout<<"Author: ";
        input>>B.author;
        gotoxy(21,8);
        cout<<"Quantity: ";
        input>>B.qty;
        gotoxy(21,9);
        cout<<"Price: ";
        input>>B.price;
        gotoxy(21,10);
        cout<<"Rack No: ";
        input>>B.rackno;
        //cat="Computer";
    }
    void output()
    {
        ofstream fout("book.txt",ios::app);
        fout<<id<<" "<<cat<<" "<<name<<" "<<author<<" "<<qty<<" "<<price<<" "<<rackno<<endl;
        //B.output();
    }
    void getdata_from_file(string line)
    {
        //string line;
        stringstream sin(line);
        int val;
        sin>>val;
        id=val;
        string ch;
        sin>>ch;
        cat=ch;
        string cha;
        sin>>cha;
        name=cha;
        string chb;
        sin>>chb;
        author=chb;
        int val1;
        sin>>val1;
        qty=val1;
        string chc;
        sin>>chc;
        price=chc;
        int val2;
        sin>>val2;
        rackno=val2;
    }
    //void putdata()
    friend ostream& operator<<(ostream &cout, books &B)
    {
        //gotoxy(20,n);
        //n++;
        cout<<setw(3)<<B.id<<" "<<setw(13)<<B.cat<<" "<<setw(22)<<B.name<<" "<<setw(13)<<B.author<<" "<<setw(6)<<B.qty<<" "<<setw(9)<<B.price<<" "<<setw(8)<<B.rackno<<endl;
    }
    void edit()
    {
    cout<<"\t\t\tBook Name: ";
    cin>>name;
    cout<<"\t\t\tAuthor: ";
    cin>>author;
    cout<<"\t\t\tQuantity: ";
    cin>>qty;
    cout<<"Price: ";
    cin>>price;
    cout<<"\t\t\tRack No: ";
    cin>>rackno;
    }
    void getbookname(string s)// used for derive class //***polymorphism ***
    {
        name=s;
    }

};
/*void books::edit()
{
    gotoxy(21,6);
    cout<<"Book Name: ";
    cin>>name;
    gotoxy(21,7);
    cout<<"Author: ";
    cin>>author;
    gotoxy(21,8);
    cout<<"Quantity: ";
    cin>>qty;
    gotoxy(21,9);
    cout<<"Price: ";
    cin>>price;
    gotoxy(21,10);
    cout<<"Rack No: ";
    cin>>rackno;

}*/
class student:public books
{
public:
    string stname;
    int roll;
    void show();
    void view();
    student()
    {
        stname=' ';
        roll=0;
    }
    student(student &A)
    {
        stname=A.stname;
        roll=A.roll;
    }
    string showbookname()
    {
        return name;
    }
    friend ostream& operator<<(ofstream &fout, student &s)
    {
        fout<<setw(3)<<s.id<<" "<<setw(25)<<s.showbookname()<<" "<<setw(15)<<s.stname<<" "<<setw(16)<<s.roll<<endl;
    }

};
template<typename T>
class library
{
    T v;
public:
    //void getdata();
    T putdata()
    {
        return v;
    }
    void getdata(T s)
    {
        v=s;
    }


};

