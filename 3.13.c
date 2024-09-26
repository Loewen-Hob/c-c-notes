#include <stdio.h>

int main() {
    int numbers[10], i;

    // 输入10个数
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // 输出偶数
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d,", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}

