// PE(82%)
#include <stdio.h>
int main(){
 int n;scanf("%d",&n); int d=0;
 for(int a=1;a<=n;a++)
 for(int b=a+1;b<=n;b++)
 for(int c=b+1;c<=n;c++)
 if(c*c==a*a+b*b){
  if(d==1) printf("\n");
  else d=1;
  printf("%d %d %d",a,b,c);
 }
}
