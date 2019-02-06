#include <stdio.h>
int main(){
while(1){
int a,b;scanf("%d%d",&a,&b);
if(a==0&&b==0) return 0;
printf("%d %d %d %d%s\n",a+b,(a>b)?a-b:b-a,a*b,a/b,(a*b==15 && a/b==1)?"":" ");
}
}