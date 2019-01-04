/**************************************************************
    Problem: 1192
    User: hack1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int f(int n){
 int a=1,b=2;
 for(int i=0;i<n;i++){
  int t=a;a=(a*b)%100;b=t;
 }
 return b;
}
int main(){
 int n;scanf("%d",&n);
 printf("%d",f(n));
}
