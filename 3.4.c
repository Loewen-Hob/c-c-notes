#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    // ������Ȼ��n
    scanf("%d", &n);

    // ����[1, n]��������Ȼ����ƽ����
    for(i = 1; i <= n; i++) {
        sum += i * i; // �ۼ�ÿ������ƽ��
    }

    // ������
    printf("sum=%d\n", sum);

    return 0;
}

