#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main4(void)
{
	double* p;
	p = (double*)malloc(sizeof(double));
	if (p == NULL) {
		fprintf(stderr, "�����޸� �Ҵ� ����\n");
		exit(1);
	}
	*p = 23.92;

	free(p);
	return 0;
}
