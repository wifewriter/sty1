//
// Created by 杨洋 on 2020/2/21.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;//全局变量
    a=10;
    {
        int a;//局部变量。
        a=5;
    }
    printf("%d",a);
    return 0;
}
//用户工作区RAM  【 代码区
//             【 常量区
//             【 静态存储区 （包括全局变量和局部静态变量static）  】 数据区
//             【 动态存储区 （存储auto变量,自动变量，默认类型 ）  】
//寄存器变量 register 变量
//外部变量 extern