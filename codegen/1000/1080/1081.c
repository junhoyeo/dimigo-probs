/**************************************************************
    Problem: 1081
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
    int i,j;
    for(i=2;i<5;i++){
        for(j=1;j<6;j++)printf("%d * %d = %2d   ",i,j,i*j);
        printf("\n");
    }
}
