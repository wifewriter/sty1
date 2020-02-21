#include <printf.h>

//
// Created by 杨洋 on 2020/2/20.
//
int recursive(int);
int main(){
    int n;
    int sum=0;
    n=4;
    sum = recursive(n);
    printf("%d",sum);
    return 0;
}
int recursive(int n){
    if (n==1)
        return n;
    else
        return n*recursive(n-1);

}
int gcd2(int a,int b){//公约数非递归算法。
    int temp;
    while(b!=0){
        temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}

