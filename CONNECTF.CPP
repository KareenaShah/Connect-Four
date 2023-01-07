//final game
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <graphics.h>
#include <process.h>
#include <time.h>
#include <dos.h>
#include <fstream.h>
#include <ctype.h>
#include<bios.h>
  int P[4][5],mode,n=0,k,flg=0,w=0,midx,midy,xmax,ymax,N,N1,c1,c2;
  char P1[20],P2[20];




 class game1
{ char name[20];
  int score;
 public:
 void productions();
 void title();
 void loading();
 void mainmenu();
 void start();
 void spot();
 void check();
 void endpage();
 void grid();
 void creds();
 void timer();
 void file();
 void getdata();
 void finalscore();
 void input();
}obj;
  void game1::input()
{   fstream fi;
    fi.open("Score1.TXT",ios::app);
    getdata();
    fi.write((char *)&obj,sizeof(obj));
    fi.close();
}
  void game1::productions()
{       //universalname
	 setbkcolor(BLACK);
	 setcolor(WHITE);
	 settextstyle(10,0,6);
	 outtextxy(80,5,"UNIVERSAL");


	//hitechname
	//H
	for(int z=125;z<=255;z+=5)
	{
		bar(5,125,25,z);
		delay(20);
	}

	for(z=5;z<=85;z+=5)
	{
		bar(5,180,z,200);
		delay(20);
	}

	for(z=125;z<=255;z+=5)
	{
	bar(85,125,105,z);
		delay(20);
	  }
	//I
	for(z=125;z<=255;z+=5)
	{
		bar(125,125,145,z);
		delay(20);
	  }
	//T
	for( z=205;z<=255;z+=5)
	{
		bar(205,125,225,z);
		delay(20);
	}

	for(z=165;z<=265;z+=5)
	{
		 bar(165,125,z,145);
		delay(20);
	 }

	//E
	for(z=135;z<=255;z+=5)
	{
		bar(285,125,305,z);
		delay(20);
	}

	for(z=285;z<=365;z+=5)
	{
		bar(285,125,z,145);
		delay(20);
	}

	for(z=285;z<=365;z+=5)
	{
		bar(285,180,z,200);
		delay(20);
	}

	for(z=285;z<=365;z+=5)
	{
		bar(285,235,z,255);
		delay(20);
	 }

	//C
	 for(z=385;z<=485;z+=5)
	  {
		bar(385,125,z,145);
		delay(20);
	}

	for(z=135;z<=255;z+=5)
	 {
		bar(385,135,405,z);
		delay(20);
	 }

	for(z=385;z<=485;z+=5)
	{
		bar(385,235,z,255);
		delay(20);
	}

	//H
	for(z=125;z<=255;z+=5)
	{
		bar(505,125,525,z);
		delay(20);
	}

	for(z=505;z<=585;z+=5)
	{
		bar(505,180,z,200);
		delay(20);
	}

	for(z=125;z<=255;z+=5)
	{
		bar(585,125,605,z);
		delay(20);
	  }
      //"production"
      setcolor(WHITE);
      settextstyle(3,0,7);
      outtextxy(115,270,"PRODUCTIONS");
      delay(1000);

      //"presents"
      setcolor(RED);
      settextstyle(3,0,6);
      outtextxy(195,360,"PRESENTS");
      //rectangles
      setcolor(WHITE);
      rectangle(0,0,10,10);
      rectangle(30,30,40,40);
      rectangle(10,80,20,90);
      rectangle(350,10,360,20);
      rectangle(200,5,210,15);
      rectangle(125,20,135,30);
      rectangle(290,19,300,29);
      rectangle(420,20,430,30);
      rectangle(480,10,490,20);
      rectangle(520,40,530,50);
      rectangle(590,0,600,10);
      rectangle(550,75,560,85);
      rectangle(575,25,585,35);
      rectangle(65,8,75,18);
      rectangle(0,290,10,300);
      rectangle(35,350,45,360);
      rectangle(55,310,65,320);
      rectangle(155,380,165,390);
       rectangle(80,400,90,410);
      rectangle(100,360,110,370);
      rectangle(10,400,20,410);
      rectangle(70,455,80,465);
      rectangle(300,430,310,440);
      rectangle(340,460,350,470);
      rectangle(200,480,210,490);
      rectangle(250,435,260,445);
      rectangle(175,455,185,465);
      rectangle(130,430,140,440);
      rectangle(0,460,10,470);
      rectangle(380,430,390,440);
      rectangle(410,450,420,460);
      rectangle(460,430,470,440);
      rectangle(470,360,480,370);
      rectangle(500,390,510,400);
      rectangle(530,430,540,440);
      rectangle(500,460,510,470);
      rectangle(560,300,570,310);
      rectangle(530,330,540,340);
      rectangle(570,390,580,400);
      rectangle(590,350,600,360);
      rectangle(590,460,600,470);
      rectangle(300,350,310,360);
      rectangle(230,355,240,365);
      rectangle(370,348,380,358);
      delay(1500);

}

 void game1::title()
{	cleardevice();
	setbkcolor(1);
	setfillstyle(SOLID_FILL,RED);
	bar(10,140,540,320);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(540,230,90);
	floodfill(541,231,WHITE);
	//text-
	settextstyle(1,0,9);
	setcolor(YELLOW);
	outtextxy(35,170,"CONNECT");
	//4-
	setfillstyle(SOLID_FILL,RED);
	bar(490,170,510,250);
	bar(500,230,580,250);
	bar(560,170,580,297);
	//circles-
	setcolor(YELLOW);
	circle(20,150,5);
	circle(60,150,5);
	circle(100,150,5);
	circle(140,150,5);
	circle(180,150,5);
	circle(220,150,5);
	circle(260,150,5);
	circle(300,150,5);
	circle(340,150,5);
	circle(380,150,5);
	circle(420,150,5);
	circle(460,150,5);
	circle(20,190,5);
	circle(20,230,5);
	circle(20,270,5);
	circle(20,310,5);
	circle(60,310,5);
	circle(100,310,5);
	circle(140,310,5);
	circle(180,310,5);
	circle(220,310,5);
	circle(260,310,5);
	circle(300,310,5);
	circle(340,310,5);
	circle(380,310,5);
	circle(420,310,5);
	circle(460,310,5);
	delay(1800);
}

