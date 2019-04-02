#include <stdio.h>
int main() {
	int k,i,j=1,s=0;scanf("%d",&k);
	for(i=3;;i=i*2+3){ s+=i; if(j==k) break; j++; }
	printf("%d",s);
}
