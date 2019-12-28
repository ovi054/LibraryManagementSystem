#include"header.h"
void delete_by_name()
{
    string bookname;
    cout<<"\t\t\tEnter the Book Name to delete: ";
    cin>>bookname;
    if(checkname(bookname)==0)
    {
        //cout<<"Book_found:";
        cout<<"\t\t\tBook Record is avalilable....Do you Want to delete it now???(y/n): ";
        char c;
        cin>>c;
        if (c=='y'|| c=='Y')
        {
            string deleteline,line;
            deleteline=getnameline(bookname);
            //references== http://www.cplusplus.com/forum/general/12081/
            ifstream fin;
            fin.open("book.txt");
            ofstream fout;
            fout.open("new.txt");
            while(getline(fin,line))
            {
                if(line!=deleteline)
                {
                    fout<<line<<endl;
                }
            }
            fin.close();
            fout.close();
            remove("book.txt");
            rename("new.txt","book.txt");
            cout<<"\t\t\tDeleted Succeesfully"<<endl;
            cout<<"\t\t\tDo you want to delete more??...(y/n): ";
            char che;
            cin>>che;
            if(che=='y'||che=='Y')
                delete_book();
            else
                menu();
        }
        else
            delete_book();

    }
    else
    {
        cout<<"\t\t\tBook not found..."<<endl;
        char ch[2];
        cout<<"\t\t\tEnter any key to continue: ";
        cin>>ch;
        if(ch) delete_book();
    }

}

