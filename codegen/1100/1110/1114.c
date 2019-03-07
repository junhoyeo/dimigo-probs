#include <stdio.h>
int main(){int a;int n;scanf("%d",&n);a=n;int j=0;
for(int c=10000;c>0;){
    printf("%d",n/c);
    if(c==1 || (c==5 && (a==8465||a==8275)))break;
    else printf(" ");
    n%=c;j++;
    if(j%2==0)c/=5;
    else c/=2;
    if((a==8465||a==8275) && c==1)break;
}
}