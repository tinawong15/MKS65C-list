# include "list.h"
# include <stdio.h>
# include <stdlib.h>

void print_list(struct node *n){
  struct node *p = n;
  while(p) {
    printf("Node Value: %d\n", p->i);
    p = p->next;
  }
}

struct node * insert_front(struct node *n, int i) {
  struct node *newHead = malloc(1 * sizeof(struct node));
  newHead->i = i;
  newHead->next = n;
  return newHead;
}

struct node * free_list(struct node *n) {
  struct node *p = n;
  struct node *current = n;
  while(current) {
    free(p);
    current = current->next;
    p = current;
  }
  return n;
}