void game1::loading()
{     int i,j,N;
	cleardevice();
	setbkcolor(BLACK);
	setcolor(WHITE);


	for( i=0;i<260;i++)
       {      {
		circle(170+i,118,10);
		circle(170+i,380,10);
		delay(3);

	      }


	      rectangle(150,100,450,400);
	      rectangle(190,140,410,360);
	      setfillstyle(SOLID_FILL,RED);
	      line(190,250,310,140);
	      line(410,250,300,360);
	      floodfill(191,141,WHITE);
	      floodfill(390,355,WHITE);
	      settextstyle(0,0,3);
	      outtextxy(210,250,"LOADING");
	  }

	  for(j=0;j<260;j++)
	  {    {
		circle(170,118+j,10);
		circle(430,118+j,10);
		delay(3);
	      }
	      rectangle(150,100,450,400);
	      rectangle(190,140,410,360);
	      setfillstyle(SOLID_FILL,RED);
	      line(190,250,310,140);
	      line(410,250,300,360);
	      floodfill(191,141,WHITE);
	      floodfill(390,355,WHITE);
	      settextstyle(0,0,3);
	      outtextxy(210,250,"LOADING");
	  }

	delay(600);
}

void game1::mainmenu()
{
	 cleardevice();
	 setbkcolor(BLACK);
	 settextstyle(3,0,9);
	 setcolor(YELLOW);
	 outtextxy(20,80,"C");
	 delay(600);
	 setfillstyle(SOLID_FILL,YELLOW);
	 circle(130,145,30);
	 floodfill(131,146,YELLOW);
	 delay(600);
	 outtextxy(200,80,"N");
	 delay(600);
	 outtextxy(280,80,"N");
	 delay(600);
	 outtextxy(360,80,"E");
	 delay(600);
	 outtextxy(430,80,"C");
	 delay(600);
	 outtextxy(500,80,"T");
	 delay(600);
	 setcolor(RED);
	 settextstyle(3,0,9);
	 outtextxy(122,5,"F");
	 outtextxy(105,160,"U");
	 outtextxy(108,240,"R");


	 //OPTIONS-
	 setfillstyle(SOLID_FILL,BLUE);

	 bar(230,230,500,255);
	 bar(230,275,500,300);
	 bar(230,320,500,345);
	 bar(230,365,500,390);
	 setcolor(LIGHTGREEN);
	 settextstyle(3,0,2);
	 outtextxy(235,230,"1.");
	 outtextxy(300,230,"NEW GAME");
	 outtextxy(235,275,"2.");
	 outtextxy(300,275,"INSTRUCTIONS");
	 outtextxy(235,320,"3.");
	 outtextxy(300,320,"CREDITS");
	 outtextxy(235,365,"4.");
	 outtextxy(300,365,"EXIT");
	 settextstyle(3,0,1);
	 setcolor(WHITE);
	 outtextxy(20,420,"NOTE: Enter - 1 for New Game  2 for Instructions");
	 outtextxy(155,440,"3 for Credits     4 for Exit");

	//CHOOSING-
	cin>>N;
	switch(N)
    {
	case 1:
	  w=0;
	 void newgame();
	  newgame();

	  cleardevice();
	  void details();
	  details();
	  cleardevice();
	  void start();
	  start();
	  break;

	case 2 :
	  cleardevice();
	  void instruct();
	  instruct();

	  cleardevice();
	  mainmenu();

	case 3:

	  cleardevice();
	  creds();
	  break;

	case 4:

	   cleardevice();
	  // creds();
	    //	delay(100);
	   closegraph();
	   break;

	default:cout<<"Invalid"<<endl;
	break;
    }

}
 void newgame()
{	cleardevice();
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,RED);
	rectangle(200,200,400,250);
	floodfill(201,201,WHITE);
	rectangle(50,100,250,150);
	floodfill(51,101,WHITE);
	rectangle(350,300,550,350);
	floodfill(351,301,WHITE);
	settextstyle(8,0,3);
	outtextxy(75,105,"1.BEGINNER");
	outtextxy(245,205,"2.NOVICE");
	outtextxy(380,305,"3.ADVANCED");
	cin>>mode;
	c1=15;
	c2=15;
}
 void details()
{   setcolor(RED);
    settextstyle(0,0,2);
    outtextxy(midx-150,midy-50,"Enter Player 1's Name: ");
    gets(P1);
    outtextxy(midx+200,midy-50,P1);
    setcolor(YELLOW);
    outtextxy(midx-150,midy+50,"Enter Player 2's Name: ");
    gets(P2);
    outtextxy(midx+200,midy+50,P2);
    ofstream obj("Score.TXT");

    delay(100);
}

 void start()
{
  for (int i=0;i<4;i++)
   {
    for (int j=0;j<5;j++)
     P[i][j]=0;
   }
  void grid();
  grid();
}

