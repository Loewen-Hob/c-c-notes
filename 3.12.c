#include <stdio.h>

int main() {
    int m, n, i;

    // �������� m �� n
    scanf("%d %d", &m, &n);

    // ������ܱ�3��������
    for (i = m; i < n; i++) {
        if (i % 3 != 0) {
            printf("%d,", i);
        }
    }
    printf("\n");

    return 0;
}

