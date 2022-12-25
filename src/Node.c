#include "./Node.h"

void push(Node_t **head, T value) {
  Node_t *tmp = malloc(sizeof(Node_t));

  if (tmp == NULL) {
    exit(STACK_OVERFLOW);
  }
  tmp->next = *head;
  tmp->value = value;
  *head = tmp;
}

Node_t *pop1(Node_t **head) {
  Node_t *out;
  if ((*head) == NULL) {
    exit(STACK_UNDERFLOW);
  }
  out = *head;
  *head = (*head)->next;
  return out;
}

T pop2(Node_t **head) {
  Node_t *out;
  T value;
  if (*head == NULL) {
    return '\2';
  }
  out = *head;
  *head = (*head)->next;
  value = out->value;
  free(out);
  return value;
}

T peek(const Node_t *head) {
  if (head == NULL) {
    return '\2';
  }
  return head->value;
}



size_t getSize(const Node_t *head) {
  size_t size = 0;
  while (head) {
    size++;
    head = head->next;
  }
  return size;
}
