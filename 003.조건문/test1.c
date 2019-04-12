#include <stdio.h>
int main() {
	int n; scanf("%d",&n);
	if(2<n && n<6)printf("봄!");
	else if(5<n && n<9)printf("여름!");
	else if(8<n && n<12)printf("가을!");
	else if(1>n || n>12)printf("잘못 입력했습니다.");
	else printf("겨울!");
} // 의식의 흐름 코딩법
