#include <stdio.h>
int main() {
	int k; scanf("%d", &k);
  int bin[13] = {0,};
	int pos = 0;
  while (1) {
		bin[pos++] = k % 2;
		k /= 2;
    if (!k) break;
  }
	for (int i=pos-1; i>=0; i--)
    printf("%d", bin[i]);
}
