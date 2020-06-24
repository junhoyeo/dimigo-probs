#include <stdio.h>
int main() {
	int n;scanf("%d",&n);
	double m = 1000000;
	for(int i=0;i<n;i++)
		m = m*(105/100.0);
	printf("%.0f원\n", m);
}
