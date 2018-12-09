/**************************************************************
    Problem: 1120
    User: hack1520
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
float score[6]={85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
int a,b;scanf("%d %d",&a,&b);
printf("%.1lf",score[a-1] + score[b-1]);
}