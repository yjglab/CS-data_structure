#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int a;
	char c[20];
} sct;

int main55(void) {
	sct* s1;
	s1 = (sct*)malloc(sizeof(sct));
	if (s1 == NULL) {
		fprintf(stderr, "�����޸� �Ҵ� ����\n");
		exit(1);
	}
	s1->a = 100;
	strcpy_s(s1->c, 14, "just testing\0");
	printf("s1�� a�� : %d\ns1�� c�� : %s", s1->a, s1->c);

	free(s1);
	return 0;
}
