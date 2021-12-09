
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

int a=110+40,b=240+40,c=180+40,d=190+40,e=60+40,f=140+40,g=220+40,h=0;
int arr[3][3] = {4,4,4,4,4,4,4,4,4};
void game_struct(){
line(a,a,a,g);
line(c,a,c,g);
line(e,f,b,f);
line(e,d,b,d);
outtextxy(30,a,"O");
outtextxy(30,f+25,"1(Y)");
outtextxy(30,d+20,"2");
outtextxy(e,40+40,"O");
outtextxy(a+20,40+40,"1(X)");
outtextxy(g,40+40,"2");
}

void X_tic(int a1){
 setcolor(4);
 switch(a1){
   case 1:
	  line(e,a,a-10,f-10);
	  line(a-10,a,e-10,f-10);
	  //(o,o)
	  arr[0][0] = 1;
	  setcolor(15);
	  break;
   case 2:
	  line(e,f+20,a-10,d-10);
	  line(a-10,f+20,e-10,d-10);
	 //(0,1)
	  arr[0][1] = 1;
	  setcolor(15);
	  break;
   case 3:
	  line(e,d+10,a-10,g);
	  line(a-10,d+10,e,g);
	  //(0,2)
	  arr[0][2] = 1;
	  setcolor(15);
	  break;
   case 4:
	  line(a+20,a,a+60,f-10);
	  line(a+60,a,a+20,f-10);
	  //(1,0)
	  arr[1][0] =1;
	  setcolor(15);
	  break;
   case 5:
	  line(a+20,f+20,a+60,d-10);
	  line(a+60,f+20,a+20,d-10);
	  //(1,1)
	  arr[1][1] = 1;
	  setcolor(15);
	  break;
   case 6:
	  line(a+20,d+10,a+60,g);
	  line(a+60,d+10,a+20,g);
	  //(1,2)
	  arr[1][2] = 1;
	  setcolor(15);
	  break;
   case 7:
	  line(c+15,a,b-10,f-10);
	  line(b-10,a,c+15,f-10);
	  //(2,0)
	  arr[2][0] = 1;
	  setcolor(15);
	  break;
   case 8:
	 line(c+15,f+10,b-10,d-10);
	 line(b-10,f+10,c+15,d-10);
	 //(2,1)
	 arr[2][1] = 1;
	 setcolor(15);
	 break;
   case 9:
	 line(c+15,d+10,b-10,g);
	 line(b-10,d+10,c+15,g);
	 //(2,2)
	 arr[2][2] = 1;
	 setcolor(15);
	 break;
   default:
	  setcolor(15);
	  exit(0);
	  break;

 }

}

int check_win(){
  //1st row
  if((arr[0][0] == 1) && (arr[0][1] == 1) && (arr[0][2] == 1)){
      return 1;
  }else if((arr[1][0] == 1) && (arr[1][1] == 1) && (arr[1][2] == 1)){ //2 row
      return 1;
  }else if((arr[2][0] == 1) && (arr[2][1] == 1) && (arr[2][2] == 1)){ //3 row
      return 1;
  }else if((arr[0][0] == 1) && (arr[1][0] == 1) && (arr[2][0] == 1)){//1 col
      return 1;
  }else if((arr[0][1] == 1) && (arr[1][1] == 1) && (arr[2][1] == 1)){//2 col
      return 1;
  }else if((arr[0][2] == 1) && (arr[1][2] == 1) && (arr[2][2] == 1)){//3 col
      return 1;
  }else if((arr[0][0] == 1) && (arr[1][1] == 1) && (arr[2][2] == 1)){//1 diag
      return 1;
  }else if((arr[0][2] == 1) && (arr[1][1] == 1) && (arr[2][0] == 1)){//2 diag
      return 1;
  }else if((arr[0][0] == 2) && (arr[0][1] == 2) && (arr[0][2] == 2)){//1 row
      return 2;
  }else if((arr[1][0] == 2) && (arr[1][1] == 2) && (arr[1][2] == 2)){//2 row
      return 2;
  }else if((arr[2][0] == 2) && (arr[2][1] == 2) && (arr[2][2] == 2)){//3 row
      return 2;
  }else if((arr[0][0] == 2) && (arr[1][0] == 2) && (arr[2][0] == 2)){//1 col
      return 2;
  }else if((arr[0][1] == 2) && (arr[1][1] == 2) && (arr[2][1] == 2)){//2 col
      return 2;
  }else if((arr[0][2] == 2) && (arr[1][2] == 2) && (arr[2][2] == 2)){//3 col
      return 2;
  }else if((arr[0][0] == 2) && (arr[1][1] == 2) && (arr[2][2] == 2)){//1 diag
      return 2;
  }else if((arr[0][2] == 2) && (arr[1][1] == 2) && (arr[2][0] == 2)){//2 diag
      return 2;
  }else{
      return -1;
  }
}

void display(){
 outtextxy(30,10,"Player 1 = X");
 outtextxy(180,10,"Player 2 = O");
}

