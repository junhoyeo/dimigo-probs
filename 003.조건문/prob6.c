#include <stdio.h>
int main() {
	int a,b,c;scanf("%d%d%d",&a,&b,&c);
	int d = (a>b)? b:a;
	printf("%d", (c>d)? d:c);
}
