/**************************************************************
    Problem: 1255
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    float a[10];for(int i=0;i<10;i++)scanf("%f",&a[i]);
    printf("%.1f",(a[0]+a[9])/2);
}