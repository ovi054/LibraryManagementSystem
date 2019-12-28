#include"header.h"
void add_books()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES";
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Computer"<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 2. Electronics"<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 3. Electrical"<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 4. Civil"<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 5. Mechanical"<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 6. Architecture"<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 7. Back to main menu"<<endl;
    cout<<"\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    cout<<"\t\t\tEnter your choice:";
    int s;
    cin>>s;
    if(s==7) menu();
    char catagories[][15]={"Computer","Electronics","Electrical","Civil","Mechnnical","Architecture"};
m:
    //system("cls");
    //design();
    books B;
    B.num=s;
//    cout<<catagories[B.num];
    cin>>B;
    B.cat=catagories[s-1];
    ofstream fout("book.txt",ios::app);
    B.output();
    gotoxy(20,13);
    cout<<"Do you Want to Add more books (y/n): ";
    char ch;
    cin>>ch;
    if (ch=='y' || ch=='Y')
    {
        goto m;
    }
    else
        menu();
}
