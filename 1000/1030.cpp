/**************************************************************
    Problem: 1030
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a,b;scanf("%d %d",&a,&b);
int r = (a++)*(--b);
printf("%d %d %d", a, b, r);
}