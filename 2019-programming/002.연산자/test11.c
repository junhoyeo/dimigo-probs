#include <stdio.h>
int main() {
	char n[9]; scanf("%s",n);
	int sum = 0;
	for (int i=0; i<8; i++)
		if (n[i] == '0') sum += 1;
	printf("%d",sum);
}
