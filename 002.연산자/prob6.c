#include <stdio.h>
int main() {
	int a; scanf("0x%X", &a);
	printf("0x%04hx", a | 0x5555);
	// 010101 ... 패턴의 0x5555와 비트 OR 연산을 함
}
