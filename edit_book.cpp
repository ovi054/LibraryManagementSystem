#include"header.h"
void edit_book()
{
    system("cls");
    cout<<"\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 EDIT BOOKS RECORD";
    cout<<" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;

    int bookid;
    cout<<"\n\t\t\tEnter the Book ID to EDIT: ";
    cin>>bookid;
    if(checkid(bookid))
    {
        cout<<"\t\t\tBook not found..."<<endl;
        char ch[2];
        cout<<"\t\t\tEnter any key to continue: ";
        cin>>ch;
        if(ch) edit_book();
    }
    else
    {
        //design();
        cout<<"\t\t\tBook Found..Enter the information of Book:";
        cout<<"\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES";
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
        char catagories[][15]= {"Computer","Electronics","Electrical","Civil","Mechnnical","Architecture"};
        books b;
        b.id=bookid;
        b.cat=catagories[s-1];
        b.edit();
        string editline,line;
        editline=getidline(bookid);
        //references== http://www.cplusplus.com/forum/general/12081/
        ifstream fin;
        fin.open("book.txt");
        ofstream fout;
        fout.open("new.txt");
        while(getline(fin,line))
        {
            if(line!=editline)
            {
                fout<<line<<endl;
            }
            else
            {
                b.output();
                //fout<<id<<" "<<cat<<" "<<name<<" "<<author<<" "<<qty<<" "<<price<<" "<<rackno<<endl;
            }
        }
        fin.close();
        fout.close();
        remove("book.txt");
        rename("new.txt","book.txt");
        cout<<"\t\t\tEdited Succeesfully"<<endl;
    }
}
