/**************************************************************
    Problem: 1091
    User: 18HD1520
    Language: C
    Result: Accepted
    Time:4 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){
int a,b;scanf("%d %d",&a,&b);
int c = (a<b)?1:-1;
for(int i=1;i<=9;i++){
for(int j=a; j!=b+c; j+=c)printf("%d * %d = %2d   ",j,i,i*j);
printf("\n");}
}
