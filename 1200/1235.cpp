/**************************************************************
    Problem: 1235
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
struct P{char n[101];int h;};int main(){
struct P p[5];
for(int i=0;i<5;i++){scanf("%s",p[i].n);scanf("%d",&p[i].h);}
struct P min;min.h=300;for(int i=0;i<5;i++){if(p[i].h<min.h){strcpy(min.n,p[i].n);min.h=p[i].h;}}
printf("%s %d",min.n,min.h);
}