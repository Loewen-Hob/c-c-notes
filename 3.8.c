#include <stdio.h>

int main() {
    int n, sum = 0, i;
    
    // 输入 n
    scanf("%d", &n);

    // 计算前 n 项和
    for (i = 1; i <= n; i++) {
        // 奇数项加，偶数项减
        if (i % 2 == 1) {
            sum += (3 * i - 2); // 计算第 i 项
        } else {
            sum -= (3 * i - 2); // 计算第 i 项
        }
    }

    // 输出结果
    printf("%d\n", sum);
    
    return 0;
}

