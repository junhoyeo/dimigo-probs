/**************************************************************
    Problem: 1141
    User: hack1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a[5][5]={{0,},};
for(int i=0;i<5;i++){
    a[i][0]=1;a[0][i]=1;
}
for(int i=1;i<5;i++){
    for(int j=1;j<5;j++){
        a[i][j]=a[i-1][j]+a[i][j-1];
    }
}
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d",a[i][j]);
        if(j!=4)printf(" ");
    }
    if(i!=4)printf("\n");
}
}