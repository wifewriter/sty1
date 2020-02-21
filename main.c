#include <stdio.h>
#include <stdlib.h>
typedef struct std{
    unsigned int num;
    int score;
    char name[20];
    char sex[10];
}Std,*STD;
float cal(STD, int);
int main() {
    Std class1[5]={
            {20191,75,'yang','boy'},
            {20192,80,'wang','boy'},
            {20193,70,'zhang','girl'},
            {20194,77,'ming','girl'},
            {20195,81,'huang','boy'}
    };
    float ascore=0.0;
    ascore=cal(&class1,5);
    printf("%f",ascore);
    return 0;
}
float cal(STD class1,int n){
    float sum=0.0;
    for (int i = 0; i <n ; ++i) {
        sum+=(float)class1[i].score;
    }
    return sum/(float)n;

}