#include <stdio.h>
int main() {
	float a[10];
	int k; scanf("%d", &k);
	for(int i=0;i<10;i++){
		a[i] = k+ 0.1*i;
	}
	for(int i=0;i<10;i++)
		printf("%.1f ", a[i]);
}
