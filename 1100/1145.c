/**************************************************************
    Problem: 1145
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include<stdio.h>
int main(){int a[4][3]={{3,5,9},{2,11,5},{8,30,10},{22,5,1}};int s=0;for(int i=0;i<4;i++){for(int j=0;j<3;j++){printf("%d ",a[i][j]);s+=a[i][j];}printf("\n");}printf("%d",s);}
