/**************************************************************
    Problem: 1062
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a,b,c;scanf("%d %d %d",&a,&b,&c);
if (a>=90 && b>=90 &&c>=90) printf("A");
else if (a>=80 && b>=80 &&c>=80) printf("B");
else if (a>=70 && b>=70 &&c>=70) printf("C");
else printf("F");
}