void circle_tic(int b1){
 setcolor(2);
 switch(b1){
     case 1:
	   //(0,0)
	   circle(120,160,15);
	   arr[0][0] = 2;
	   setcolor(15);
	   break;
     case 2:
	   //(0,1)
	   circle(120,205,15);
	   arr[0][1] = 2;
	   setcolor(15);
	   break;
     case 3:
	   //(0,2)
	   circle(120,250,15);
	   arr[0][2] = 2;
	   setcolor(15);
	   break;

     case 4:
	   //(1,0)
	   circle(190,160,15);
	   arr[1][0] = 2;
	   setcolor(15);
	   break;

     case 5:
	   //(1,1)
	   circle(145+40,165+40,15);
	   arr[1][1] = 2;
	   setcolor(15);
	   break;
     case 6:
	   //(1,2)
	   circle(145+40,210+40,15);
	   arr[1][2] = 2;
	   setcolor(15);
	   break;
    case 7:
	   //(2,0)
	   circle(255,160,15);
	   arr[2][0] = 2;
	   setcolor(15);
	   break;
    case 8:
	   //(2,1)
	   circle(215+40,165+40,15);
	   arr[2][1] = 2;
	   setcolor(15);
	   break;
   case 9:
	   //(2,2)
	   circle(215+40,210+40,15);
	   arr[2][2] = 2;
	   setcolor(15);
	   break;

   default :
	   break;
 }

}

void divide(){

  int xmax,ymax;
  xmax = getmaxx();
  ymax = getmaxy();
  line(xmax/2,0,xmax/2,ymax/2+90);
  line(0,ymax/2+90,xmax,ymax/2+90);
}

void printing_x(){
  int xmax = getmaxx();
  int ymax = getmaxy();
  int a,b;
  outtextxy((xmax/2)+10,20,"Choose The Following Co-ordinates " );
  outtextxy((xmax/2)+70,40,"For Player 1 in (X,Y) ORDER:-" );
  outtextxy((xmax/2)+90,60,"1. (O,O)");
  outtextxy((xmax/2)+90,80,"2. (O,1)");
  outtextxy((xmax/2)+90,100,"3. (O,2)");
  outtextxy((xmax/2)+90,120,"4. (1,O)");
  outtextxy((xmax/2)+90,140,"5. (1,1)");
  outtextxy((xmax/2)+90,160,"6. (1,2)");
  outtextxy((xmax/2)+90,180,"7. (2,O)");
  outtextxy((xmax/2)+90,200,"8. (2,1)");
  outtextxy((xmax/2)+90,220,"9. (2,2)");
  scanf("%d",&a);
  X_tic(a);
  b = check_win();

  if(b==1){
    settextstyle(0,0,2);
    outtextxy(50,(ymax/2)+140,"Player 1 Is The Winner !!!!!");
    h=1;
  }else if(b==2){
    settextstyle(0,0,2);
    outtextxy(50,(ymax/2)+140,"Player 2 Is The Winner !!!!!!");
    h=1;
  }

}

void printing_o(){
  int xmax = getmaxx();
  int ymax = getmaxy();
  int a,b;
  outtextxy((xmax/2)+10,20,"Choose The Following Co-ordinates " );
  outtextxy((xmax/2)+70,40,"For Player 2 in (X,Y) ORDER:-" );
  outtextxy((xmax/2)+90,60,"1. (O,O)");
  outtextxy((xmax/2)+90,80,"2. (O,1)");
  outtextxy((xmax/2)+90,100,"3. (O,2)");
  outtextxy((xmax/2)+90,120,"4. (1,O)");
  outtextxy((xmax/2)+90,140,"5. (1,1)");
  outtextxy((xmax/2)+90,160,"6. (1,2)");
  outtextxy((xmax/2)+90,180,"7. (2,O)");
  outtextxy((xmax/2)+90,200,"8. (2,1)");
  outtextxy((xmax/2)+90,220,"9. (2,2)");
  scanf("%d",&a);
  circle_tic(a);
  b = check_win();

  if(b==1){
    settextstyle(0,0,2);
    outtextxy(50,(ymax/2)+140,"Player 1 Is The Winner !!!!!");
    h=1;
  }else if(b==2){
    settextstyle(0,0,2);
    outtextxy(50,(ymax/2)+140,"Player 2 Is The Winner !!!!!!");
    h=1;
  }
}
void draw(){
 int xmax,ymax;
 xmax = getmaxx();
 ymax = getmaxy();
 settextstyle(0,0,2);
 outtextxy((xmax/2)-100,(ymax/2)+140,"GAME DRAW !!!!!");
}
int main(){
int gd = DETECT,gm,c,i;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
display();
game_struct();
divide();

for(i=1;i<=9;i++){
 if((i%2)!=0){
    printing_x();
    if(h>0)
    {
     break;
    }
}else{
    printing_o();
    if(h>0){
    break;
    }
  }
}

c = check_win();
if(c== -1){
   draw();
}
getch();
closegraph();
return 0;
}