/*
�Ӽ�������2���������������ߵ�ֵ��Ȼ�������
*/

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    // ʹ����ʱ����������������ֵ
    int temp = a;
    a = b;
    b = temp;

    printf("%d,%d\n", a, b);

    return 0;
}
