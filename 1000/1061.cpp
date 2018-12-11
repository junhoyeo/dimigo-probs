/**************************************************************
    Problem: 1061
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a;scanf("%d",&a);
if(9<a && a<20)printf("10대");else if(19<a && a<30)printf("20대");
else if(29<a && a<40)printf("30대");else if(39<a && a<50)printf("40대");
else printf("기타");}