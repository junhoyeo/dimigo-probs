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

bool verify_input(int *input, int input_length) {
    // first number should not be 0
    if (input[0] == 0) return false;

    // there must be no duplicates
    for (int i = 0; i < 9; i++) {
        int count = 0;
        for (int j = 0; j < input_length; j++) {
            if (input[j] == i) {
                if (count > 0) return false;
                count++;
            }
        }
    }

    return true;
}

int main() {
    int numbers[4] = {10, 10, 10, 10};
    random_array(numbers, 4);
    // print_int_array(numbers, 4);
    printf("game start!\n");
    printf("==========\n");

    int tries = 0;
    while (1) {
        int strikes = 0;
        int balls = 0;
        int input[4];

        // get input from user
        for (int i = 0; i < 4; i++)
            scanf("%d", &input[i]);

        // validate user input
        if (!verify_input(input, 4)) {
            printf("input not in valid format\n");
            printf("==========\n");
            continue;
        }
    
        // calculate result
        for (int i = 0; i < 4; i++) {
            if (numbers[i] == input[i]) 
                strikes++;
            else if (in_array(numbers, 4, input[i]))
                balls++;
        }
        tries++;

        if (strikes || balls) 
            printf("%d Strikes %d Balls\n", strikes, balls);
        else printf("out\n");
        if (strikes == 4) {
            printf("Success in %d tries!\n", tries);
            return 0;
        }
        printf("==========\n");
    }
}
