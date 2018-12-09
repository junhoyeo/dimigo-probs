/**************************************************************
    Problem: 1233
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
struct p{char n[101];int g;int a;};int main(){struct p p1;struct p p2;scanf("%s",p1.n);scanf("%d %d",&p1.g,&p1.a);scanf("%s",p2.n);scanf("%d %d",&p2.g,&p2.a);printf("%s %d %d\n%s %d %d\n",p1.n,p1.g,p1.a,p2.n,p2.g,p2.a);printf("평균 %d %d",(p1.g+p2.g)/2,(p1.a+p2.a)/2);}