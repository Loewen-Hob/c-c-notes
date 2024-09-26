#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    // 输入自然数n
    scanf("%d", &n);

    // 计算[1, n]区间内自然数的平方和
    for(i = 1; i <= n; i++) {
        sum += i * i; // 累加每个数的平方
    }

    // 输出结果
    printf("sum=%d\n", sum);

    return 0;
}

