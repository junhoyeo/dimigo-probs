#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define SEARCH_MAX 3000 
// SEARCH_MAX번째 pentagonal number까지 탐색

int64_t pentagonal(int64_t n) {
  /* return the nth pentagonal number */
  int64_t tmp = n * (3 * n - 1) / 2;
  return tmp;
}

bool is_integer(float n) {
  /* return whether (float) n is an integer */
  return floorf(n) == n;
}

bool is_pentagonal(int64_t n) {
  /* return whether n is an pentagonal number */
  float tmp = (sqrt(24 * n + 1) + 1) / 6;
  return is_integer(tmp);
}

int main() {
  int64_t result = INFINITY;
  for (int64_t n1 = 1; n1 <= SEARCH_MAX; n1++) {
    int64_t j = pentagonal(n1);
    // n1번째 pentagonal number j를 생성
    for (int64_t n2 = 1; n2 <= SEARCH_MAX; n2++) {
      int64_t k = pentagonal(n2);
      // n2번째 pentagonal number k를 생성
      if (is_pentagonal(j + k) && is_pentagonal(llabs(k - j))) {
        /* if the sum(j + k) and the difference (llabs(k-j)) of the two pentagonals 
          is another pentagonal */
        int64_t min = llabs(k - j);
        if (min < result) result = min;
        // calculate diff and renew result
      }
    }
  }
  printf("%lld\n", result);
  // print result
}
