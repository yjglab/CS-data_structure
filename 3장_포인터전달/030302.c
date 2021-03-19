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
		fprintf(stderr, "동적메모리 할당 실패\n");
		exit(1);
	}
	s1->a = 100;
	strcpy_s(s1->c, 14, "just testing\0");
	printf("s1의 a값 : %d\ns1의 c값 : %s", s1->a, s1->c);

	free(s1);
	return 0;
}
