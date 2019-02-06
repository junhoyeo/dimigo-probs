/**************************************************************
    Problem: 1088
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int a;scanf("%d",&a);
    for(int i=1;i<11;i++){
        printf("%d",a*i);
        if(i!=10)printf(" ");
    }
}