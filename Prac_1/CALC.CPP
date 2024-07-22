#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"heart.c"
void main()
{clrscr();   int a1;
char a[40],b[40];
textcolor(RED); textbackground(WHITE);
gotoxy(30,5);
cprintf("WELCOME TO CALCULATOR\r\n");
randomize();
cprintf("ENTER YOUR NAME \r\n");
scanf("%s",a);
cprintf("ENTER YOUR NAME\r\n ");
scanf("%s",b);
clrscr();
a1=random(100);
gotoxy(30,10);
heart(a1);
cprintf("song for u both \r\n") ;
switch(random(10))
{case 0:
cprintf("ISHQ WALA LOVE \r\n");
break;
case 1:
cprintf("BHULA DENA MUJHE HAI ALVDA TUJHE\r\n") ;
break;
case 2:
cprintf("KYA HUA TERA WADA\r\n");
break;
case 3:
cprintf("MEIN TENU SAMJHAVA KI NAA TERE BINA LAGTA JI\r\n");
break;
case 4:
cprintf("TUM JO AAYE JINDAGI ME BAAT BAN GAI\r\n") ;
break;
case 5:
cprintf("MEIN TENU SAMJHAWA KI");
break;
case 6:
cprintf("MAINE KHUD KO DE DIYA HAI TUJHKO");
break;
case 7:
cprintf("LAG JAA GALE KI PHIR YE HASEEN RAAT HO NAA HO");
break;
case 8:
cprintf("BEWAFA HUM NAHI BEWAFA TUM NAHI FIR YE KYA SILSALE HO GAYE");
break;
case 9:
cprintf("MERA PEHLA PEHLA PYAAR");
    }
getch();
}