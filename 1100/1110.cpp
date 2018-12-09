/**************************************************************
    Problem: 1110
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int fac(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}
int main(){
int n;scanf("%d",&n);int r=0;
for(int i=1;i<=n;i++){
    r+=fac(i);
}
printf("%d",r);
}