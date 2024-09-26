#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1; // 用来存储阶乘结果
    
    // 输入自然数n
    scanf("%d", &n);
    
    // 计算n的阶乘
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    // 输出结果
    printf("%d\n", factorial);

    return 0;
}

