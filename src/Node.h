#include <stdlib.h>
#include <stdio.h>
#define STACK_OVERFLOW  0
#define STACK_UNDERFLOW 1
#define OUT_OF_MEMORY 2




typedef char T;
struct Node {
    T value;
    struct Node *next;
};
typedef struct Node Node_t;


T peek(const Node_t* head);
void push(Node_t **head, T value);
Node_t* pop1(Node_t **head);
T pop2(Node_t **head);
size_t getSize(const Node_t *head);
