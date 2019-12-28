#include"header.h"
#include<bits/stdc++.h>
COORD coord = {0, 0}; // sets coordinates to 0,0
//COORD max_buffer_size = GetLargestConsoleWindowSize(hOut);
COORD max_res,cursor_size;
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void design()
{
    int t;
    gotoxy(20,3);
    cout<<"Enter the Information Below";
    gotoxy(20,4);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(20,5);
    cout<<"\xB2";gotoxy(50,5);cout<<"\xB2";
    gotoxy(20,6);
    cout<<"\xB2";gotoxy(50,6);cout<<"\xB2";
    gotoxy(20,7);
    cout<<"\xB2";gotoxy(50,7);cout<<"\xB2";
    gotoxy(20,8);
    cout<<"\xB2";gotoxy(50,8);cout<<"\xB2";
    gotoxy(20,9);
    cout<<"\xB2";gotoxy(50,9);cout<<"\xB2";
    gotoxy(20,10);
    cout<<"\xB2";gotoxy(50,10);cout<<"\xB2";
    gotoxy(20,11);
    cout<<"\xB2";gotoxy(50,11);cout<<"\xB2";
    gotoxy(20,12);
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    cout<<"\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    gotoxy(21,5);
}
