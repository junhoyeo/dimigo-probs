/**************************************************************
    Problem: 1113
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
 for(int i=2; i<=n; i++){
  while(1){
   if(n%i==0){
    printf("%d ", i);
    n/=i;
   }
   else break;
}}}
