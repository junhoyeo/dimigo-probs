/**************************************************************
    Problem: 1080
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=2;j<7;j++){
            if(j==6)printf("%d",j+i);
            else printf("%d ",j+i);
        }
        if(i!=4) printf("\n");
    }
}