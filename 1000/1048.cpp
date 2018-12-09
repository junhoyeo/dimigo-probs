/**************************************************************
    Problem: 1048
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int w;scanf("%d",&w);
if (w>=20) printf("성인입니다.");
else printf("당신은 %d년 후에 성인이 됩니다.", 20-w);
}