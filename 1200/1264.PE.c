// PE(64%)
#include <stdio.h>
int main(){int c=0;int arr[1000];int i=0;
while(1){
    int n;scanf("%d",&n);
    if(n==0)break;
    if(n%3==0&&n%5==0){arr[i++]=n;c++;}
}
for(int j=0;j<i;j++){
    if(j==i-1)printf("%d\n",arr[j]);else printf("%d ",arr[j]);
}
printf("%d개",c);}
