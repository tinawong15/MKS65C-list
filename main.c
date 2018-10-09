# include "list.h"
# include <stdio.h>
# include <stdlib.h>

int main() {
  struct node *head = malloc(1*sizeof(struct node));
  struct node *middle = malloc(1*sizeof(struct node));
  struct node *tail = malloc(1*sizeof(struct node));
  head->i = 1;
  head->next = middle;
  middle->i = 2;
  middle->next = tail;
  tail->i = 3;
  tail->next = 0;
  printf("======= PRINT LINKED LIST =======\n");
  print_list(head);
  printf("====== INSERT AT FRONT ========\n");
  print_list(insert_front(head, 10));
  printf("======= FREE LIST =======\n");
  struct node * headPointer = free_list(head);
  printf("%d\n", headPointer->i);
  return 0;
}
