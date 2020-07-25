#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  clrscr ();

  int gdriver = 0, gmode;

    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

       setcolor(YELLOW);
       settextstyle(7,0,5);
	outtextxy(95,20,"Be Positive & Smile !");

     setcolor(14);
     circle(325,250,150);
     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(325,250,YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);

     for(int i=0;i<=12;i++)
   ellipse(325,315,205,335,70,25+i);

   fillellipse(270,235,20,23);
     fillellipse(380,235,20,23);

  getch();
}