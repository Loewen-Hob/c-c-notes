#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // ���� n
    scanf("%d", &n);

    // ����ǰ n ���
    for (i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i); // ����� i ��ۼ�
    }

    // ��������������λС��
    printf("%.2f\n", sum);
    
    return 0;
}

