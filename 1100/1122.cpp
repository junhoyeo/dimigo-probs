/**************************************************************
    Problem: 1122
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a[10];
    for(int i=0;i<10;i++) scanf("%d", &a[i]);
    int min=10001; int max=0;
    for(int i=0;i<10;i++){
        if (a[i]>100){
            if (min>a[i]) min=a[i];
        }
        else{
            if (max<a[i]) max=a[i];
        }
    }
    if (min==10001) min=100;
    if (max==0) max=100;
    printf("%d %d",max,min);
}