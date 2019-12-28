#include"header.h"
void book_list()
{
    system("cls");

    int s=numofrecord();
    books b[s];

    ifstream fin;
    fin.open("book.txt");
    string line;
    int i=0;
    /*getline(fin,line);
    cout<<line;*/

    //while(getline(fin,line))
    for(int i=0; i<s; i++)
    {
        getline(fin,line);
        b[i].getdata_from_file(line);
        //cout<<b[i];
        //i++;
    }
    //cout<<b[0];
    /*for(int i=0;i<s;i++)
    {
        cout<<b[i];
        //i++;
    }*/


    //cout<<b[i--]<<endl;
    vector<books> vec;
    for(int i=0; i<s; i++)
    {
        vec.push_back(b[i]);
    }
    sort(vec.begin(),vec.end(),[](books b1, books b2)
    {
        return b1.id<b2.id;
    });
    /*cout<<"_______AFTER SORTING w.r.t AGE_________"<<endl;
    for_each(vec.begin(),vec.end(),[](books b)
    {
        cout<<b;
    });*/
    cout<<"\n\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BOOK LIST \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n"<<endl;
    cout<<"\xDB\xDB\xB2 1.Show Book List by Entry\n"<<endl;
    cout<<"\xDB\xDB\xB2 2.Show Book List by ID\n"<<endl;
    cout<<"\xDB\xDB\xB2 3.Main Menu\n"<<endl;
    cout<<"Enter your choice: ";

    int sw;
    cin>>sw;
    if(sw==1)
    {
        system("cls");
        cout<<" *************************************Book List*************************************"<<endl;

        cout<<" ID      CATEGORY              BOOK NAME        AUTHOR     QTY     PRICE     RackNo "<<endl;
        cout<<"_____________________________________________________________________________________\n"<<endl;

        for(int i=0; i<s; i++)
        {
            cout<<b[i];
            //i++;
        }
        cout<<"_____________________________________________________________________________________\n"<<endl;
        cout<<"Enter m for main menu:";
        char m;cin>>m;
        if (m) menu();

    }
    if(sw==2)
    {
        system("cls");
        cout<<" *************************************Book List*************************************"<<endl;

        cout<<" ID      CATEGORY              BOOK NAME        AUTHOR     QTY     PRICE     RackNo "<<endl;
        cout<<"_____________________________________________________________________________________\n"<<endl;


        for_each(vec.begin(),vec.end(),[](books b){cout<<b;}); //Lambda Function (sort by id)
        cout<<"Enter m for main menu:";
        char m;cin>>m;
        if (m) menu();
    }
    if(sw==3) menu();



}
