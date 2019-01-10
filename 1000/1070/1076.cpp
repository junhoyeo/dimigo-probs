/**************************************************************
    Problem: 1076
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==0){
            if(i==a) printf("%d",i);
            else printf("%d ",i);
        }
    }
}