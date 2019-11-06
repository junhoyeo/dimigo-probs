#include <stdio.h>

float triangle_size(int n){
	return (n * n) / 2.0;
}

void print_triangle(int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++)
			printf("*");
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%.2f\n", triangle_size(n));
	print_triangle(n);
	return 0;
}
