/**************************************************************
    Problem: 1057
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a;scanf("%d",&a);if(a%400==0||(a%4==0&&a%100!=0))printf("윤년");else printf("평년");}