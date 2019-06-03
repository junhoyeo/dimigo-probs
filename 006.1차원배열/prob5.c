#include <stdio.h>
int main() {
	int a[10];
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	int k;scanf("%d",&k);
	for(int i=0;i<10;i++)
		if(a[i]==k){
			printf("%d",i);
			return 0;
		}
	printf("-1");
}
