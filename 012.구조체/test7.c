#include <stdio.h>
#include <string.h>

struct CarInfo {
	char name[100];
	char comp[100];
  int num;
};

int GetTotalCount(struct CarInfo cars[5], char comp[100]) {
  int total = 0;
	for(int i=0;i<5;i++)
		if (!strcmp(cars[i].comp, comp))
      total += cars[i].num;
  return total;
}

int main() {
	struct CarInfo cars[5];
	for(int i=0;i<5;i++){
		scanf("%s", &cars[i].name);
		scanf("%s", &cars[i].comp);
		scanf("%d", &cars[i].num);
	}
  char query[100];
  scanf("%s", &query);
  printf("%d", GetTotalCount(cars, query));
}
