/**************************************************************
    Problem: 1060
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a,b,c;scanf("%d %d %d",&a,&b,&c);
int aver =(a+b+c)/3;
if (aver>=60 && a>=40 && b>=40 && c>=40) printf("합격");
else printf("불합격");
}