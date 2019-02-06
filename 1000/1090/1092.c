#include <stdio.h>
int main(){int n;scanf("%d",&n);int s=0;int j=0;for(int i=1;;i++){
    if(i%2!=0){s+=i;j++;}
    if(s>=n){printf("%d %d",j,s);break;}
}}
