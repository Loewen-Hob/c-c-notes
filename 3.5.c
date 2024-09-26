#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int a = 1; // 首项
    int d = 3; // 公差

    // 输入项数n
    
    scanf("%d", &n);

    // 计算前n项和
    sum = (n * (2 * a + (n - 1) * d)) / 2;

    // 输出结果
    printf("%d\n", sum);

    return 0;
}

