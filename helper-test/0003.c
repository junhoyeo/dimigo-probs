#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int total = 0;
    while (n != 0) {
        total += n % 10; // 나머지 연산자를 이용해서 각 자릿수를 구한다.
        // 이때 음수인 경우도 별 상관 없으니까 그냥 돌리면 됨
        n /= 10;
    }
    printf("%d", total);
}
