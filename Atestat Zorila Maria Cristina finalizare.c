#include<graphics.h>
#include<cmath>
#include<iostream>
#include<stdio.h>


int i;
 float x,y,v0,t,g=9.81,alpha,gr,amp=100,xd,yd,m,Ec,Ep,v,vx,vy;

char sx[100], sy[100],sEc[100],sEp[100];

using namespace std;


 void desen(float x, float y)
 {
     setcolor(LIGHTGREEN);
     circle(x,y,3);
     delay(40);
     setcolor(BLUE);
     circle(x,y,3);

     xd=v0*cos(alpha)*t;
     yd=v0*sin(alpha)*t-(g*t*t)/2;

     setcolor(LIGHTGREEN);
     sprintf(sx,"x= %.2f",xd);
     outtextxy(10,10,sx);

     setcolor(LIGHTGREEN);
     sprintf(sy,"y= %.1f",yd);
     outtextxy(10,30,sy);

     vx=v0*cos(alpha);
     vy=v0*sin(alpha)-g*t;

     v=sqrt(vx*vx+vy*vy);
     Ec=m*v*v/2;

 if(yd<=0)
        Ec=Ep=0;

      setcolor(WHITE);
      sprintf(sEc,"Ec= %.2f         ",Ec);
      outtextxy(10,50,sEc);

      Ep=m*g*tan(alpha)*yd;

       if(yd<=0)
        Ec=Ep=0;

      setcolor(WHITE);
      sprintf(sEp,"Ep= %.2f        ",Ep);
      outtextxy(10,70,sEp);



 }




 int main()
 {
     do
     {
        cout<<"Introduceti viteza initiala: ";
        cin>>v0;
        if(v0<=0 || v0>=25)
            cout<<"Viteza initiala trebuie sa se afle in intervalul (0, 25). Alegeti alta valoare. ";
     }
     while(v0<=0 || v0>=25);

     do
     {
       cout<<"Introduceti unghiul initial: ";
       cin>>gr;
       alpha=2*3.14*gr/360;
       if(gr<=0 || gr>90)
        cout<<"Unghiul trebuie sa se afle in intervalul (0, 90]. Alegeti alta valoare. ";
     }
     while(gr<=0 || gr>90);

     do
     {
        cout<<"Introduceti masa corpului: ";
        cin>>m;
         if(m<1 || m>100)
         cout<<"Masa corpului trebuie sa se afle in intervalul [1,100]. Alegeti alta valoare. ";


     }
      while(m<1 || m>100);


     initwindow(1000,800,"ATESTAT MARIA",100,100);
     setbkcolor(BLUE);
     cleardevice();
     setcolor(LIGHTGREEN);
     line(0,400,1000,400);

     for(i=3;i<=1000;i=i+5)
            line(i,400,i-3,407);

 t=0;


// miscarea

 do
 {
     x=v0*cos(alpha)*t;
     y=v0*sin(alpha)*t-(g*t*t)/2;
     x=25+x*amp;
     y=400-y*amp;
     desen(x,y);
     t=t+0.01;
 }
 while(y<=400);

 system("PAUSE");
 closegraph();
 }

