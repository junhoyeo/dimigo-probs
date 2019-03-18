#include <stdio.h>
int main() {
	char a;
	scanf("%c", &a);
	printf("%c", a-32);
}

// 하나씩 shift 해서 출력하기

// n = input()
// print (chr((ord(n) + 1 - ord('A')) % 26 + ord('A')))
// # 따라서 (n+1-'A')%26 + 'A'
