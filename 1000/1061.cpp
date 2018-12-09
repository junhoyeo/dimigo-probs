/**************************************************************
    Problem: 1061
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a;scanf("%d",&a);
if (10<=a && a<=19) printf("10대");
else if (20<=a && a<=29) printf("20대");
else if (30<=a && a<=39) printf("30대");
else if (40<=a && a<=49) printf("40대");
else printf("기타");
}