#include <stdlib.h>

#define STACK_MAX_SIZE 50
#define STACK_UNDERFLOW 1
typedef double Td;

typedef struct Stack_tag {
  Td data[STACK_MAX_SIZE];
  size_t size;
} Stack_t;

void spush(Stack_t *stack, const Td value);
Td spop(Stack_t *stack);
Td speek(const Stack_t *stack);