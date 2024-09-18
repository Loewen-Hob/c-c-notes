/*
从键盘输入2个整数，交换二者的值，然后输出。
*/

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    // 使用临时变量交换两个数的值
    int temp = a;
    a = b;
    b = temp;

    printf("%d,%d\n", a, b);

    return 0;
}
