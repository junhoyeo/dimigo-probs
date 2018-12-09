/**************************************************************
    Problem: 1039
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
printf("민수의 키와 몸무게 입력 ");
int m1,m2;scanf("%d %d",&m1,&m2);
printf("기영이의 키와 몸무게 입력 ");
int k1,k2;scanf("%d %d",&k1,&k2);
if (m1 > k1 && m2 > k2) printf("1");
else printf("0");
}