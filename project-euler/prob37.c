#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define SEARCH_MAX 750000
// 여기까지 탐색

bool is_prime(int n) {
  /* 소수인지 아닌지를 반환 */
  if (n == 1) return false;
  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return false;
  return true;
}

bool is_successive_back(int n) {
  /* 뒤에서부터 자릿수를 하나씩 없애서 successive prime인지를 구함 */
  int i = 1;
  while (n != 0) {
    // printf("%d %d\n", i, n);
    // 여기에서 n은 뒤에서부터 자른 각 수임
    if (!is_prime(n))
      return false;
    n /= 10;
    i *= 10;
  }
  return true;
}

int digit(int n) {
  /* n의 자릿수를 반환 */
  int i = 0;
  for(; n != 0; i++, n /= 10);
  return i;
}

bool is_successive_front(int n){
  /* 앞에서부터 자릿수를 하나씩 없애서 successive prime인지를 구함 */
  int i = pow(10, digit(n));
  while (i != 1) {
    // printf("%d %d\n", i, n%i);
    // 여기에서 n%1은 뒤에서부터 자른 각 수임
    if (!is_prime(n%i))
      return false;
    i /= 10;
  }
  return true;
}

int main() {
  int sum = 0;
  for (int i = 8; i < SEARCH_MAX; i++) {
    if (is_successive_back(i) && is_successive_front(i)) {
      // 앞에서부터 없애나 뒤에서부터 없애나 모두 소수면
      // printf("%d\n", i);
      sum += i;
    }
  }
  printf("%d\n", sum); // 결과 출력
}
