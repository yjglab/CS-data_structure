#include <stdio.h>
#include <string.h>
// ȸ���˻� ���� �� ���
int main4() {
    char word[50] = { 0 };
    int word_length = 0;

    while (1) {
        int truthy = 1;
        printf("�Է� �ܾ� : ");
        scanf_s("%s", word, 50);
        word_length = strlen(word);

        for (int i = 0; i < word_length / 2; i++) {
            if (word[i] != word[word_length - 1 - i]) {
                truthy = 0;
                break;
            }
        }
        printf("%d\n", truthy);
    }
    return 0;
}

