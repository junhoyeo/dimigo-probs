#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int i = 1; // 1부터 하나씩 찾아 보자
	while(1){
		for (int j=1; j<=a; j++){ // 1 ~ a 중에서
			if (i % j != 0) break; 
			// 나누어 떨어지지 않으면 그냥 break해서 다음 수로 넘어가고 
			if (j == a) { // 만약에 a까지 위의 if문을 통과했으면 값 출력하고 종료
				printf("%d", i);
				return 0;
			}
		}
		i++; // 다음 수 고고 
	}
}
