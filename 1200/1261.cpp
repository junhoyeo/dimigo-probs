/**************************************************************
    Problem: 1261
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a,b,c;scanf("%d %d %d",&a,&b,&c);int sum=a+b+c;
    printf("%d %d...%d",sum,sum/3,sum%3);
}