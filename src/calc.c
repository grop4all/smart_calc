#include "./calc.h"

#define is_func(c) ((c <= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
#define is_number(c) (c - '0' < 10 && c - '0' >= 0)
#define is_operator(c)                                                     \
  (c == '+' || c == '-' || c == '/' || c == '*' || c == '=' || c == '^' || \
   c == '%')

// int main(int args, char **argv) {
//   char *line = "2+56";
//   char *out = malloc(256);
//   pars(line, out);
//   printf("\nВывод: ");
//   printf("%s\n", out);
//   printf("%f", counting(out));
// }

long double calc(char *line) {
  char preref_str[256];
  char out[256];
  prerefactor(line, preref_str);
  if (0 == pars(preref_str, out))
    return counting(out);
  else
    return NAN;
}

t_func set_funcution[] = {{
                              "cos",
                              'c',
                          },
                          {"sin", 's'},
                          {"tan", 't'},
                          {"acos", 'a'},
                          {"asin", 'b'},
                          {"atan", 'i'},
                          {"ln", 'd'},
                          {"sqrt", 'q'},
                          {"log", 'e'},
                          {NULL, 0}};

void conver_func(Stack_t *stack, char c) {
  long double rez = NAN;
  long double val;
  switch (c) {
    case 'c':
      rez = cosl(spop(stack));
      break;
    case 's':
      rez = sinl(spop(stack));
      break;
    case 't':
      rez = tanl(spop(stack));
      break;
    case 'a':
      rez = acosl(spop(stack));
      break;
    case 'b':
      rez = asinl(spop(stack));
      break;
    case 'i':
      rez = atanl(spop(stack));
      break;
    case 'd':
      rez = logl(spop(stack));
      break;
    case '+':
      rez = spop(stack) + spop(stack);
      break;
    case '*':
      rez = spop(stack) * spop(stack);
      break;
    case '-':
      val = spop(stack);
      rez = spop(stack) - val;
      break;
    case '/':
      val = spop(stack);
      rez = spop(stack) / val;
      break;
    case '%':
      val = spop(stack);
      rez = fmodl(spop(stack), val);
      break;
    case '^':
      val = spop(stack);
      rez = powl(spop(stack), val);
      break;
    case 'e':
      rez = log10l(spop(stack));
      break;
    default:
      break;
  }
  if (rez != NAN) spush(stack, rez);
}

char *prerefactor(char *line, char *out) {
  char *ptr_refactor_line = out;
  for (int i = 0; line[i] != '\0'; ++i) {
    if (line[i] == '-') {
      if (i == 0) *ptr_refactor_line++ = '0';
      if (line[i - 1] == '(') {
        *ptr_refactor_line++ = '0';
      }
    }
    *ptr_refactor_line++ = line[i];
  }
  *ptr_refactor_line++ = '\0';
  return out;
}

char check_func(char *line, int *j) {
  for (int i = 0; set_funcution[i].func_name != NULL; ++i) {
    char *str = set_funcution[i].func_name;
    size_t n = strlen(str);
    if (strncmp(line, set_funcution[i].func_name, strlen(str)) == 0) {
      *j += n;
      return set_funcution[i].short_name;
    }
  }
  return ' ';
}

int preor_oper(char oper) {
  switch (oper) {
    case '+':
      return 0;
      break;
    case '-':
      return 0;
      break;
    case '*':
      return 1;
      break;
    case '/':
      return 1;
      break;
    case '^':
      return 3;
      break;
    case '(':
      return 4;
      break;
    case ')':
      return 4;
      break;
    default:
      if (is_func(oper))
        return 2;
      else
        return -1;
      break;
  }
}

int pars(char *line, char *out) {
  Node_t *head = NULL;
  char *ptr = out;
  for (int i = 0; line[i] != '\0'; ++i) {
    if (is_number(line[i]) || line[i] == '.') {
      *ptr++ = line[i];
      if (!is_number(line[i + 1]) && !(line[i + 1] == '.')) {
        *ptr++ = ',';
      }
    } else if (is_func(line[i]) || line[i] == '(') {
      char buff_name = check_func(line + i, &i);
      if (buff_name != ' ') push(&head, buff_name);
      if (line[i] == '(') push(&head, '(');
    } else if (line[i] == ',') {
      while (peek(head) != '(') {
        *ptr++ = pop2(&head);
        if (peek(head) != '(') return 1;
      }
    } else if (is_operator(line[i])) {
      while (preor_oper(peek(head)) >= preor_oper(line[i]) &&
             is_operator(peek(head))) {
        *ptr++ = pop2(&head);
        *ptr++ = ',';
      }
      push(&head, line[i]);
    } else if (line[i] == ')') {
      while (peek(head) != '(') {
        if (is_operator(peek(head))) {
          *ptr++ = pop2(&head);
          *ptr++ = ',';
        }
      }
      char c = pop2(&head);
      if (is_func(peek(head))) {
        *ptr++ = pop2(&head);
        *ptr++ = ',';
      }
      if (getSize(head) == 0 && c != '(') {
        return 1;
      }
    }
  }
  while (peek(head) != '\2') {
    if (peek(head) == '(' || peek(head) == ')') return 1;
    *ptr++ = pop2(&head);
    *ptr++ = ',';
  }
  *--ptr = '\0';
  return 0;
}

long double counting(char *line) {
  char *strcep = ",";
  Stack_t stack;
  stack.size = 0;
  char *ptr = strtok(line, strcep);
  while (ptr != NULL) {
    if (atol(ptr) || *ptr == '0') spush(&stack, atold(ptr));
    if (is_func(*ptr) || is_operator(*ptr)) {
      conver_func(&stack, *ptr);
    }
    ptr = strtok(NULL, strcep);
  }
  return spop(&stack);
}
