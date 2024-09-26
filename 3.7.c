#include <stdio.h>

int main() {
    int a[10];
    int sum = 0;
    int i;

    // 输入10个数
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // 判断并累加偶数
    for(i = 0; i < 10; i++) {
        if(a[i] % 2 == 0) {  // 判断是否为偶数
            sum += a[i];      // 累加偶数
        }
    }

    // 输出偶数的和
    printf("%d\n", sum);

    return 0;
}

