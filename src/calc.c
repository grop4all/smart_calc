#include "./calc.h"



#define is_func(c) ((c <= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
#define is_number(c) (c - '0' < 10 && c - '0' >= 0)
#define is_operator(c)                                                     \
  (c == '+' || c == '-' || c == '/' || c == '*' || c == '!' || c == '=' || \
   c == '^')


// int main(int args, char **argv) {
//   char *line = "5*-2";

//   char *out = malloc(256);

//   pars(line, out);
//   printf("\nВывод: ");
//   printf("%s\n", out);
//   printf("%f", couting(out));

//   //   printf("%c\n",check_func("cos(1231)"));
//   //   printf("%c\n",check_func("sin(1231)"));
//   //   printf("%c\n",check_func("atan(1231)"));
// }
int calc(char *line) {}

void conver_func(Stack_t *stack, char c) {
  double rez = NAN;
  double val;
  switch (c) {
    case 'c':
      rez = cos(spop(stack));
      break;
    case 's':
      rez = sin(spop(stack));
      break;
	case 't':
		rez = tan(spop(stack));
		break;
	case 'a':
		rez = acos(spop(stack));
		break;
	case 'b':
		rez = asin(spop(stack));
		break;
	case 'i':
		rez = atan(spop(stack));
		break;
	case 'd':
		rez = log10(spop(stack));
		break;
	case '+':
		rez = spop(stack) + spop(stack);
		break;
  case '*':
    rez = spop(stack) * spop(stack);
    break;
	case '-':
		val = spop(stack) ;
		rez = spop(stack) - val;
		break;
    default:
      break;
  }
  if (rez != NAN) spush(stack, rez);
}

char check_func(char *line) {
  for (int i = 0; set_funcution[i].func_name != NULL; ++i) {
    char *str = set_funcution[i].func_name;
    // size_t n = strlen(str);
    if (strncmp(line, set_funcution[i].func_name, strlen(str)) == 0)
      return set_funcution[i].short_name;
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
  printf("line = %s\n", line);
  int status = 0;
  for (int i = 0; line[i] != '\0'; ++i) {
    
    if (is_number(line[i]) || line[i] == '.') {
      *ptr++ = line[i];
      if (!is_number(line[i + 1]) && !(line[i + 1] == '.')) {
        *ptr++ = ',';
      }
    } else if (is_func(line[i]) || line[i] == '(') {
      char buff_name = check_func(line + i);
      if (buff_name != ' ') push(&head, buff_name);
      if (line[i] == '(') push(&head, '(');
    } else if (line[i] == ',') {
      while (peek(head) != '(') {
        *ptr++ = pop2(&head);
        if (peek(head) != '(') printf("Error ',' args");
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
        printf("Error in ( )");
      }
    }
  }
  while (peek(head) != '\2') {
    if (peek(head) == '(' || peek(head) == ')') printf("Error in last peek");
    *ptr++ = pop2(&head);
    *ptr++ = ',';
  }
  *--ptr = '\0';
  return 0;
}

double couting(char *line) {
  char *strcep = ",";
  Stack_t stack;
  stack.size = 0;
  char *ptr = strtok(line, strcep);
  while (ptr != NULL) {
    printf("%s\n", ptr);
    if (atof(ptr) || *ptr == '0') 
		spush(&stack, atof(ptr));

    if (is_func(*ptr) || is_operator(*ptr)) {
      conver_func(&stack, *ptr);
    }
    ptr = strtok(NULL, strcep);
  }
  return spop(&stack);
}
