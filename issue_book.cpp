#include"header.h"
void student::show()
{
        cout<<setw(3)<<id<<" "<<setw(25)<<showbookname()<<" "<<setw(15)<<stname<<" "<<setw(16)<<roll<<endl;
}
void issue_book()
{


    system("cls");
    ofstream fout("issue.txt",ios::app);

    student s1;
    books *b=&s1;

    cout<<"Book ID: ";
    cin>>s1.id;
    if(checkid(s1.id))
    {
        cout<<"Book ID not found.....Enter a key to continue...: ";
        char ab;
        cin>>ab;
        if(ab) issue_book();
    }
    else
    {
        b->getbookname(getnamebyid(s1.id)); //polymorphism

        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"Student Name: ";
        getline(cin,s1.stname);
        cout<<"Stdent roll: ";
        cin>>s1.roll;
        fout<<s1;
        cout<<"\n\n Book ID          Book Name      Student Name     Student Roll"<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
        b->show(); //Runtime Polymorphism

        cout<<"Enter m for main menu and Enter s for student info...";
        char s;
        cin>>s;
        if(s=='m') menu();
        else {  system("cls");
                template_use();
                cout<<"Enter m for main menu...";
                char m;
                cin>>m;
                if(m) menu();

        }
    }
}

string getnamebyid(int t)
{
    ifstream fin;
    fin.open("book.txt");
    string line;
    while(getline(fin,line))
    {
        stringstream sin(line);
        int val;
        string dummy1,dummy2;
        sin>>val;sin>>dummy1;sin>>dummy2;
        //cout<<val;
        if(t==val)
        {
            return dummy2;
        }
        //return 1;
    }
}
