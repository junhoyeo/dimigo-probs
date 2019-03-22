#include <stdio.h>

int diff(n, a, b) {
	// n이 range(a, b+1) 안(파이썬의 그것)에 있는지 체크하는 함수를 만듦
	// 네이밍 죄송합니다
	return (a <= n && n <= b);
}

int main() {
	int n; scanf("%d", &n);
	if (diff(n, 0, 9)) printf("어린이");
	else if (diff(n, 10, 19)) printf("청소년");
	else if (diff(n, 20, 39)) printf("청년");
	else if (diff(n, 40, 59)) printf("장년");
	else printf("노년");
}
