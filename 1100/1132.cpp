/**************************************************************
    Problem: 1132
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a[100];int sum=0;int five=0;
    for(int i=0;i<101;i++){
        scanf("%d", &a[i]);
        if(a[i]==0){
            printf("5의 배수 : %d개\n합계 : %d\n평균 : %.1lf",five,sum,sum/(double)five);
            break;
        }
        else{
            if(a[i]%5==0){
                five++;
                sum+=a[i];
            }
        }
    }
}