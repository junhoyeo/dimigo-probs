#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n%d\n%d\n%0.2lf", a+b, a-b, a*b, (float)a/b);
}
