#include <stdio.h>

int calMultiple(int n, int r) {
	if (r > 100) return 0;
	int tmp = (r % n == 0) ? r : 0;
	return tmp + calMultiple(n, r + 1);
}

int main() {
	int n;scanf("%d", &n);
	printf("%d", calMultiple(n, 1));
}
