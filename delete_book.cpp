#include"header.h"
void delete_book()
{
    system("cls");
    cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DELETE BOOKS";
    cout<<" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;

    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Delete By ID   "<<endl;
    cout<<"\t\t\t\xDB\xDB\xDB\xDB\xB2 2. Delete By Name"<<endl;
    cout<<"\t\t\t------------------------------------------"<<endl;
    cout<<"\t\t\tEnter your choice: ";
    int ch;
    cin>>ch;
    if(ch==1)
        delete_by_id();
    if(ch==2)
        delete_by_name();
}
