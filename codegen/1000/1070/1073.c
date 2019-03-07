/**************************************************************
    Problem: 1073
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){while(1){
int w,h;char t;scanf("%d%d %c",&w,&h,&t);printf("밑변의 길이 = 높이 = 입력한 삼각형의 넓이는 %.1lf입니다.\n계속하시겠습니까?",w*h/2.0);
if(t!='Y'&&t!='y')return 0;else printf(" ");}}

// #include <stdio.h>
// int main(){
// while(1){
// int w;printf("밑변의 길이 = ");scanf("%d",&w);int h;printf("높이 = ");scanf("%d",&h);
// printf("입력한 삼각형의 넓이는 %.1lf입니다. 계속하시겠습니까? ",h*w/2.0);char t;scanf(" %c",&t);
// if(t!='Y'&&t!='y')break;
// }}
