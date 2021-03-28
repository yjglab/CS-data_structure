#include <stdio.h>
#include <string.h>
// 회문검사 스택 미 사용
int main4() {
    char word[50] = { 0 };
    int word_length = 0;

    while (1) {
        int truthy = 1;
        printf("입력 단어 : ");
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

