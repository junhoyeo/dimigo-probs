#include <stdio.h>
int main(){int a=0,b=0;for(int i=0;i<10;i++){int t;scanf("%d",&t);if(t%2==0)a++;else b++;}printf("짝수 : %d개\n홀수 : %d개",a,b);}