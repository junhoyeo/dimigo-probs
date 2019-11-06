/**************************************************************
    Problem: 1234
    User: hack1520
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
struct P{int x;int y;};int main(){
    printf("세 꼭지점의 좌표를 입력하세요. ");
    struct P p[3];for(int i=0;i<3;i++)scanf("%d %d",&p[i].x,&p[i].y);
    printf("무게중심의 좌표 = (%.1lf, %.1lf)",(double)(p[0].x+p[1].x+p[2].x)/3, (double)(p[0].y+p[1].y+p[2].y)/3);
}