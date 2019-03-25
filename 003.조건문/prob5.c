#include <stdio.h>
int main() {
	int a, n; char b;
	scanf("%d\n%d\n%c",&a,&n,&b);
	if(a>=12 || n>=130 || b=='y') printf("놀이기구에 탑승하세요.\n");
	else printf("놀이기구에 탑승할 수 없습니다.\n");
}
