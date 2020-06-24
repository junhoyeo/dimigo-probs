#include <stdio.h>
int in_array(int array[], int array_length, int item) {
    for (int i = 0; i < array_length; i++)
        if (item == array[i]) return 1;
    return 0;
}
int main() { // 주노최고
	int a[10];int idx=0;
	for(int i=0;i<10;i++){
		int tmp;scanf("%d", &tmp);
		if (!in_array(a, idx, tmp))
			a[idx++]=tmp;
	}
	for(int i=0;i<idx;i++){
		printf("%d ", a[i]);
	}
}
