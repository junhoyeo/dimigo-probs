/**************************************************************
    Problem: 1064
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int i=1;
int sum = 0;
int n;scanf("%d",&n);
while(i<=n){
    sum+=i; i++;
}
printf("%d",sum);
}