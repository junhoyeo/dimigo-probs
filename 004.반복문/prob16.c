// 도우미 테스트 #3이랑 같은 문제임 
#include <stdio.h>
int main() {
  int n; scanf("%d", &n);
  int s = 0;
  while (n != 0) {
    s += n % 10;
    n /= 10;
  }
  printf("%d", s);
}
