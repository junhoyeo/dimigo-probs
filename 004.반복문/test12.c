#include <stdio.h>

int clap(int n) {
	int s = 0;
	while (n != 0) {
		for (int i = 3; i<10; i+=3)
       if (n % 10 == i) s++;
    n /= 10;
  }
	return s;
}

int main() { // 주노최고
  int a,b; scanf("%d%d",&a,&b);
	int n = 0;
	for(int i=a;i<=b;i++)
    n += clap(i);
	printf("%d", n);
}
