//// base code file
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <dos.h>
#include <dir.h>
#include <mmsystem.h>
#include "S.h"
using namespace std;
///////////////////////////////////////////////////////////////////////

//p1 = three same numbers
//p2 = two same numbers
//p3 = three consecutive hundreds
//p4 = three consecutive numbers
int main()
{
      srand(time(NULL)); 
  // write code here  
//cout<<"StephenLukeAmaniChawin";  // leave the following line in all programs
// if 1 10c 20c etc...
double bdp;
double initial;
double multi;
double pay;
char cash;
char r;
char s;
char p;
char b;
long double bal = 0.00;
double buy;
int a = 0;
char dol = '$';
int n1;
int n2;
int n3;
char c1[8] = {'!','@','#','$','%','^','&','*'};
char c2[8] = {'!','@','#','$','%','^','&','*'};
char c3[8] = {'!','@','#','$','%','^','&','*'};
char c4[8] = {'!','@','#','$','%','^','&','*'};
char c5[8] = {'!','@','#','$','%','^','&','*'};
char c6[8] = {'!','@','#','$','%','^','&','*'};
char bc[14] = {'7',':',')','>','$','%','(','#','@','!','+','<',';','c'};
string bc2[4] = {":",")","<","|"};
char bc3[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int bc4[4] = {10,25,50,100};
int r1;
int r2;
int r3;
int r4;
int r5;
int r6;
int b1;
int b2;
int b3;
int b4;
int d1;
int d2;
int d3;
int d4;
int d5;
int e1;
int e2;
int e3;
double f1;
double f2;
double f3;
double f4;
double f5;
double f6;
double f7;
double f8;
double f9;
double f10;
double fr1; double fr2; double fr3; double fr4; double fr5; double fr6; double fr7; double fr8; double fr9;
while (true)
{
while (true)
{
if (a==0)
{
drawframe(0,0,100,30,'7','7');
drawframe(0,0,20,5,'7','7');
gotoxy(4,2);
cout<<dol<<bal;
drawframe(10,7,20,5,'7','7');
drawframe(40,7,20,5,'7','7');
drawframe(70,7,20,5,'7','7');
drawframe(10,13,20,5,'7','7');
drawframe(40,13,20,5,'7','7');
drawframe(70,13,20,5,'7','7');
drawframe(10,19,20,5,'7','7');
drawframe(40,19,20,5,'7','7');
drawframe(70,19,20,5,'7','7');
gotoxy(35,25);
cout<<"Press any key to roll/stop.";
gotoxy(20,26);
{
cout<<"Enter the betting amount (x.xx format): ";
cin>>pay;
multi=pay;
gotoxy(40,2);
cout<<"Bet amount: "<<dol<<setprecision(10000000000000000000000000000000)<<pay;
}
}
	gotoxy(1,26);
	cout<<"Please enter the amount you would like to buy. Type '0' if you do not want to buy: ";
	cin>>buy;
	bal = bal+buy;
	gotoxy(4,2);
	cout<<"            ";
	gotoxy(4,2);
	cout<<dol<<bal;
	getch();
	gotoxy(1,26);
cout<<"                                                                                              ";
if (bal<pay)
{
gotoxy(20,26);
cout<<"Thanks for playing! You ended up with "<<dol<<bal<<"!";
if (bal>=1000000)
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
else if (bal>=10000)
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
else if (bal<=0)
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
else
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
while (true)
a=20;
PlaySound(TEXT("C:/Windows/Media/tanana.wav"), NULL, SND_SYNC);
}
getch();
while (a!=3&&a!=4&&a!=5&&a!=6&&a!=8&&a!=10)
{
double p1 = 1000*multi;
double p2 = 100*multi;
double p3 = 50*multi;
double p4 = 50*multi;
double p5 = 5*multi;
double p6 = 5*multi;
	gotoxy(20,26);
cout<<"Press c to cash out. Press any other key to roll.";
cash = getch();
if (cash=='c')
{
gotoxy(1,26);
cout<<"                                                                                         ";
gotoxy(20,26);
cout<<"Thanks for playing! You ended up with "<<dol<<bal<<"!";
if (bal>=1000000)
PlaySound(TEXT("C:/Windows/Media/thx3.wav"), NULL, SND_SYNC);
else if (bal>=10000)
PlaySound(TEXT("C:/Windows/Media/thx2.wav"), NULL, SND_SYNC);
else if (bal<=0)
PlaySound(TEXT("C:/Windows/Media/broke.wav"), NULL, SND_SYNC);
else
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
while (true)
PlaySound(TEXT("C:/Windows/Media/tanana.wav"), NULL, SND_SYNC);
}
gotoxy(1,26);
cout<<"                                                                                            ";
bal = bal-pay;
gotoxy(1,2);
cout<<"                ";
gotoxy(4,2);
cout<<dol<<bal;
while (kbhit()==0&&a!=3&&a!=4&&a!=5&&a!=6&&a!=8&&a!=10)
{
//	n1 = random(1000);
//	n2 = random(1000);
//	n3 = random(1000);
	n1 = random(1000);
	n2 = random(1000);
	n3 = random(1000);
	r1 =  random(8)-1;                                                                                                                                                                                                                                                                                                                                                                          random(8)-1;
	r2 = random(8)-1;
	r3 = random(8)-1;
	r4 = random(8)-1;
	r5 = random(8)-1;
	r6 = random(8)-1;
//	r1 = 2;                                                                                                                                                                                                                                                                                                                                                                          random(8)-1;
//	r2 = 2;
//	r3 = 2;
//	r4 = 2;
//	r5 = 2;
//	r6 = 2;
	
gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<n1;
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<n2;
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<n3;
gotoxy(18,9);
cout<<"    ";
gotoxy(18,9);
cout<<c1[r1];
gotoxy(48,9);
cout<<"    ";
gotoxy(48,9);
cout<<c2[r2];
gotoxy(78,9);
cout<<"    ";
gotoxy(78,9);
cout<<c3[r3];
gotoxy(18,21);
cout<<"    ";
gotoxy(18,21);
cout<<c4[r4];
gotoxy(48,21);
cout<<"    ";
gotoxy(48,21);
cout<<c5[r5];
gotoxy(78,21);
cout<<"    ";
gotoxy(78,21);
cout<<c6[r6];
}
a=1;
while (a==1)
{
getch();
if (n1==111&&n2==111&&n3==111&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==777&&n2==777&&n3==777&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==222&&n2==222&&n3==222&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==333&&n2==333&&n3==333&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==444&&n2==444&&n3==444&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==555&&n2==555&&n3==555&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==666&&n2==666&&n3==666&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==888&&n2==888&&n3==888&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6||n1==999&&n2==999&&n3==999&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6)
{
	system("Color 0A");
bal = bal + 9999999999999999999;
gotoxy(4,2);
cout<<"                     ";
gotoxy(4,2);
cout<<fixed<<setprecision(0)<<dol<<bal;	
gotoxy(35,26);
cout<<"Error code (2R1CH)";
while (true)
PlaySound(TEXT("C:/Windows/Media/dumbassjackpot2.wav"), NULL, SND_SYNC);
}
else if (n1==111&&n2==111&&n3==111||n1==222&&n2==222&&n3==222||n1==333&&n2==333&&n3==333||n1==444&&n2==444&&n3==444||n1==555&&n2==555&&n3==555||n1==666&&n2==666&&n3==666||n1==777&&n2==777&&n3==777||n1==888&&n2==888&&n3==888||n1==999&&n2==999&&n3==999)
{
	gotoxy(25,26);
cout<<"**GRAND BONUS GAME ACTIVATE**";
gotoxy(25,27);
a=10;
PlaySound(TEXT("C:/Windows/Media/gbonus.wav"), NULL, SND_SYNC);
system("pause");
}
else if (n1==n2&&n2==n3)
{
bal = bal+p1;
gotoxy(4,2);
cout<<"               ";
gotoxy(4,2);
cout<<setprecision(100000000000000)<<dol<<bal;	
gotoxy(35,26);
cout<<"All three match! "<<dol<<p1<<" given. You're rich!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (n1==n2||n1==n3||n2==n3)
{
bal = bal+p2;
gotoxy(4,2);
	cout<<"             ";
	gotoxy(4,2);
	cout<<dol<<bal;	
gotoxy (35,26);
cout<<"Two of a kind! You win "<<dol<<p2<<"!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if(n3==300&&n2==n3-100&&n1==n2-100||n3==400&&n2==n3-100&&n1==n2-100||n3==500&&n2==n3-100&&n1==n2-100||n3==600&&n2==n3-100&&n1==n2-100||n3==700&&n2==n3-100&&n1==n2-100||n3==800&&n2==n3-100&&n1==n2-100||n3==900&&n2==n3-100&&n1==n2-100||n3==1000&&n2==n3-100&&n1==n2-100)
{
bal=bal+p3;
gotoxy(4,2);
cout<<"              ";
gotoxy(4,2);
cout<<dol<<bal;	
gotoxy(35,26);
cout<<"Three consecutive hundreds! "<<dol<<p2<<" earned.";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (n3==n2+1&&n2==n1+1)
{
bal=bal+p4;
gotoxy(4,2);
cout<<"              ";
gotoxy(4,2);
cout<<dol<<bal;	
gotoxy(35,26);
cout<<"Three consecutive numbers! "<<dol<<p4<<" earned.";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
getch();
gotoxy(1,26);
cout<<"                                                                             ";
if (r1==3&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6)
{
	gotoxy(25,26);
cout<<"**BONUS GAME ACTIVATE**";
gotoxy(25,27);
a=3;
PlaySound(TEXT("C:/Windows/Media/bonus.wav"), NULL, SND_SYNC);
system("pause");
}
else if (r1==1&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6)
{
	gotoxy(25,26);
	cout<<"**BONUS GAME ACTIVATE**";
	gotoxy(25,27);
	a=5;
	PlaySound(TEXT("C:/Windows/Media/bonus.wav"), NULL, SND_SYNC);
	system("pause");
}
else if (r1==2&&r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6)
{
	gotoxy(25,26);
	cout<<"**BONUS GAME ACTIVATE**";
	gotoxy(25,27);
	a=8;
	PlaySound(TEXT("C:/Windows/Media/bonus.wav"), NULL, SND_SYNC);
	system("pause");
}
else if (r1==r2&&r2==r3)
{
bal=bal+p5;
gotoxy(4,2);
cout<<"              ";
gotoxy(4,2);
cout<<dol<<bal;	
gotoxy(35,26);
cout<<"Top Row! "<<dol<<p5<<" earned.";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (r4==r5&&r5==r6)
{
bal=bal+p6;
gotoxy(4,2);
cout<<"               ";
gotoxy(4,2);
cout<<dol<<bal;	
gotoxy(35,26);
cout<<"Bottom Row! "<<dol<<p6<<" earned.";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
if (a!=3&&a!=4&&a!=5&&a!=6&&a!=8&&a!=10)
{
a=0;
gotoxy(1,26);
cout<<"                                                                                            ";
gotoxy(1,27);
cout<<"                                                                                            ";
}
}
if (bal<pay&&a!=3&&a!=5&&a!=8&&a!=10)
{
	gotoxy(1,26);
	cout<<"Please enter the amount you would like to buy. Type '0' if you do not want to buy: ";
	cin>>buy;
	bal = bal+buy;
	gotoxy(4,2);
	cout<<"            ";
	gotoxy(4,2);
	cout<<dol<<bal;
	getch();
	gotoxy(1,26);
cout<<"                                                                                                 ";
{
gotoxy(1,26);
cout<<"                                                                                  ";
gotoxy(20,26);
{
cout<<"Enter the betting amount (x.xx format): ";
cin>>pay;
multi=pay;
}
gotoxy(40,2);
cout<<"Bet amount:                     ";
gotoxy(40,2);
cout<<"Bet amount: "<<dol<<pay;
}
}
if (bal>=pay&&a!=3&&a!=5&&a!=8&&a!=10)
{
gotoxy(1,26);
cout<<"If you would like to change payout, press p. If you would like to buy, press b. If both, press u.";
r = getch();
gotoxy(1,26);
cout<<"                                                                                                 ";
}
if (r=='b')
{
	gotoxy(1,26);
	cout<<"                                                                                           ";
	gotoxy(1,26);
	cout<<"Please enter the amount you would like to buy. Type '0' if you do not want to buy: ";
	cin>>buy;
	bal = bal+buy;
	gotoxy(4,2);
	cout<<"            ";
	gotoxy(4,2);
	cout<<dol<<bal;
	getch();
	gotoxy(1,26);
cout<<"                                                                                    ";
getch();
}
if (r=='p')
{
gotoxy(1,26);
"                                                                                         ";
gotoxy(20,26);
{
cout<<"Enter the betting amount (x.xx format): ";
cin>>pay;
multi=pay;
gotoxy(40,2);
cout<<"Bet amount:                     ";
gotoxy(40,2);
cout<<"Bet amount: "<<dol<<pay;
getch();
}
}
if (r=='u')
{
	{
	gotoxy(1,26);
	cout<<"                                                                                    ";
	gotoxy(1,26);
	cout<<"Please enter the amount you would like to buy. Type '0' if you do not want to buy: ";
	cin>>buy;
	bal = bal+buy;
	gotoxy(4,2);
	cout<<"            ";
	gotoxy(4,2);
	cout<<dol<<bal;
	getch();
	gotoxy(1,26);
cout<<"                                                                                         ";
}
gotoxy(20,26);
{
cout<<"Enter the betting amount (x.xx format): ";
cin>>pay;
multi=pay;
}
gotoxy(40,2);
cout<<"Bet amount:                     ";
gotoxy(40,2);
cout<<"Bet amount: "<<dol<<pay;
getch();
}
if (bal<pay&&a!=3&&a!=5&&a!=8&&a!=10)
{
gotoxy(20,26);
cout<<"Thanks for playing! You ended up with "<<dol<<bal<<"!";
if (bal>=1000000)
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
else if (bal>=10000)
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
else if (bal<=0)
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
else
PlaySound(TEXT("C:/Windows/Media/thx.wav"), NULL, SND_SYNC);
while (true)
PlaySound(TEXT("C:/Windows/Media/tanana.wav"), NULL, SND_SYNC);
exit(0);
}
}
int bonus;
int hi;
double bp = 0;
double p7 = 10*multi;
double p8 = 1000*multi;
int multip = 1;
int multipl = 0;
bool boo=true;
if (a==3)
{
drawframe(0,0,100,30,'7','7');
drawframe(0,0,20,5,'7','7');
gotoxy(4,2);
cout<<"        ";
gotoxy(4,2);
cout<<dol<<bp;
drawframe(10,7,20,5,' ',' ');
drawframe(40,7,20,5,' ',' ');
drawframe(70,7,20,5,' ',' ');
drawframe(10,13,20,5,'$','$');
drawframe(40,13,20,5,'$','$');
drawframe(70,13,20,5,'$','$');
drawframe(10,19,20,5,' ',' ');
drawframe(40,19,20,5,' ',' ');
drawframe(70,19,20,5,' ',' ');
}
for(bonus=0; bonus<10; bonus++)
{
	gotoxy(1,26);
	cout<<"                                                                                   ";
	gotoxy(1,27);
	cout<<"                                                                                   ";
for (hi=0; hi<1; hi++)
	{
	while (a==3)
	{
while (kbhit()==0)
{
	b1 = random(14)-1;
	b2 = random(14)-1;
	b3 = random(14)-1;
	b4 = random(14)-1;
//b1 = 0;
//b2 = 0;
//b3 = 0;
//b4 = 3;
	
gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<bc[b1];
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<bc[b2];
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<bc[b3];
}
a=4;
}
while (a==4)
{
getch();
if (b1==1&&b2==2&&b3==2)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Double Chin :)) "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
if (b1==1&&b2==6&&b3==2)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Open wide :() "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
if (b1==1&&b2==11&&b3==2)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Pointy Nose :<) "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==1&&b2==2&&b3==3)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Pointy beard :)> "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (b1==11&&b2==4&&b3==3)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Protected cash <$> "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==4&&b2==10&&b3==10)
{
bp = bp + p7*10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"More money! $++ "<<dol<<p7*10<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==6&&b2==4&&b3==2)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Money in the bank ($) "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==4&&b2==0&&b3==5)
{
gotoxy(20,26);
cout<<"7% of what you earned! $7% "<<dol<<bp*0.07<<" added!";
bp = bp + bp*0.07;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==4&&b2==4&&b3==4)
{
bp = bp + 1000;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"CASH MONEY $$$ "<<dol<<1000<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==7&&b2==10&&b3==4)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"#MOREMONEY "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==8&&b2==4&&b3==4)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Stop mentioning money! @$$ "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==9&&b2==9&&b3==9)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"In shock !!! "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==4&&b2==0&&b3==0)
{
bp = bp + 77;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Whatever the machine says $77 "<<dol<<77<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==12&&b2==2&&b3==4)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Money beard ;)$ "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==1&&b2==13&&b3==2)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<":c) "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==1&&b2==2&&b3==13)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Exotic beard :)c "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (b1==1&&b2==2&&b3==11&&b4==3)
{
multipl = multipl + 2;
multip = 0;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
drawframe(100,13,20,5,'$','$');
gotoxy(108,15);
cout<<bc[b4];
gotoxy(20,26);
cout<<"Huh?";
getch();
gotoxy(20,26);
cout<<"A full beard! :)<> +2x multiplier on total prize money.";
PlaySound(TEXT("C:/Windows/Media/multi.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
getch();
makebox(100,13,20,5);
}
else if (b1==1&&b2==2&&b3==11)
{
bp = bp + p7;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Upside-down beard :)< "<<dol<<p7<<" added!";
PlaySound(TEXT("C:/Windows/Media/winner.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");

}
else if (b1==0&&b2==0&&b3==0)
{
boo=false;
bp = bp + 50000*multi;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<setprecision(10000000)<<bp;
gotoxy(20,26);
cout<<"GRAND JACKPOT!!!!!! 777 "<<dol<<50000*multi<<" added!";
PlaySound(TEXT("C:/Windows/Media/grandjackpot.wav"), NULL, SND_SYNC);
int woo;
char stop;
//for (woo=0; woo<10; woo++)
for (woo=0; woo<10; woo++)
{
drawframe(10,13,20,5,' ',' ');
drawframe(40,13,20,5,' ',' ');
drawframe(70,13,20,5,' ',' ');
gotoxy(18,15);
cout<<"    ";
gotoxy(48,15);
cout<<"    ";
gotoxy(78,15);
cout<<"    ";
Sleep(500);
gotoxy(18,15);
cout<<'7';
gotoxy(48,15);
cout<<'7';
gotoxy(78,15);
cout<<'7';
drawframe(10,13,20,5,'$','$');
drawframe(40,13,20,5,'$','$');
drawframe(70,13,20,5,'$','$');
Sleep(500);
}
gotoxy(20,27);
system("pause");
}
else if (b1==13&&b2==10&&b3==10)
{
multipl = multipl+10;
multip = 0;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Spoken in c++! +10x the prize money at the end of the bonus!";
PlaySound(TEXT("C:/Windows/Media/multi.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
//add prizes
// bonus money double
//add on to balance after
getch();
a=3;
}
}
}
if (a==3||a==4)
{
bdp = bp*(multip+multipl);
gotoxy(20,26);
cout<<"Well Done!";
gotoxy(20,27);
cout<<"Total Prize: "<<bdp;
PlaySound(TEXT("C:/Windows/Media/nice.wav"),NULL,SND_SYNC);
}
int bonus2;
int hi2;
double p9 = 10000*multi;
if (a==5)
{
drawframe(0,0,100,30,'7','7');
drawframe(0,0,20,5,'7','7');
gotoxy(4,2);
cout<<"        ";
gotoxy(4,2);
cout<<dol<<bp;
drawframe(10,7,20,5,' ',' ');
drawframe(40,7,20,5,' ',' ');
drawframe(70,7,20,5,' ',' ');
drawframe(10,19,20,5,' ',' ');
drawframe(40,19,20,5,' ',' ');
drawframe(70,19,20,5,' ',' ');
drawframe(10,13,20,5,'@','@');
drawframe(40,13,20,5,'@','@');
drawframe(70,13,20,5,'@','@');
drawframe(40,21,20,5,'@','@');
drawframe(40,5,20,5,'@','@');
}
for (bonus2=0; bonus2<30; bonus2++)
{
	gotoxy(1,26);
	cout<<"                                                                                               ";
	gotoxy(1,27);
	cout<<"                                                                                               ";
for (hi2=0; hi2<1; hi2++)
{
	while (a==5)
	{
	while (kbhit()==0)
{
	d1 = random(4)-1;
	d2 = random(4)-1;
	d3 = random(4)-1;
	d4 = random(4)-1;
	d5 = random(4)-1;
//d1 = 0;
//d2 = 1;
//d3 = 2;
//d4= 3;
//d5 = 2;
	
gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<bc2[d1];
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<bc2[d2];
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<bc2[d3];
gotoxy(48,23);
cout<<bc2[d5];
gotoxy(48,7);
cout<<bc2[d4];
}
a=6;
}
while (a==6)
{
if (d1==0&&d2==1&&d3==2&&d4==3&&d5==3)
{
bp = bp+p9;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"You found Kevin! He gave you "<<dol<<p9<<"!";
PlaySound(TEXT("C:/Windows/Media/grandjackpot.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
getch();
drawframe(10,7,20,5,' ',' ');
drawframe(40,7,20,5,' ',' ');
drawframe(70,7,20,5,' ',' ');
drawframe(10,19,20,5,' ',' ');
drawframe(40,19,20,5,' ',' ');
drawframe(70,19,20,5,' ',' ');
drawframe(10,13,20,5,' ',' ');
drawframe(40,13,20,5,' ',' ');
drawframe(70,13,20,5,' ',' ');
drawframe(40,21,20,5,' ',' ');
drawframe(40,5,20,5,' ',' ');
gotoxy(18,15);
cout<<":c)---------<";
gotoxy(26,14);
cout<<"|";
gotoxy(26,16);
cout<<"|";
getch();
gotoxy(18,15);
cout<<";";
a=7;
}
if (a==7)
break;
getch();
a=5;
}
if (a==5|a==7)
getch();
}
if (a==7)
break;
}
if (a==5||a==6||a==7)
{
bdp = bp*(multip+multipl);
gotoxy(20,26);
cout<<"Well Done!";
gotoxy(20,27);
cout<<"Total Prize: "<<bdp;
PlaySound(TEXT("C:/Windows/Media/nice.wav"),NULL,SND_SYNC);
}
int bonus3;
int hi3;
double ng = 1000*multi;
double p10 = 10*multi;
//double ad;
//double mj;
//double ai;
//double kd;
//double kb;
//double lj;
if (a==8)
{
drawframe(0,0,100,30,'7','7');
drawframe(0,0,20,5,'7','7');
gotoxy(4,2);
cout<<"        ";
gotoxy(4,2);
cout<<dol<<bp;
drawframe(10,7,20,5,' ',' ');
drawframe(40,7,20,5,' ',' ');
drawframe(70,7,20,5,' ',' ');
drawframe(10,19,20,5,' ',' ');
drawframe(40,19,20,5,' ',' ');
drawframe(70,19,20,5,' ',' ');
drawframe(20,13,20,5,'#','#');
drawframe(60,13,20,5,'#','#');
}
if (a==8||a==9)
{
for (bonus3=0; bonus3<10; bonus3++)
{
	gotoxy(1,26);
	cout<<"                                                                                               ";
	gotoxy(1,27);
	cout<<"                                                                                               ";
for (hi3=0; hi3<1; hi3++)
{
	while (a==8)
	{
	while (kbhit()==0&&a==8||a==9)
{
	e1 = random(26)-1;
	e2 = random(26)-1;
	e3 = random(26)-1;
//e1 = 1;
//e2 = 8;
//e3 = 6;

	
gotoxy(28,15);
cout<<"    ";
gotoxy(28,15);
cout<<bc3[e1];
gotoxy(68,15);
cout<<"    ";
gotoxy(68,15);
cout<<bc3[e2];
}
a=9;
}
while (a==9)
{
if (e1==0&&e2==3)
{
bp = bp+p10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Anthony Davis! "<<dol<<p10<<"!";
PlaySound(TEXT("C:/Windows/Media/ad.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (e1==12&&e2==9)
{
bp = bp+p10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Michael Jordan! "<<dol<<p10<<"!";
PlaySound(TEXT("C:/Windows/Media/mj.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (e1==0&&e2==8)
{
bp = bp+p10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Allen Iverson! "<<dol<<p10<<"!";
PlaySound(TEXT("C:/Windows/Media/ai.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (e1==10&&e2==3)
{
bp = bp+p10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Kevin Durant! "<<dol<<p10<<"!";
PlaySound(TEXT("C:/Windows/Media/kd.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (e1==11&&e2==9)
{
bp = bp+p10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"LeBron James! "<<dol<<p10<<"!";
PlaySound(TEXT("C:/Windows/Media/lb.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (e1==10&&e2==6)
{
bp = bp+p10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Kevin Garnett! "<<dol<<p10<<"!";
PlaySound(TEXT("C:/Windows/Media/kg.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (e1==10&&e2==1)
{
multipl = multipl+2;
multip=0;
bp = bp+p10;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"Kobe Bean Bryant! "<<dol<<p10<<"+ 2x multiplier on total prize payout!";
PlaySound(TEXT("C:/Windows/Media/kb.wav"), NULL, SND_SYNC);
gotoxy(20,27);
system("pause");
}
else if (e1==13&&e2==6)
{
bp = bp+ng;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
gotoxy(20,26);
cout<<"NG SLOT GRAAAAAAAND JACKPOT! "<<dol<<ng<<"!";
PlaySound(TEXT("C:/Windows/Media/ng.wav"),NULL,SND_SYNC);
system("pause");
}
else if (e1==1&&e2==8&&e3==6)
{
multipl= multipl + 10;
multip=0;
gotoxy(4,2);
cout<<"         ";
gotoxy(4,2);
cout<<dol<<bp;
drawframe (100,13,20,5,'#','#');
gotoxy(108,15);
cout<<bc3[e3];
gotoxy(20,26);
cout<<"The Notorious B.I.G! +10x multiplier!";
gotoxy(50,15);
cout<<'.';
gotoxy(90,15);
cout<<'.';
PlaySound(TEXT("C:/Windows/Media/big.wav"),NULL,SND_SYNC);
gotoxy(20,27);
system("pause");
getch();
drawframe (100,13,20,5,' ',' ');
gotoxy(50,15);
cout<<' ';
gotoxy(90,15);
cout<<' ';
}
getch();
a=8;
}
getch();
}
}
bdp = bp*(multip+multipl);
gotoxy(20,26);
cout<<"Well Done!";
gotoxy(20,27);
cout<<"Total Prize: "<<bdp;
PlaySound(TEXT("C:/Windows/Media/nice.wav"),NULL,SND_SYNC);
}
int bonus4;
int hi4;
int re = 3;
f1 = 0; f2 = 0; f3 = 0; f4 = 0; f5 = 0; f6 = 0; f7 = 0; f8 = 0; f9 = 0; f10 = 0;
if (a==10)
{
if (n1==777&&n2==777&&n3==777)
bp = 10*multi;
else if (n1==666&&n2==666&&n3==666)
bp = 0.5*multi;
else
bp = 1*multi;
drawframe(0,0,100,30,'7','7');
drawframe(0,0,20,5,'7','7');
gotoxy(4,2);
cout<<"        ";
gotoxy(4,2);
cout<<dol<<bp;
drawframe(10,7,20,5,'7','7');
drawframe(40,7,20,5,'7','7');
drawframe(70,7,20,5,'7','7');
drawframe(10,13,20,5,'7','7');
drawframe(40,13,20,5,'7','7');
drawframe(70,13,20,5,'7','7');
drawframe(10,19,20,5,'7','7');
drawframe(40,19,20,5,'7','7');
drawframe(70,19,20,5,'7','7');
gotoxy(40,2);
cout<<"Spins Left: "<<re;
getch();
}
for (bonus4=1; bonus4<=re; bonus4=bonus4)
{
	gotoxy(1,26);
	cout<<"                                                                                               ";
	gotoxy(1,27);
	cout<<"                                                                                               ";
for (hi3=0; hi3<1; hi3++)
{
	while (a==10)
	{
	re--;
gotoxy(40,2);
cout<<"Spins Left: "<<re;
fr1 = random(40);
fr2 = random(40);
fr3 = random(40);
fr3 = random(40);
fr4 = random(40);
fr5 = random(40);
fr6 = random(40);
fr7 = random(40);
fr8 = random(40);
fr9 = random(40);
	while (kbhit()==0&&a==10||a==11)
{
if (f4==0)
{
gotoxy(18,15);
cout<<"       ";
gotoxy(18,15);
cout<<bc4[random(4)-1];
}
if (f5==0)
{
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<bc4[random(4)-1];
}
if (f6==0)
{
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<bc4[random(4)-1];
}
if (f1==0)
{
gotoxy(18,9);
cout<<"    ";
gotoxy(18,9);
cout<<bc4[random(4)-1];
}
if (f2==0)
{
gotoxy(48,9);
cout<<"    ";
gotoxy(48,9);
cout<<bc4[random(4)-1];
}
if (f3==0)
{
gotoxy(78,9);
cout<<"    ";
gotoxy(78,9);
cout<<bc4[random(4)-1];
}
if (f7==0)
{
gotoxy(18,21);
cout<<"    ";
gotoxy(18,21);
cout<<bc4[random(4)-1];
}
if (f8==0)
{
gotoxy(48,21);
cout<<"    ";
gotoxy(48,21);
cout<<bc4[random(4)-1];
}
if (f9==0)
{
gotoxy(78,21);
cout<<"    ";
gotoxy(78,21);
cout<<bc4[random(4)-1];
}
}
a=11;
}
while (a==11)
{
if (f1!=0)
{
gotoxy(18,9);
cout<<"    ";
gotoxy(18,9);
cout<<f1;
}
else if (fr1==9||fr1==19||fr1==29||fr1==39)
{
	f1 = 10;
gotoxy(18,9);
cout<<"    ";
gotoxy(18,9);
cout<<f1;
a=12;
}
else if (fr1==3||fr1==10||fr1==20)
{
	f1 = 25;
gotoxy(18,9);
cout<<"    ";
gotoxy(18,9);
cout<<f1;
a=12;
}
else if (fr1==5||fr1==25)
{
	f1 = 50;
gotoxy(18,9);
cout<<"    ";
gotoxy(18,9);
cout<<f1;
a=12;
}
else if (fr1==40)
{
	f1 = 100;
gotoxy(18,9);
cout<<"    ";
gotoxy(18,9);
cout<<f1;
a=12;
}
else
{
gotoxy(18,9);
cout<<"    ";
}
if (f2!=0)
{
	gotoxy(48,9);
cout<<"    ";
gotoxy(48,9);
cout<<f2;
}
else if (fr2==9||fr2==19||fr2==29||fr2==39)
{
	f2 = 10;
gotoxy(48,9);
cout<<"    ";
gotoxy(48,9);
cout<<f2;
a=12;
}
else if (fr2==3||fr2==10||fr2==20)
{
	f2 = 25;
gotoxy(48,9);
cout<<"    ";
gotoxy(48,9);
cout<<f2;
a=12;
}
else if (fr2==5||fr2==25)
{
	f2 = 50;
gotoxy(48,9);
cout<<"    ";
gotoxy(48,9);
cout<<f2;
a=12;
}
else if (fr2==40)
{
	f2 = 100;
gotoxy(48,9);
cout<<"    ";
gotoxy(48,9);
cout<<f2;
a=12;
}
else
{
gotoxy(48,9);
cout<<"    ";
}
if (f3!=0)
{
	gotoxy(78,9);
cout<<"    ";
gotoxy(78,9);
cout<<f3;
}
else if (fr3==9||fr3==19||fr3==29||fr3==39)
{
	f3 = 10;
gotoxy(78,9);
cout<<"    ";
gotoxy(78,9);
cout<<f3;
a=12;
}
else if (fr3==3||fr3==10||fr3==20)
{
	f3 = 25;
gotoxy(78,9);
cout<<"    ";
gotoxy(78,9);
cout<<f3;
a=12;
}
else if (fr3==5||fr3==25)
{
	f3 = 50;
gotoxy(78,9);
cout<<"    ";
gotoxy(78,9);
cout<<f3;
a=12;
}
else if (fr3==40)
{
	f3 = 100;
gotoxy(78,9);
cout<<"    ";
gotoxy(78,9);
cout<<f3;
a=12;
}
else
{
gotoxy(78,9);
cout<<"    ";
}
if (f4!=0)
{
	gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<f4;
}
else if (fr4==9||fr4==19||fr4==29||fr4==39)
{
	f4 = 10;
gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<f4;
a=12;
}
else if (fr4==3||fr4==10||fr4==20)
{
	f4 = 25;
gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<f4;
a=12;
}
else if (fr4==5||fr4==25)
{
	f4 = 50;
gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<f4;
a=12;
}
else if (fr4==40)
{
	f4 = 100;
gotoxy(18,15);
cout<<"    ";
gotoxy(18,15);
cout<<f4;
a=12;
}
else
{
gotoxy(18,15);
cout<<"    ";
}
if (f5!=0)
{
	gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<f5;
}
else if (fr5==9||fr5==19||fr5==29||fr5==39)
{
	f5 = 10;
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<f5;
a=12;
}
else if (fr5==3||fr5==10||fr5==20)
{
	f5 = 25;
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<f5;
a=12;
}
else if (fr5==5||fr5==25)
{
	f5 = 50;
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<f5;
a=12;
}
else if (fr5==40)
{
	f5 = 100;
gotoxy(48,15);
cout<<"    ";
gotoxy(48,15);
cout<<f5;
a=12;
}
else
{
gotoxy(48,15);
cout<<"    ";
}
if (f6!=0)
{
	gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<f6;
}
else if (fr6==9||fr6==19||fr6==29||fr6==39)
{
	f6 = 10;
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<f6;
a=12;
}
else if (fr6==3||fr6==10||fr6==20)
{
	f6 = 25;
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<f6;
a=12;
}
else if (fr6==5||fr6==25)
{
	f6 = 50;
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<f6;
a=12;
}
else if (fr6==40)
{
	f6 = 100;
gotoxy(78,15);
cout<<"    ";
gotoxy(78,15);
cout<<f6;
a=12;
}
else
{
gotoxy(78,15);
cout<<"    ";
}
if (f7!=0)
{
	gotoxy(18,21);
cout<<"    ";
gotoxy(18,21);
cout<<f7;
}
else if (fr7==9||fr7==19||fr7==29||fr7==39)
{
	f7 = 10;
gotoxy(18,21);
cout<<"    ";
gotoxy(18,21);
cout<<f7;
a=12;
}
else if (fr7==3||fr7==10||fr7==20)
{
	f7 = 25;
gotoxy(18,21);
cout<<"    ";
gotoxy(18,21);
cout<<f7;
a=12;
}
else if (fr7==5||fr7==25)
{
	f7 = 50;
gotoxy(18,21);
cout<<"    ";
gotoxy(18,21);
cout<<f7;
a=12;
}
else if (fr7==40)
{
	f7 = 100;
gotoxy(18,21);
cout<<"    ";
gotoxy(18,21);
cout<<f7;
a=12;
}
else
{
gotoxy(18,21);
cout<<"    ";
}
if (f8!=0)
{
	gotoxy(48,21);
cout<<"    ";
gotoxy(48,21);
cout<<f8;
}
else if (fr8==9||fr8==19||fr8==29||fr8==39)
{
	f8 = 10;
gotoxy(48,21);
cout<<"    ";
gotoxy(48,21);
cout<<f8;
a=12;
}
else if (fr8==3||fr8==10||fr8==20)
{
	f8 = 25;
gotoxy(48,21);
cout<<"    ";
gotoxy(48,21);
cout<<f8;
a=12;
}
else if (fr8==5||fr8==25)
{
	f8 = 50;
gotoxy(48,21);
cout<<"    ";
gotoxy(48,21);
cout<<f8;
a=12;
}
else if (fr8==40)
{
	f8 = 100;
gotoxy(48,21);
cout<<"    ";
gotoxy(48,21);
cout<<f8;
a=12;
}
else
{
gotoxy(48,21);
cout<<"    ";
}
if (f9!=0)
{
	gotoxy(78,21);
cout<<"    ";
gotoxy(78,21);
cout<<f9;
}
else if (fr9==9||fr9==19||fr9==29||fr9==39)
{
	f9 = 10;
gotoxy(78,21);
cout<<"    ";
gotoxy(78,21);
cout<<f9;
a=12;
}
else if (fr9==3||fr9==10||fr9==20)
{
	f9 = 25;
gotoxy(78,21);
cout<<"    ";
gotoxy(78,21);
cout<<f9;
a=12;
}
else if (fr9==5||fr9==25)
{
	f9 = 50;
gotoxy(78,21);
cout<<"    ";
gotoxy(78,21);
cout<<f9;
a=12;
}
else if (fr9==40)
{
	f9 = 100;
gotoxy(78,21);
cout<<"    ";
gotoxy(78,21);
cout<<f9;
a=12;
}
else
{
gotoxy(78,21);
cout<<"    ";
}
if (a==12)
re=3;
gotoxy(40,2);
cout<<"Spins Left: "<<re;
getch();
a=10;
}
}
if (f1!=0&&f2!=0&&f3!=0&&f4!=0&&f5!=0&&f6!=0&&f7!=0&&f8!=0&&f9!=0)
{
f10 = 1000;
f1 = 0; f2 = 0; f3 = 0; f4 = 0; f5 = 0; f6 = 0; f7 = 0; f8 = 0; f9 = 0;
bp = bp*(f1+f2+f3+f4+f5+f6+f7+f8+f9+f10);
gotoxy(20,26);
cout<<"ALL NUMBERS FILLED IN! SUPA JACKPOT!";
gotoxy(20,27);
cout<<"Total Prize: "<<dol<<bp;
PlaySound(TEXT("C:/Windows/Media/wooo.wav"),NULL,SND_SYNC);
break;
}
if (re==0)
{
bp = bp*(f1+f2+f3+f4+f5+f6+f7+f8+f9+f10);
gotoxy(20,26);
cout<<"Well Done!";
gotoxy(20,27);
cout<<"Total Prize: "<<dol<<bp;
PlaySound(TEXT("C:/Windows/Media/nice.wav"),NULL,SND_SYNC);
}
getch();
}
if (a!=10)
{
bal = bal+bdp;
}
else
{
bal = bal+bp;
}
bp = 0;
multip=0;
multipl=0;
f1=0; f2=0; f3=0; f4=0; f5=0; f6=0; f7=0; f8=0; f9=0; f10 = 0;
a=0;
getch();
}
}
}


