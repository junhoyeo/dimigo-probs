/**************************************************************
    Problem: 1054
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a,b,c;scanf("%d %d %d",&a,&b,&c);
int min=(a<b)?a:b;
min=(min<c)?min:c;
printf("%d",min);}