#include <stdio.h>
int main() {
	int n,i,j=1;scanf("%d",&n);
	for(i=1;;i+=4){ if(j==n) break; j++; }
	printf("%d",i);
}
