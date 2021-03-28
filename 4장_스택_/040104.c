//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef char element;
//typedef struct {
//	element* data;
//	int capacity;
//	int top;
//} StackType;
//void init_stack(StackType* s) {
//	s->top = -1;
//	s->capacity = 1;
//	s->data = (element*)malloc(sizeof(element) * (s->capacity));
//}
//int is_empty(StackType* s) {
//	return (s->top == -1);
//}
//int is_full(StackType* s) {
//	return (s->top == (s->capacity - 1));
//}
//void push(StackType* s, element item) {
//	if (is_full) {
//		s->capacity *= 2;
//		s->data = (element*)realloc(s->data, s->capacity * sizeof(element));
//	}
//	s->data[++(s->top)] = item;
//}
//element pop(StackType* s) {
//	if (is_empty(s)) {
//		fprintf(stderr, "스택 공백 에러\n");
//		exit(1);
//	}
//	else return s->data[(s->top)--];
//}
//
//int printBktNum(const char* in) {
//	StackType s_number;
//	StackType s_input;
//	char bkt, bkt_pop_number, bkt_pop_input;
//	int i, n = strlen(in);
//	int bktNum = 0;
//	init_stack(&s_number);
//	init_stack(&s_input);
//
//	for (i = 0; i < n; i++) {
//		bkt = in[i];
//
//		switch (bkt) {
//		case '(': case '[': case '{':
//			printf("%d", bktNum += 1);
//			push(&s_number, bktNum);
//			push(&s_input, bkt);
//			break;
//		case ')': case ']': case '}':
//			if (is_empty(&s_number)) {
//				return 0;
//			}
//			else {
//				printf("%d", bkt_pop_number = pop(&s_number));
//				bkt_pop_input = pop(&s_input);
//				if ((bkt_pop_input == '(' && bkt != ')') ||
//					(bkt_pop_input == '[' && bkt != ']') ||
//					(bkt_pop_input == '{' && bkt != '}'))
//					return 0;
//			}
//			break;
//		}
//	}
//	if (!is_empty(&s_input)) return 0;
//	return 1;
//}
//
//int main2(void) {
//	char* A = " (((())";
//	char* B = " (){}[()]";
//	char* C = " [()]))";
//	printf("괄호번호 : \n");
//	if (printBktNum(A) == 1)
//		printf("%s 정상입니다.\n", A);
//	else
//		printf("%s 오류입니다.\n", A);
//	if (printBktNum(B) == 1)
//		printf("%s 정상입니다.\n", B);
//	else
//		printf("%s 오류입니다.\n", B);
//	if (printBktNum(C) == 1)
//		printf("%s 정상입니다.\n", C);
//	else
//		printf("%s 오류입니다.\n", C);
//	return 0;
//}
