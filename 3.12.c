#include <stdio.h>

int main() {
    int m, n, i;

    // 输入区间 m 和 n
    scanf("%d %d", &m, &n);

    // 输出不能被3整除的数
    for (i = m; i < n; i++) {
        if (i % 3 != 0) {
            printf("%d,", i);
        }
    }
    printf("\n");

    return 0;
}

