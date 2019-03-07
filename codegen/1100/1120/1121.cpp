/**************************************************************
    Problem: 1121
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int min=1001;
    int a[10];
    for(int i=0;i<10;i++) scanf("%d", &a[i]);
    for(int i=0;i<10;i++){
        if(min>a[i]) min=a[i];
    }
    printf("%d",min);
}