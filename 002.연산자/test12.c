#include <stdio.h>
int gd(int n, int d){ return (n/d)%10*d; }
#include <stdio.h>
int main() {
  int n;scanf("0x%d",&n);
  printf("%d %d %d %d", gd(n, 1000), gd(n, 100), gd(n, 10), gd(n, 1));
  char hex[7];
  sprintf(hex, "%d", n);
  sscanf(hex, "%x", &n);
  printf("\n0x%x", n | 0xaaaa);
}
