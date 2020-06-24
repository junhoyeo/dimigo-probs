#include <stdio.h>
int main() {
	int m;
	scanf("%d", &m);
	float a[20][20] = {0,};
	float b[3] = {0,};
	for(int i=0;i<m;i++){
		scanf("%f %f %f", &a[i][0], &a[i][1], &a[i][2]);
    for(int j=0;j<3;j++)
      b[i] += a[i][i];
	}
	for(int i=0;i<3;i++)
		b[i] /= m;
	for(int i=0;i<m;i++)
		printf("%5.1f %5.1f %5.1f %5.1f \n", a[i][0], a[i][1], a[i][2], (a[i][0]+ a[i][1]+ a[i][2])/3.0);
  printf("%5.1f %5.1f %5.1f \n", b[0], b[1], b[2]);
}
