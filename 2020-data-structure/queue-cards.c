#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef int element;
typedef struct {
    int front, rear, size;
    element queue[MAX_SIZE];
} queue_type;

queue_type* create_queue(int size) {
  queue_type *new_queue;
  new_queue = (queue_type *)malloc(sizeof(queue_type));
  new_queue -> front = 0;
  new_queue -> rear = 0;
  new_queue -> size = size;
  return new_queue;
}

bool is_empty(queue_type* queue) {
  return (queue -> front == queue -> rear);
}

bool is_full(queue_type* queue) {
  return (queue -> rear == MAX_SIZE - 1);
}

void enqueue(queue_type* queue, element item) {
  if (is_full(queue))
    return;
  queue -> queue[(queue -> rear)++] = item;
}

element dequeue(queue_type* queue) {
  if (is_empty(queue)) {
    printf("empty");
    exit(0);
  }
  return queue -> queue[(queue -> front)++];
}

element peek(queue_type *queue) {
  if (is_empty(queue)) {
    printf("empty");
    exit(0);
  }
  return queue -> queue[queue -> front];
}

bool is_end(queue_type *cards) {
  int length = cards -> rear - cards -> front;
  return length == 1;
}

int main() {
  int number_of_cards;
  scanf("%d", &number_of_cards);

  queue_type *cards = create_queue(number_of_cards);

  for (int card_index = 1; card_index <= number_of_cards; card_index++) {
    enqueue(cards, card_index);
  }

  while (1) {
    if (is_end(cards)) {
      break;
    }

    int removed_card = dequeue(cards);
    int moved_card = dequeue(cards);
    enqueue(cards, moved_card);
  }

  printf("%d\n", dequeue(cards));
}
