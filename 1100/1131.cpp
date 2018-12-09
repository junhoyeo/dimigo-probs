/**************************************************************
    Problem: 1131
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a[100];int max=-1000;int min=1000;
    for(int i=0;i<101;i++){
        scanf("%d", &a[i]);
        if(a[i]==999){
            printf("최대값 : %d\n최소값 : %d",max,min);
            break;
        }
        else{
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
    }
}