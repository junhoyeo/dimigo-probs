/**************************************************************
    Problem: 1069
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    // while(1){
        int n;scanf("%d",&n);
        for(int i=1;i<=n;i++){
            if(i==n)printf("%d",i);
            else printf("%d ",i);
        }
    // }
}