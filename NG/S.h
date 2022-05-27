#ifndef _Stephen_H_
#define _Stephen_H_

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <fstream>
using namespace std;
void gotoxy(short x, short y) {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
// generates a random number between 0 and r inclusive
int random(int r)
{
    return rand()% r + 1;
}  
void drawline(int l)
{
	int i;
	for (i=0; i<l; i++)
	cout<<' ';
}
void drawline10()
{
	int i;
	for (i=0; i<10; i++)
	cout<<'$';
}
void drawbox104()
{
	int w;
	int h;
	for (h=0; h<4; h++)
	{
	drawline10();
	cout<<endl;
	}
}
void drawbox(int i,int j)
{
	int w;
	int h;
	for (h=0; h<i; h++)
	{
	drawline(j);
	cout<<endl;
	}
}
void makebox(int x,int y,int j,int i)
{
	int w;
	int h;
	for (h=0; h<i; h++)
	{
		gotoxy(x,y);
	{
	drawline(j);
	y++;
	}
}
}
void drawframe(int x,int y,int w,int h,char sym2, char sym)
{
	int i;
	int j;
for (i=0; i<h; i++)
{
	gotoxy (x,y);
{
for (j=0; j<w; j++)
{
 if (i==0||i==h-1)
 {
 	cout<<sym2;
 }
 	else
 	{
 		if (j==0||j==w-1)
 		{
 			cout<<sym;
		 }
		 else
		 {
		 	cout<<" ";
		 }
		 	 }
 }
}
y++;
}
}
///////////////////////////////////////////////////////////////////////
//main()
//{
//	int i;
//      srand(time(NULL)); 
//makebox(10,10,4,3);
//}
#endif

