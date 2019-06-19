#include <stdio.h>
#include <math.h>

int factorial(int n) {
  int res = 1;
  while (n > 1)
    res *= n--;
  return res;
}

int factorial_sum(int n) {
  int sum = 0;
  while (n != 0) {
    sum += factorial(n % 10);
    n /= 10;
  }
  return sum;
}

int main() {
  int SEARCH_MAX = factorial(9) * 7;
  int result = 0;
  for (int n = 3; n <= SEARCH_MAX; n++) {
    if (n == factorial_sum(n)) 
      result += n;
  }
  printf("%d\n", result);
}
