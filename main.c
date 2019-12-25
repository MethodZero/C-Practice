#include <stdio.h>
#include <stdlib.h>
#include "ops.h"

LL mylist;

int main(void) {

  LL mainlist = initLinkedList();
  mainlist.first -> val = 3;
  push_after(mainlist, 0);
  node_at(mainlist, 1) -> val = 2;

  int i=2;
  NODE current = *mainlist.first;
  current.val = 2;
  while (1) {
    i+=2;
    if (current.next != NULL) {
      current.val = i;
      current = *current.next;
    } else break;
  }

  current = *mainlist.first;

  while (1) {
    printf("%d\n",current.val);
    if (current.next != NULL) {
      current = *current.next;
    } else break;
  }
  return 0;
}