#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // 输入 n
    scanf("%d", &n);

    // 计算前 n 项和
    for (i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i); // 计算第 i 项并累加
    }

    // 输出结果，保留两位小数
    printf("%.2f\n", sum);
    
    return 0;
}

