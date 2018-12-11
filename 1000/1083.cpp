/**************************************************************
    Problem: 1083
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a,b;scanf("%d %d",&a,&b);if(a<b){int t=a;a=b;b=t;}
for(int i=b;i<=a;i++){
    if(i==a)printf("%d",i);
    else printf("%d ",i);
}}