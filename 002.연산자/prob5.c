#include <stdio.h>
int main() {
	int a; scanf("0x%X", &a);
	printf("0x%04hx", ~a);

	// https://stackoverflow.com/questions/8441257/why-does-c-print-my-hex-values-incorrectly#answer-8441401
	// integer type-promotion 때문에 length modifier를 붙여줘야 함
}
