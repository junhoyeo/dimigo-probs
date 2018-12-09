/**************************************************************
    Problem: 1100
    User: hack1520
    Language: C++
    Result: Accepted
    Time:8 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;scanf("%d",&n);
    for(int i=n;i<100;i++){
        if(i%n==0){
            if(i%10!=0){
                printf("%d ", i);
            }
            else{
                printf("%d", i);
                return 0;
            }
        }
    }
}