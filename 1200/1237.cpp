/**************************************************************
    Problem: 1237
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <string.h>
struct P{char n[101];char t[101];char c[101];};int main(){struct P p;scanf("%s",p.n);scanf("%s",p.t);scanf("%s",p.c);printf("이름 : %s\n전화번호 : %s\n주소 : %s",p.n,p.t,p.c);}