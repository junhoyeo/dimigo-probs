#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define SEARCH_MAX 3000 
// SEARCH_MAX번째 pentagonal number까지 탐색

int64_t pentagonal(int64_t n) {
  /* return the nth pentagonal number */
  int64_t tmp = n * (3 * n - 1) / 2; 
    // 오각수 계산 공식은 n(3n − 1)/2
  return tmp;
}

bool is_integer(float n) {
  /* return whether (float) n is an integer */
  return floorf(n) == n; 
    // 소수점 이하를 모두 제거하는 floorf() 함수를 이용하여 n이 정수인지를 구함
}

bool is_pentagonal(int64_t n) {
  /* return whether n is an pentagonal number */
  float tmp = (sqrt(24 * n + 1) + 1) / 6;
    // https://en.wikipedia.org/wiki/Pentagonal_number#Tests_for_pentagonal_numbers
    // (sqrt(24n + 1) + 1)/6의 값이 자연수인지를 확인하여 n이 오각수인지 판별할 수 있다.
  return is_integer(tmp);
}

int main() {
  int64_t result = INFINITY; // result의 초기값을 높게 설정하여 추후 최솟값으로 갱신해 나간다.
  for (int64_t n1 = 1; n1 <= SEARCH_MAX; n1++) { // SEARCH_MAX번째 오각수까지 탐색
    int64_t j = pentagonal(n1);
    // n1번째 pentagonal number j를 생성
    for (int64_t n2 = 1; n2 <= SEARCH_MAX; n2++) { // SEARCH_MAX번째 오각수까지 탐색
      int64_t k = pentagonal(n2);
      // n2번째 pentagonal number k를 생성
      if (is_pentagonal(j + k) && is_pentagonal(llabs(k - j))) {
        /* if the sum(j + k) and the difference (llabs(k-j)) of the two pentagonals 
          is another pentagonal */
        int64_t min = llabs(k - j); // j와 k의 차이를 구한다.
        if (min < result) result = min;
        // calculate diff and renew result
      }
    }
  }
  printf("%lld\n", result);
  // print result
}
