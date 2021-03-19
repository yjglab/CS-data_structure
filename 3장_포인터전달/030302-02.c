#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main4(void)
{
	double* p;
	p = (double*)malloc(sizeof(double));
	if (p == NULL) {
		fprintf(stderr, "동적메모리 할당 실패\n");
		exit(1);
	}
	*p = 23.92;

	free(p);
	return 0;
}
