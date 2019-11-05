#include <stdio.h>
#include <string.h>

struct ZooInfo {
	char name[100];
	char place[100];
  int num;
};

int main() {
  int n; scanf("%d", &n);
	struct ZooInfo zoo[10];
  int max = 0;
  int max_idx = 0;
	for(int i=0;i<n;i++){
		scanf("%s", &zoo[i].name);
		scanf("%d", &zoo[i].num);
		scanf("%s", &zoo[i].place);

    if (zoo[i].num >= max) {
      max = zoo[i].num;
      max_idx = i;
    }
	}
  printf("%s %s", zoo[max_idx].name, zoo[max_idx].place);
}
