#include <stdio.h>
#include <string.h>

struct MobileInfo {
	char name[100];
	char comp[100];
  int num;
};

int GetPhoneCount(struct MobileInfo mobs[10], int n, char comp[100]) {
  int count = 0;
	for(int i=0;i<n;i++)
		if (!strcmp(mobs[i].comp, comp))
      count++;
  return count;
}

int main() {
  int n; scanf("%d", &n);
	struct MobileInfo mobs[10];
	for(int i=0;i<n;i++){
		scanf("%s", &mobs[i].name);
		scanf("%s", &mobs[i].comp);
		scanf("%d", &mobs[i].num);
	}
  printf("삼성 : %d\nLG : %d\n애플 : %d", GetPhoneCount(mobs, n, "삼성"), GetPhoneCount(mobs, n, "LG"), GetPhoneCount(mobs, n, "애플"));
}
