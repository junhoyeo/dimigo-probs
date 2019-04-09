#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>

void print_int(int number) {
  printf("%d\n", number);
}

void print_int_array(int array[], int array_length) {
  for (int i = 0; i < array_length; i++)
    printf("%d ", array[i]);
  printf("\n");
}

int random_int() {
  int i;
  unsigned char c;
  int fd = open("/dev/urandom", O_RDWR);
  read(fd, &c, 1);
  close(fd);
  return c % 10;
}

bool in_array(int array[], int array_length, int item) {
  for (int i = 0; i < array_length; i++)
    if (item == array[i]) return true;
  return false;
}

void random_array(int *array, int array_length) { 
  for (int i = 0; i < 4; i++) {
    while (1) {
      int tmp = random_int();
      // print_int(tmp);
      if (i == 0 && tmp == 0) continue;
      if (!in_array(array, 4, tmp)) {
        array[i] = tmp;
        break;
      }
    }
  }
  // print_int_array(array, 4);
}

int main() {
  int numbers[4] = {10, 10, 10, 10};
  random_array(numbers, 4);
  print_int_array(numbers, 4);
}
