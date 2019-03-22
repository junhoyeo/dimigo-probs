#include <stdio.h>
int main() {
	int a; scanf("%d", &a);
	printf("%s.", (1 <= a && a <= 1000) ? "범위안에 있다":"범위를 벗어난다");
}
