/**************************************************************
    Problem: 1119
    User: hack1520
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a[100];
    for(int i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            for(int j=i-1;j>=0;j--){
                printf("%d ", a[j]);
            }
            return 0;
        }
    }
}