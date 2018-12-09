/**************************************************************
    Problem: 1193
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gugu(int n, int l){
    if (n==1) return l;
    l++;
    if (n%2==0) return gugu(n/2,l);
    return gugu(n/3,l);
}
int main(){
int n;scanf("%d",&n);int l=0;
printf("%d",gugu(n,l));
}