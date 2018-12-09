/**************************************************************
    Problem: 1101
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int n;scanf("%d",&n);
for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
        printf("*");
    }
    printf("\n");
}
for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
        printf("*");
    }
    printf("\n");
}
}