#include <stdio.h>
int sum_position(int number){
	int sum = 0;
	while (number != 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
int main() {
	int a;
	scanf("%d",&a);
	printf("%d", sum_position(a));
}
