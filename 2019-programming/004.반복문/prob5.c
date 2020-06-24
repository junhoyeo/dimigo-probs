#include <stdio.h>
int main() {
	int a, b, sum=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++) sum+=i;
	printf("%d",sum);
}