void instruct()
{ setcolor(MAGENTA);
  settextstyle(3,0,6);


	 outtextxy(100,50,"INSTRUCTIONS");
	    setcolor(GREEN);
	    settextstyle(0,0,3);

	       outtextxy(95,230,"HOW TO PLAY");
	       outtextxy(95,275,"HOW SCORES ARE AWARDED");
	       outtextxy(95,320,"BACK TO MAIN MENU");

	    setcolor(WHITE);
	 outtextxy(55,230,"1.  ");
	 outtextxy(55,275,"2.  ");
	 outtextxy(55,320,"3.  ");


cin>>N1;
switch(N1)
{
  case 1:
     cleardevice();
     void instruct1();
     instruct1();
     break;

  case 2:
    cleardevice();
    void instruct2();
    instruct2();
    break;

  case 3:
    cleardevice();
    obj.mainmenu();
    break;
  default:cout<<"invalid entry"<<endl;
  break;
}
}

  void instruct1()
{

   setcolor(GREEN);
   int xmax = getmaxx();
   int ymax = getmaxy();

   settextstyle(0,0,2);
   outtextxy(11*xmax/20-3,25,"0");
   outtextxy(13*xmax/20-3,25,"1");
   outtextxy(15*xmax/20-3,25,"2");
   outtextxy(17*xmax/20-3,25,"3");
   outtextxy(19*xmax/20-3,25,"4");


   line(xmax/2, 50, xmax, 50);
   line(xmax/2, 295, xmax, 295);
   line(xmax/2,50,xmax/2,290);
   line(xmax,50,xmax,290);

   setcolor(GREEN);
    circle(17*xmax/20,142,xmax/20);
    circle(17*xmax/20,203,xmax/20);
    circle(15*xmax/20,264,xmax/20);
    circle(17*xmax/20,264,xmax/20);
    circle(13*xmax/20,264,xmax/20);
    circle(17*xmax/20,81,xmax/20);
    circle(15*xmax/20,142,xmax/20);
    circle(13*xmax/20,203,xmax/20);
    circle(15*xmax/20,203,xmax/20);
    circle(11*xmax/20,264,xmax/20);
    circle(19*xmax/20,264,xmax/20);
    circle(11*xmax/20,81,xmax/20);
    circle(13*xmax/20,81,xmax/20);
    circle(15*xmax/20,81,xmax/20);
    circle(19*xmax/20,81,xmax/20);
    circle(11*xmax/20,142,xmax/20);
    circle(13*xmax/20,142,xmax/20);
    circle(19*xmax/20,142,xmax/20);
    circle(11*xmax/20,203,xmax/20);
    circle(19*xmax/20,203,xmax/20);




 setcolor(WHITE);
   settextstyle(0,0,2);
   outtextxy(50,40,"HOW TO PLAY");

 settextstyle(3,0,2);

  outtextxy(0,60,"Connect4 is a simple game ");
  outtextxy(0,80,"similar to tic-tac-toe, only ");
  outtextxy(0,100,"instead of three, you ");
  outtextxy(0,120,"must connect four in a ");
  outtextxy(0,140,"row.");
  outtextxy(0,160,"To win connect4 you must be");
  outtextxy(0,180,"the first player to get four of");
  outtextxy(0,200,"your colored checkers in a");
  outtextxy(0,220,"row, either horizontally,");
  outtextxy(0,240,"vertically or diagonally.");
  outtextxy(0,260,"The game is declared a");
  outtextxy(0,280,"tie if all the ");
  outtextxy(0,300,"pieces are played but nobody");
  outtextxy(0,320,"has four in a row.");
  outtextxy(0,340,"There are 3 levels: beginner,novice,advanced");
  outtextxy(0,360,"with increasing levels of difficulty");
  outtextxy(0,380,"before exploring these levels, understand how scores are kept");

 setcolor(MAGENTA);
 settextstyle(3,0,2);
  outtextxy(30,400,"press next arrow for 'HOW SCORES ARE AWARDED'");



 //y1
 setfillstyle(1,YELLOW);
 floodfill(11*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(11*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,81,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(11*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(11*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,142,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(11*xmax/20+1,203,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(11*xmax/20+1,203,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,203,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(11*xmax/20+1,264,GREEN);
 delay(500);
 setcolor(GREEN);
 circle(11*xmax/20,264,xmax/20);

 //r1
 setfillstyle(1,RED);
 floodfill(13*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(13*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,81,xmax/20);

 setfillstyle(1,RED);
 floodfill(13*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(13*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,142,xmax/20);

 setfillstyle(1,RED);
 floodfill(13*xmax/20+1,203,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(13*xmax/20+1,203,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,203,xmax/20);

 setfillstyle(1,RED);
 floodfill(13*xmax/20+1,264,GREEN);
 delay(500);
 setcolor(GREEN);
 circle(13*xmax/20,264,xmax/20);

 //Y2
 setfillstyle(1,YELLOW);
 floodfill(13*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(13*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,81,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(13*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(13*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(11*xmax/20,142,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(13*xmax/20+1,203,GREEN);
 delay(500);


 //R2
 setfillstyle(1,RED);
 floodfill(15*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(15*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(15*xmax/20,81,xmax/20);

 setfillstyle(1,RED);
 floodfill(15*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(15*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(15*xmax/20,142,xmax/20);

 setfillstyle(1,RED);
 floodfill(15*xmax/20+1,203,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(15*xmax/20+1,203,GREEN);
 setcolor(GREEN);
 circle(15*xmax/20,203,xmax/20);

 setfillstyle(1,RED);
 floodfill(15*xmax/20+1,264,GREEN);
 delay(500);
 setcolor(GREEN);
 circle(15*xmax/20,264,xmax/20);

 //Y2
 setfillstyle(1,YELLOW);
 floodfill(15*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(15*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(15*xmax/20,81,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(15*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(15*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(15*xmax/20,142,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(15*xmax/20+1,203,GREEN);
 delay(500);

  //R3
  setfillstyle(1,RED);
 floodfill(17*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(17*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(17*xmax/20,81,xmax/20);

 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(17*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(17*xmax/20,142,xmax/20);

 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,203,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(17*xmax/20+1,203,GREEN);
 setcolor(GREEN);
 circle(17*xmax/20,203,xmax/20);

 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,264,GREEN);
 delay(500);
 setcolor(GREEN);
 circle(17*xmax/20,264,xmax/20);

 //Y4
 setfillstyle(1,YELLOW);
 floodfill(19*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(19*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(19*xmax/20,81,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(19*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(19*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(19*xmax/20,142,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(19*xmax/20+1,203,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(19*xmax/20+1,203,GREEN);
 setcolor(GREEN);
 circle(19*xmax/20,203,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(19*xmax/20+1,264,GREEN);
 delay(500);
 setcolor(GREEN);
 circle(19*xmax/20,264,xmax/20);


 //R4
 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(17*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(17*xmax/20,81,xmax/20);

 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,142,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(17*xmax/20+1,142,GREEN);
 setcolor(GREEN);
 circle(17*xmax/20,142,xmax/20);

 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,203,GREEN);
 delay(500);


 //Y5
 setfillstyle(1,YELLOW);
 floodfill(15*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(15*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(15*xmax/20,81,xmax/20);

 setfillstyle(1,YELLOW);
 floodfill(15*xmax/20+1,142,GREEN);
 delay(500);

 //R5
 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,81,GREEN);
 delay(500);
 setfillstyle(1,BLACK);
 floodfill(17*xmax/20+1,81,GREEN);
 setcolor(GREEN);
 circle(17*xmax/20,81,xmax/20);

 setfillstyle(1,RED);
 floodfill(17*xmax/20+1,142,GREEN);
 delay(500);

 //Y6
 setfillstyle(1,YELLOW);
 floodfill(17*xmax/20+1,81,GREEN);

  int key1;
    //bioskey
  while(bioskey(1)==0);
  key1=bioskey(0);

	if(key1==19712)
	      { cleardevice();
	      void instruct2();
		instruct2();
	      }

	if(key1==3592)
	      { cleardevice();
		instruct();
	      }

}
 void instruct2()
 { //cleardevice();
   setcolor(WHITE);
   settextstyle(3,0,5);
    int key2,modifiers;

    outtextxy(0,40,"HOW SCORES ARE AWARDED");
	      settextstyle(3,0,2);
	     setcolor(CYAN);
    outtextxy(5,100,"Scores for every player are stored");
    outtextxy(5,120,"and sorted into the leaderboard.");
    outtextxy(5,140,"In each game, of any level, a player gets");
    outtextxy(5,160,"a total of 15 moves.To score more points than your");
    outtextxy(5,180,"opponent you must utilize fewer moves.");
    outtextxy(5,200,"Scores are awarded on the basis of how");
    outtextxy(5,220,"efficiently you play the game.");

    outtextxy(5,240,"To get started, the beginners level provides you");
    outtextxy(5,260,"30 seconds to make your move. In novice level,");
    outtextxy(5,280,"you have 20 sec and in advance 10 sec.");
    outtextxy(5,300,"Advancing to higher levels means difficulty");
    outtextxy(5,320,"increases and so do your scores");

    settextstyle(3,0,3);
    setcolor(MAGENTA);
    outtextxy(5,350,"press backspace to go back to main menu");
       while (bioskey(1) == 0);

   key2 = bioskey(0);
   if(key2==3592)
{ //cleardevice();
 obj.mainmenu();
 }
 getch();
}


 void grid()
{     /* request auto detection  */
   int gdriver = DETECT, gmode, errorcode;

    /* initialize graphics and local variables*/
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
   xmax = getmaxx();
   ymax = getmaxy();
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

    rectangle (1,1,xmax-1,ymax-1);
    rectangle (121,116,xmax-122,ymax-50);
    settextstyle(0,0,4);

  outtextxy(152,80,"0");
  outtextxy(231,80,"1");
  outtextxy(310,80,"2");
  outtextxy(389,80,"3");
  outtextxy(468,80,"4");


  circle(161,390,39);
  circle(240,390,39);
  circle(319,390,39);
  circle(398,390,39);
  circle(477,390,39);

  circle(161,312,39);
  circle(240,312,39);
  circle(319,312,39);
  circle(398,312,39);
  circle(477,312,39);

  circle(161,234,39);
  circle(240,234,39);
  circle(319,234,39);
  circle(398,234,39);
  circle(477,234,39);

  circle(161,156,39);
  circle(240,156,39);
  circle(319,156,39);
  circle(398,156,39);
  circle(477,156,39);

 obj.timer();
 }



 void entry()
{
  if (flg==0)
   {
    setcolor(CYAN);
     settextstyle(0,0,3);
     outtextxy(180,40,"ENTER COLUMN");
    settextstyle(0,0,2);
    outtextxy(180,440,"enter -1 to exit");
    flg++;
   }
   settextstyle(2,0,5);
   outtextxy(60,60,P1);
   outtextxy(534,60,P2);
  if (n%2==0)
   {
    setcolor(RED);
    settextstyle(0,0,5);

    outtextxy(70,80,"P");
    outtextxy(68,125,"l");
    outtextxy(68,170,"a");
    outtextxy(68,220,"y");
    outtextxy(68,275,"e");
    outtextxy(68,325,"r");
    outtextxy(68,375,"1");
    setcolor(WHITE);
    outtextxy(546,80,"P");
    outtextxy(544,125,"l");
    outtextxy(544,170,"a");
    outtextxy(544,220,"y");
    outtextxy(544,275,"e");
    outtextxy(544,325,"r");
    outtextxy(544,375,"2");
  }
  else if (n%2!=0)
   { setcolor(WHITE);
    settextstyle(0,0,5);
    outtextxy(70,80,"P");
    outtextxy(68,125,"l");
    outtextxy(68,170,"a");
    outtextxy(68,220,"y");
    outtextxy(68,275,"e");
    outtextxy(68,325,"r");
    outtextxy(68,375,"1");
    setcolor(YELLOW);
    settextstyle(0,0,5);
    outtextxy(546,80,"P");
    outtextxy(544,125,"l");
    outtextxy(544,170,"a");
    outtextxy(544,220,"y");
    outtextxy(544,275,"e");
    outtextxy(544,325,"r");
    outtextxy(544,375,"2");
  }
  cin>>k;

  if (k==-1)
    exit(0);

  else if (k<0 || k>4)
   {//errorcode
    setcolor(BLACK);
    settextstyle(0,0,3);
    outtextxy(180,40,"ENTER COLUMN");

    settextstyle(1,0,5);
    setcolor(MAGENTA);

    outtextxy(250,30,"ERROR");
    settextstyle(0,0,2);

    setcolor(BLACK);
    outtextxy(180,440,"enter -1 to exit");
    settextstyle(1,0,2);
    setcolor(MAGENTA);
    outtextxy(130,440,"enter a no. between 1 and 4");
  delay(2000);

  setcolor(BLACK);

   settextstyle(1,0,5);
   outtextxy(250,30,"ERROR");
   settextstyle(1,0,2);
   outtextxy(130,440,"enter a no. between 1 and 4");

   setcolor(CYAN);
   settextstyle(0,0,2);
   outtextxy(180,440,"enter -1 to exit");
    entry();
   }


}
 void game1::timer()
{
  clock_t Begin,End,Dura,p;
  Begin=clock();//starts timer
  entry();
  if (n%2==0)
   c1--;
  else
   c2--;
  End=clock();
  Dura=End-Begin;
  //cout<<Dura;
  p=600-150*mode;
  if (Dura>=p)
   {setcolor(WHITE);
    settextstyle(3,0,3);
    outtextxy(200,10,"You gotta be quicker");
    delay(400);
    setcolor(BLACK);
    settextstyle(3,0,3);
    outtextxy(200,10,"You gotta be quicker");
    n++;
    timer();
   }
  else
   {
	spot();
   }
}

 void game1::spot()
{
  int h=3;
  if (P[0][k]!=0)
   { //column full errorcode
      setcolor(BLACK);
      settextstyle(0,0,3);
	    outtextxy(180,40,"ENTER COLUMN");
      settextstyle(0,0,2);
	    outtextxy(180,440,"enter -1 to exit");
      settextstyle(1,0,5);
      setcolor(MAGENTA);
	    outtextxy(250,30,"ERROR");
      settextstyle(1,0,2);
      setcolor(MAGENTA);
	    outtextxy(130,440,"column entered is full");

      delay(2000);

      setcolor(BLACK);
      settextstyle(1,0,5);
	    outtextxy(250,30,"ERROR");
      settextstyle(1,0,2);
	    outtextxy(130,440,"column entered is full");

      setcolor(CYAN);
      settextstyle(0,0,2);
	    outtextxy(180,440,"enter -1 to exit");


   flg--;
    timer();
   }

    while(P[h][k]!=0)
   {
    if (h==0)

    { //errorcode
     setcolor(BLACK);
     settextstyle(0,0,3);
	    outtextxy(180,40,"ENTER COLUMN");
     settextstyle(0,0,2);
	    outtextxy(180,440,"enter -1 to exit");
     settextstyle(1,0,5);
     setcolor(MAGENTA);
	    outtextxy(250,30,"ERROR");
     settextstyle(1,0,2);
     setcolor(MAGENTA);
	    outtextxy(130,440,"column entered is full");

 delay(2000);

     setcolor(BLACK);
     settextstyle(1,0,5);
	   outtextxy(250,30,"ERROR");
     settextstyle(1,0,2);
	   outtextxy(130,440,"column entered is full");
     setcolor(CYAN);
     settextstyle(0,0,2);
	   outtextxy(180,440,"enter -1 to exit");


   flg--;

       timer();
     }
    h--;
   }

  int x1,y1;
  x1=161+(79*k);
  y1=156+(79*h);

  //dropping
  if (n%2==0)
  {  for(int i=156;i<=y1;i+=79)
   { setcolor(RED);
     setfillstyle(SOLID_FILL,RED);
     floodfill(x1,i,getmaxcolor());
     delay(200);
     setcolor(BLACK);
     setfillstyle(SOLID_FILL,BLACK);
     floodfill(x1,i,getmaxcolor());
   }

     setcolor(RED);
     setfillstyle(SOLID_FILL,RED);
     floodfill(x1,y1,getmaxcolor());
     P[h][k]++;
     n++;
     check();
     timer();

}
    if (n%2!=0)
{  for(int i=156;i<=y1;i+=79)
     { setcolor(YELLOW);
       setfillstyle(SOLID_FILL,YELLOW);
       floodfill(x1,i,getmaxcolor());
       delay(200);
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       floodfill(x1,i,getmaxcolor());
     }

   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(x1,y1,getmaxcolor());
   P[h][k]--;
   n++;
}



  delay(200);
  check();
  timer();


 /* void check();
  delay(200);
  check();
  obj.timer();  */
}
  void game1::check()
 {
   if (c1==0)
    {
     w--;
     delay(50);
     cleardevice();
     setcolor(YELLOW);
     settextstyle(2,0,5);
     outtextxy(200,150,"Player 1 Runs out of chances");
     delay(250);
     endpage();
   }
   else if (c2==0)
    {
     w++;
     delay(50);
     cleardevice();
     setcolor(RED);
     settextstyle(2,0,5);
     outtextxy(200,150,"Player 2 Runs out of chances");
     delay(250);
     endpage();
    }
   for (int j=0;j<=4;j++)
   {
      { //veritcal condition
      if (P[0][j]>0 && P[1][j]>0 && P[2][j]>0 && P[3][j]>0)
       {
	w++;
	delay(50);
	endpage();
       }
      else if (P[0][j]<0 && P[1][j]<0 && P[2][j]<0 && P[3][j]<0)
       {
	w--;
	delay(50);
	endpage();
       }
     }
   }
   for (int i=0;i<4;i++)
    {   //horizontal condition
     if (P[i][1]>0 && P[i][2]>0 && P[i][3]>0 &&(P[i][0]>0 || P[i][4]>0))
      {
       w++;
       delay(50);
       endpage();
      }
     else if (P[i][1]<0 && P[i][2]<0 && P[i][3]<0 && (P[i][0]<0 || P[i][4]<0))
      {
       w--;
       delay(50);
       endpage();
      }
  }
   for (j=0;j<2;j++)
    {  //diagonal condition
      if (P[0][j]>0 && P[1][j+1]>0 && P[2][j+2]>0 && P[3][j+3]>0 )
       {
	w++;
	delay(50);
	endpage();
       }
      else if (P[0][j]<0 && P[1][j+1]<0 && P[2][j+2]<0 && P[3][j+3]<0 )
       {
	 w--;
	 delay(50);
	 endpage();
       }
      else if (P[3][j]>0 && P[2][j+1]>0 && P[1][j+2]>0 && P[0][j+3]>0)
       {
	w++;
	delay(50);
	endpage();
       }
      else if (P[3][j]<0 && P[2][j+1]<0 && P[1][j+2]<0 && P[0][j+3]<0)
       {
	w--;
	delay(50);
	endpage();
       }
    }
  int f=0;
  for (i=0;i<4;i++)
   {
    for (j=0;j<5;j++)
     {
      if (P[i][j]==0)
	{
	 f++;
	 break;
	}
     }
   }
  if (f==0)
   {
    w+=2;
    delay(50);
    endpage();
   }
}

 void game1::endpage()
{
  cleardevice();
  settextstyle(0,0,5);

  if (w==1)
   {  int i;
      setbkcolor(RED);
      for(i=0;i<7;i++)
	   {
	     setcolor(BLUE);
	     settextstyle(0,0,i);
	     outtextxy(100,175,"PLAYER 1 WINS!!");
	     delay (100);
	     cleardevice();
	   }
     settextstyle(0,0,7);
     outtextxy(100,175,"PLAYER 1 WINS!!");
     outtextxy(125,250,"WINS!!");
   }
  else if(w==-1)
  {  int j;
     setbkcolor(YELLOW);
     for(j=0;j<7;j++)
	 {
	     setcolor(BLUE);
	     settextstyle(0,0,j);
	     outtextxy(100,175,"PLAYER 2 WINS!!");
	     delay (100);
	     cleardevice();
	 }
     settextstyle(0,0,7);
     outtextxy(100,175,"PLAYER 2 WINS!!");
     outtextxy(125,250,"WINS!!");

  }

 else
   {  int k;
     setbkcolor(CYAN);
     for(k=0;k<7;k++)
	 {
	     setcolor(GREEN);
	     settextstyle(0,0,k);
	     outtextxy(100,175,"DRAW");
	     delay (100);
	     cleardevice();
	 }
     settextstyle(0,0,7);
     outtextxy(100,175,"DRAW!!");

  }


 delay(200);
 input();
 cleardevice();
 finalscore();


}
 void game1::finalscore()
{  cleardevice();
   setbkcolor(BLACK);
   fstream f("Score1.TXT",ios::in);
   f.read((char*)&obj,sizeof(obj));
   while(!f.eof())
    {
     cout<<name<<"  "<<score;
     cout<<'\n';
      f.read((char*)&obj,sizeof(obj));
    }
  f.close();
  delay(3000);
  mainmenu();
}
void game1::getdata()
{
  if (w==1)
   {
    strcpy(name,P1);
    score=c1*mode;
   }
  else if (w==-1)
   {
    strcpy(name,P2);
   score=c2*mode;
   }
}


void game1::creds()
{  settextstyle(1,0,5);
   int i;
   for(i=500;i>0;i--)
   {
    setcolor(i);
    settextstyle(1,0,4);
    outtextxy(250,i,"EFFORTS BY: ");
    settextstyle(1,0,3);
    outtextxy(240,i+35,"Kareena Shah");
    outtextxy(240,i+70,"Nisarg Chadha");
    outtextxy(235,i+105,"Vrushali Pandit");
    outtextxy(235,i+140,"Tajagnya Jepal");
    outtextxy(135,i+175,"Special thanks to Smriti Ma'am");
    settextstyle(1,0,5);
    outtextxy(65,i+210,"THANK YOU FOR PLAYING");

    delay(10);
    cleardevice();

   }
}
 void main()
{   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

    /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
   xmax = getmaxx();
   ymax = getmaxy();
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   clrscr();
   obj.productions();
   obj.title();

    obj.mainmenu();
   /*start();
    grid();
    entry();
    spot();
   */
}