#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int a = 1; // ����
    int d = 3; // ����

    // ��������n
    
    scanf("%d", &n);

    // ����ǰn���
    sum = (n * (2 * a + (n - 1) * d)) / 2;

    // ������
    printf("%d\n", sum);

    return 0;
}

