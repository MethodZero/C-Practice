#include "types.h"

NODE *new_node() {
  NODE *temp = (NODE*)malloc(sizeof(NODE));
  return temp;
}

NODE *node_at(LL list, int n) {
  NODE *current = list.first;
  for (int i=0;i<n;i++) {
    if (current -> next != NULL) {
    current = current -> next;
    } else break;
  }
  return current;
}

void push_after(LL list, int pos) {
  NODE *current = node_at(list,pos);
  NODE *created = new_node();
  created -> next = current -> next;
  current -> next = created;
}

LL initLinkedList() {
  LL res;
  res.first = new_node();
  return res;
}