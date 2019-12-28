#include"header.h"
void search_book()
{
    system("cls");
    cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SEARCH BOOKS";
    cout<<" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;

    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Search By ID   "<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 2. Search By Name"<<endl;
    cout<<"\t\t\t------------------------------------------"<<endl;
    cout<<"\t\t\tEnter your choice: ";
    int ch;
    cin>>ch;
    if(ch==1)
        search_by_id();
    if(ch==2)
        search_by_name();
}
void search_by_id()
{
    int bookid;
    cout<<"\t\t\tEnter the Book ID to search: ";
    cin>>bookid;
    if(checkid(bookid))
    {
        cout<<"\t\t\tBook not found..."<<endl;
        char ch[2];
        cout<<"\t\t\tEnter any key to continue: ";
        cin>>ch;
        if(ch) search_book();
    }
    else
    {
        string searchline,line;
        searchline=getidline(bookid);
        books b;
        b.getdata_from_file(searchline);
        cout<<" *************************************Book List*************************************"<<endl;

        cout<<" ID      CATEGORY              BOOK NAME        AUTHOR     QTY     PRICE     RackNo "<<endl;
        cout<<"_____________________________________________________________________________________\n"<<endl;
        cout<<b;
        cout<<"Enter m for main menu:";
        char m;cin>>m;
        if (m) menu();
    }

}
void search_by_name()
{
    string bookname;
    cout<<"\t\t\tEnter the Book name to search: ";
    cin>>bookname;
    if(checkname(bookname))
    {
        cout<<"\t\t\tBook not found..."<<endl;
        char ch[2];
        cout<<"\t\t\tEnter any key to continue: ";
        cin>>ch;
        if(ch) search_book();
    }
    else
    {
        string searchline;
        searchline=getnameline(bookname);
        books b;
        b.getdata_from_file(searchline);
        cout<<" *************************************Book List*************************************"<<endl;

        cout<<" ID      CATEGORY              BOOK NAME        AUTHOR     QTY     PRICE     RackNo "<<endl;
        cout<<"_____________________________________________________________________________________\n"<<endl;
        cout<<b;
        cout<<"Enter m for main menu:";
        char m;cin>>m;
        if (m) menu();
    }

}

