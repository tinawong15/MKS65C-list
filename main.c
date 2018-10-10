# include "list.h"
# include <stdio.h>
# include <stdlib.h>

int main() {
  struct node *head = NULL;
  head = insert_front(head, 1);
  head = insert_front(head, 2);
  head = insert_front(head, 3);
  printf("======= PRINT LINKED LIST =======\n");
  print_list(head);
  printf("====== INSERT AT FRONT ========\n");
  head = insert_front(head, 4);
  print_list(head);
  printf("======= FREE LIST =======\n");
  head = free_list(head);
  print_list(head);
  return 0;
}
