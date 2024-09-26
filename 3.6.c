#include <stdio.h>

int main() {
    int m, n, i;
    int sum = 0;

    // 输入区间的起始值m和结束值n
    scanf("%d %d", &m, &n);

    // 计算区间[m, n)内偶数的和
    for(i = m; i < n; i++) {
        if(i % 2 == 0) {  // 判断是否为偶数
            sum += i;      // 累加偶数
        }
    }

    // 输出结果
    printf("%d\n", sum);

    return 0;
}

