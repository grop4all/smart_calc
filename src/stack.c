
#include "./stack.h"

void spush(Stack_t *stack, const Td value) {
  stack->data[stack->size] = value;
  stack->size++;
}

Td spop(Stack_t *stack) {
  if (stack->size == 0) {
    exit(STACK_UNDERFLOW);
  }
  stack->size--;
  return stack->data[stack->size];
}

Td speek(const Stack_t *stack) {
  if (stack->size <= 0) {
    exit(STACK_UNDERFLOW);
  }
  return stack->data[stack->size - 1];
}