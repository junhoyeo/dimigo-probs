#include <stdio.h>

struct T_Shirt {
	int model;
	int size;
	char color;
};

int main() {
  struct T_Shirt ts;
  int rest;
  scanf("%d%c%d", &ts.model, &ts.color, &rest);
  ts.size = rest / 1000;
  printf("모델번호 : %d\n색상 : %s\n사이즈 : %d", ts.model, (ts.color == 'B') ? "Black" : (ts.color == 'R') ? "Red" : "White", ts.size);
}
