#include <stdio.h>

int main() {
    int m, n, i;
    int sum = 0;

    // 输入区间 m 和 n
    scanf("%d %d", &m, &n);

    // 计算不能被3整除的数的和
    for (i = m; i < n; i++) {
        if (i % 3 != 0) {
            sum += i; // 累加不能被3整除的数
        }
    }

    // 输出结果
    printf("%d\n", sum);
    
    return 0;
}

