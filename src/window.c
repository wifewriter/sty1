//
// Created by Administrator on 2020/2/23.
//
#include "acllib.h"
#define TITLE "first window test"
#define winwidth 640
#define winheight 480

TimerEventCallback timerEvent();
void drawpic();

ACL_Image img;
const char * yyt= "../pic/pic1.tmp";
int picwidth,picheight,dist=10;
int x,y;
int Setup()
{
    x=0;y=0;
    picwidth=100;picheight=100;
    initWindow(TITLE,DEFAULT,DEFAULT,winwidth,winheight);
    registerTimerEvent(timerEvent);

    loadImage(yyt,&img);
    drawpic();
    startTimer(0,50);
    return 0;
}
TimerEventCallback timerEvent(int ID){
    if(ID==0&&x<500){
        x+=dist;
        drawpic();
    } else if (y<400){
        y+=dist;
        drawpic();
    }

}
void drawpic(){
    beginPaint();
    clearDevice();
    putImageScale(&img,x,y,picwidth,picheight);
   // putImage(&img,picwidth,picheight);
    endPaint();
}
