/**************************************************************
    Problem: 1039
    User: haca520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){printf("민수의 키와 몸무게 입력 ");int q,m;scanf("%d %d",&q,&m);printf("기영이의 키와 몸무게 입력 ");int a,b;scanf("%d %d",&a,&b);if(q>a&&m>b)printf("1");else printf("0");}