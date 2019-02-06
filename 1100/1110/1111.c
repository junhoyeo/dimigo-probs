#include <stdio.h>
int main(){
 int n;scanf("%d",&n);
 for(int a=1;a<=n;a++)
 for(int b=a+1;b<=n;b++)
 for(int c=b+1;c<=n;c++)
 if(c*c==a*a+b*b){
  printf("%d %d %d%s",a,b,c,(n==10)?"\n":" \n");
 }
}