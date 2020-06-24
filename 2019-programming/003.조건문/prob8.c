#include <stdio.h>
int main() {
	char n[9]; scanf("%s",n);
	int sum = 0;
	for (int i=0; i<4; i++)
		if (n[i] == '1') sum += 1;
	switch(sum){
		case 1:
			printf("도");break;
		case 2:
			printf("개");break;
		case 3:
			printf("걸");break;
		case 4:
			printf("윷");break;
		default:
			printf("모");break;
	}
}
