#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // 如果数字是负数，那么它的绝对值就是它的相反数
    if(num < 0) {
        num = -num;
    }

    printf("%d\n", num);

    return 0;
}
