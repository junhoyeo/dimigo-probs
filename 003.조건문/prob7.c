#include <stdio.h>
int main() {
	int n;scanf("%d",&n);
	if (n%4==0) { // 4
		if (n%100==0) { // 100
			if (n%400==0) printf("%d년은 윤년입니다.",n); // 400
			else printf("%d년은 윤년이 아닙니다.",n);
		}
		else printf("%d년은 윤년입니다.",n);
	} else printf("%d년은 윤년이 아닙니다.",n);
}
