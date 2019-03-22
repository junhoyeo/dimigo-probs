#include <stdio.h>
int main() {
	int a, b; scanf("%d %d", &a, &b);
	if (a == b) printf("같음");
	else printf("%d", (a>b) ? a: b);
}
