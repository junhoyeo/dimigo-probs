#include <stdio.h>
#include <string.h>

struct Triangle {
	char color[100];
	int w;
  int h;
};

int getTriangleArea(struct Triangle t) {
  return (t.w * t.h) /2;
}

int SearchTriangle(struct Triangle tris[5], char color[100], int width) {
  int result = 0;
	for(int i=0;i<5;i++)
		if (!strcmp(tris[i].color, color) && width <= getTriangleArea(tris[i]))
			result++;
  return result;
}

int main() {
  struct Triangle tris[5];
  for(int i=0;i<5;i++){
    scanf("%s", &tris[i].color);
    scanf("%d", &tris[i].w);
    scanf("%d", &tris[i].h);
  }
  struct Triangle new;
  scanf("%s", &new.color);
  scanf("%d", &new.w);
  printf("%d", SearchTriangle(tris, new.color, new.w));
}
