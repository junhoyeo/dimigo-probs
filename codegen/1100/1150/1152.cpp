/**************************************************************
    Problem: 1152
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1092 kb
****************************************************************/
 
#include <stdio.h>
int main(){int a[7];int i;for(i=0;i<7;i++)scanf("%d",&a[i]);
int min=100;int max=0;for(i=0;i<7;i++){if(a[i]>max)max=a[i];if(a[i]<min)min=a[i];}
int sum=0;for(i=0;i<7;i++){if(a[i]!=min&&a[i]!=max)sum+=a[i];}
printf("%d\n%d",sum,sum/5);
}