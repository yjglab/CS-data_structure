#include <stdio.h>
#define SIZE 100

int items = 6;
void get_integers(int list[]) {
	printf("%d개의 정수를 입력하시오\n", 6);
	for (int i = 0; i < 6; ++i) {
		scanf_s("%d", &list[i]);
	}
}

void insert(int list[], int value, int loc) {
	for (int i = items; i >= loc; i--) {
		list[i + 1] = list[i];
	}//
	list[loc] = value;
}
int* delete(int list[], int loc) {
	for (int i = loc; i < items; i++) {
		list[i] = list[i + 1];
	}
	items -= 1;
	return list;
}
int main(void) {
	int list[SIZE];
	get_integers(list);
	insert(list, 99, 4);
	printf("insert() 실행\n");
	printf("%d\n", list[4]);
	delete(list, 4);
	printf("delete() 실행\n");
	printf("%d\n", list[4]);
	return 0;
}
/*
int delete(int list[], int loc) {
	int tmp = list[loc];
	for (int i = loc; i < items; i++)
		list[i] = list[i + 1];
	items -= 1;
	return tmp;
}
*/
