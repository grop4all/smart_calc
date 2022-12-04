
#include "./calc.h"

#include <string.h>

#include "./Node.h"
#define is_func(c) ((c <= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
#define is_number(c) (c - '0' < 10 && c - '0' >= 0)
#define is_operator(c)                                                     \
  (c == '+' || c == '-' || c == '/' || c == '*' || c == '!' || c == '%' || \
   c == '=' || c == '^')\

int preor_oper(char oper);
char check_func(char *line);

int main(int args, char **argv) {
  char *line = "tan(7+3/434+58*(sin(231.321313/54)))";

  char *out = malloc(256);

  pars(line, out);
  printf("\nВывод: ");
  printf("%s\n", out);

//   printf("%c\n",check_func("cos(1231)"));
//   printf("%c\n",check_func("sin(1231)"));
//   printf("%c\n",check_func("atan(1231)"));
}
int calc(char *line) {}

char check_func(char *line) {
  for (int i = 0; set_func[i].func_name != NULL; ++i) {
	char *str = set_func[i].func_name;
	// size_t n = strlen(str);
	if (strncmp(line, set_func[i].func_name, strlen(str)) == 0)
		return set_func[i].short_name;
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
  for (int i = 0; line[i] != '\0'; i++) {
	if (is_number(line[i]) || line[i] == '.') {
		*ptr = line[i];
		++ptr;
		if (!is_number(line[i+1]) && !(line[i+1] == '.')) {
			*ptr = ',';
			++ptr;
		}
	} else if (is_func(line[i]) || line[i] == '(') {
	  char buff_name = check_func(line + i);
	  if (buff_name != ' ')
		push(&head, buff_name);
	  if( line[i] == '(')
			push(&head, '(');
	} else if (line[i] == ',') {
	  while (peek(head) != '(') {
		*ptr = pop2(&head);
		++ptr;
	  }
	  //   if (head == NULL) printf("Не првильное выражение");
	  //   break;
	  // обрботать ситуацию когда стек пуст
	} else if (is_operator(line[i])) {
	  while (preor_oper(peek(head)) > preor_oper(line[i]) 
	  && is_operator(peek(head))) {
		*ptr = pop2(&head);
		++ptr;
		*ptr = ',';
		++ptr;
	  }
	  push(&head, line[i]);
	} else if (line[i] == ')') {
	  while (peek(head) != '(') {
		if (is_operator(peek(head))) {
		  *ptr = pop2(&head);
		  ++ptr;
		  *ptr = ',';
		  ptr++;
		}
	  }
	  char c = pop2(&head);
	  if (is_func(peek(head))) {
		*ptr = pop2(&head);
		++ptr;
		*ptr = ',';
		++ptr;
	  }
	  if (getSize(head) == 0 && c != '(') {
		printf("Error in ( )");
	  }
	// } else if (status == 1) {
	//   *ptr = ',';
	//   ++ptr;
	//   status = 0;
	// }
	// while (peek(head) != 0) {
	//   if (peek(head) == '(' || peek(head) == ')') printf("Error in last
	//   peek"); *ptr = pop2(&head); ptr++;
	// }
	// printf("%s\n", out);
	}
	
  }
  while (peek(head) != '\2') {
	if (peek(head) == '(' || peek(head) == ')') printf("Error in last peek");
	*ptr = pop2(&head);
	ptr++;
	*ptr = ',';
	++ptr;
	// printf("%s\n", out);
  }
  return 0;
}
