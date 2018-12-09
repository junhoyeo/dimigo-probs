/**************************************************************
    Problem: 1232
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
struct p{char n[101];int g;};int main(){struct p p1;struct p p2;strcpy(p1.n,"제주초등학교");p1.g=6;scanf("%s",p2.n);scanf("%d",&p2.g);printf("%s %d학년\n%s %d학년",p1.n,p1.g,p2.n,p2.g);}