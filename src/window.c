//
// Created by Administrator on 2020/2/23.
//
#include "../lib/acllib.h"


#define TITLE "first window test"
#define winwidth 640
#define winheight 480

TimerEventCallback timerEvent();
void KeyEvent(int key,int event);
void drawpic();

ACL_Image img;
ACL_Image img2;
const char * yyt= "../pic/pic1.bmp";
const char * target = "../pic/pic2.bmp";
int picwidth,picheight,dist=10;
int x1,y1;
int x2,y2;
int Setup()
{
    x1=0;y1=0;
    x2=0,y2=0;
    picwidth=100;picheight=100;
    initWindow(TITLE,DEFAULT,DEFAULT,winwidth,winheight);
    registerTimerEvent(timerEvent);
    registerKeyboardEvent(KeyEvent);
    loadImage(yyt,&img);
    loadImage(target,&img2);
    drawpic();
//    keyControl(&img2,x2,y2,dist,picwidth,picheight);
    startTimer(0,50);
    return 0;
}
TimerEventCallback timerEvent(int ID){
    if(ID==0&&x1<=500&&x1>=0){
        x1+=dist;
        drawpic();
    } else x1*= -1;
    if (y1<=400&&y1>=0){
        y1+=dist;
        drawpic();
    }else y1*=-1;

}
void drawpic(){
    beginPaint();
    clearDevice();
    putImageScale(&img,x1,y1,picwidth,picheight);
   // putImage(&img,picwidth,picheight);
    endPaint();
}
void KeyEvent(int key,int event)
{
    if (event != KEY_DOWN)return ;
    else {
        switch (key){
            case VK_UP:y2-=dist;
                break;
            case VK_DOWN:y2+=dist;
                break;
            case VK_LEFT:x2-=dist;
                break;
            case VK_RIGHT:x2+=dist;
                break;
            default:break;
        }
    }
    beginPaint();
    clearDevice();
    putImageScale(&img2,x2,y2,picwidth,picheight);
    // putImage(&img,picwidth,picheight);
    endPaint();
}
