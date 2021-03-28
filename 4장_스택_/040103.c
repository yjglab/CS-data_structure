#include <stdio.h>
#define MAX_SIZE 50
typedef struct {
	char word[MAX_SIZE];
	int top;
} StackType;

void init_stack(StackType* s) {
	s->top = -1;
}
int is_full(StackType* s) {
	return (s->top + 1) == MAX_SIZE;
}
int is_empty(StackType* s) {
	return s->top == -1;
}
void push(StackType* s, char word) {
	if (is_full(s)) {
		printf("���� ��ȭ ����");
	}
	else {
		s->top++;
		s->word[s->top] = word;
	}
}
char pop(StackType* s) {
	int temp;
	if (is_empty(s)) {
		printf("���� ���� ����");
		return 0;
	}
	temp = s->word[s->top];
	s->top--;
	return temp;
}
int palindrome(char str[]) {
	StackType s;
	init_stack(&s);
	for (int i = 0; str[i] != 0; i++) {
		push(&s, str[i]);
	}
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] != pop(&s)) return 0;
	}
	return 1;
}
int main() {
	char input[MAX_SIZE];
	printf("�Է� �ܾ� : ");
	gets(input);
	if (palindrome(input)) {
		printf("ȸ���Դϴ�");
	}
	else {
		printf("ȸ���� �ƴմϴ�");
	}
	return 0;
}
