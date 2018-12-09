/**************************************************************
    Problem: 1238
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
struct P{char n[101];char t[101];char c[101];};int main(){struct P p[3];int i,j;char t[101];for(i=0;i<3;i++){scanf("%s",p[i].n);scanf("%s",p[i].t);scanf("%s",p[i].c);}for (i=0;i<2;i++){for (int j=0;j<2-i;j++)if (strcmp(p[j].n, p[j+1].n)>0){strcpy(t,p[j].n);strcpy(p[j].n,p[j+1].n);strcpy(p[j+1].n,t);strcpy(t,p[j].t);strcpy(p[j].t,p[j+1].t);strcpy(p[j+1].t,t);strcpy(t,p[j].c);strcpy(p[j].c,p[j+1].c);strcpy(p[j+1].c,t);}}printf("이름 : %s\n전화번호 : %s\n주소 : %s",p[0].n,p[0].t,p[0].c);}