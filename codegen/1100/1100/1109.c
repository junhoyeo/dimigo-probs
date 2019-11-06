/**************************************************************
    Problem: 1109
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int sumof(int n){
    int sum=0;
    for(int i=1;i<=n;i++)sum+=i;
    return sum;
}
int main(){
int n;scanf("%d",&n);int r=0;
for(int i=1;i<=n;i++)r+=sumof(i);
printf("%d",r);
}