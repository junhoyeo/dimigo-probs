#include <stdio.h>
#include <string.h>

struct FoodInfo {
	char name[100];
	int cal;
};

int GetCal(struct FoodInfo foods[5], char name[100]) {
	for(int i=0;i<5;i++)
		if (!strcmp(foods[i].name, name))
			return foods[i].cal;
  return -1;
}

int main() {
  struct FoodInfo foods[5];
  for(int i=0;i<5;i++){
    scanf("%s", &foods[i].name);
    scanf("%d", &foods[i].cal);
  }
  struct FoodInfo new;
  scanf("%s", &new.name);
  scanf("%d", &new.cal);
  int cal = GetCal(foods, new.name);
  if (cal == -1)
    printf("알수없음");
  else
		printf("%d", cal/10 * new.cal);
}
