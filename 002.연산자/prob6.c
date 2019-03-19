#include <stdio.h>
int main() {
	int a; scanf("0x%X", &a);
	printf("0x%04hx", a | 0x5555);
}
