#include <stdio.h>

int main() {
    int m, n, i;
    int sum = 0;

    // �����������ʼֵ�ͽ���ֵ
    scanf("%d %d", &m, &n);

    // ��������[m, n)����Ȼ���ĺ�
    for(i = m; i < n; i++) {
        sum += i;
    }

    // ������
    printf("%d\n", sum);

    return 0;
}

