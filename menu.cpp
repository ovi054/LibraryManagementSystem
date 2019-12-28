#include"header.h"
void menu()
{
    system("cls");
    int i;
    cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU";
    cout<<" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;

    cout<<"\n\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Add Books   "<<endl;
    cout<<"\n\t\t\t\xDB\xDB\xDB\xDB\xB2 2. Delete books"<<endl;
    cout<<"\n\t\t\t\xDB\xDB\xDB\xDB\xB2 3. Search Books"<<endl;
    cout<<"\n\t\t\t\xDB\xDB\xDB\xDB\xB2 4. Issue Books"<<endl;
    cout<<"\n\t\t\t\xDB\xDB\xDB\xDB\xB2 5. View Book list"<<endl;
    cout<<"\n\t\t\t\xDB\xDB\xDB\xDB\xB2 6. Edit Book's Record"<<endl;
    cout<<"\n\t\t\t\xDB\xDB\xDB\xDB\xB2 7. Close Application"<<endl;
    cout<<"\t\t\t------------------------------------------"<<endl;
    cout<<"\t\t\tEnter your choice: ";
    int ch;
    cin>>ch;
    switch(ch)
    {
    case 1:
        add_books();
        break;
    case 2:
        delete_book();
        break;
    case 3:
        search_book();
        break;
    case 4:
        issue_book();
        break;
    case 5:
        book_list();
        break;
    case 6:
        edit_book();
        break;
    }

}
