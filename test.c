#include <stdio.h>
int main(){
int n;scanf("%d",&n);int a=1;int b=65;
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++) printf("%d ",a++);
for(int j=0;j<i+1;j++){
if (j==i && n==3) printf("%c",b++);
else printf("%c ",b++);
}printf("\n");}}