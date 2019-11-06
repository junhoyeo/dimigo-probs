/**************************************************************
    Problem: 1065
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){while(1){printf("정수를 입력하세요. ");int a;scanf("%d",&a);
if(a==0)return 0;else if(a>0)printf("양수입니다.\n");else printf("음수입니다.\n");}}