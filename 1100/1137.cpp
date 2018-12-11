/**************************************************************
    Problem: 1137
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a;scanf("%d",&a);int prev=100;
printf("%d %d ",prev,a);while(1){
int tmp=a;a=prev-a;prev=tmp;
printf("%d ",a);if(a<0) return 0;}}