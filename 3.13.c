#include <stdio.h>

int main() {
    int numbers[10], i;

    // ����10����
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // ���ż��
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d,", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}

