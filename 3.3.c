#include <stdio.h>

int main() {
    int m, n, i;
    int sum = 0;

    // 输入区间的起始值和结束值
    scanf("%d %d", &m, &n);

    // 计算区间[m, n)内自然数的和
    for(i = m; i < n; i++) {
        sum += i;
    }

    // 输出结果
    printf("%d\n", sum);

    return 0;
}

