/**************************************************************
    Problem: 1129
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    float a[6];
    for(int i=0;i<6;i++) scanf("%f", &a[i]);
    float sum=0;
    for(int i=0;i<6;i++) sum+=a[i];
    printf("%.1f", sum/6.0);
}