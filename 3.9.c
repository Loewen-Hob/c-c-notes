#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // ���� n
    scanf("%d", &n);

    // ����ǰ n ���
    for (i = 1; i <= n; i++) {
        double term = 1.0 / (3 * i - 2); // ����� i ���ĸΪʵ��
        sum += term; // �ۼ�
    }

    // ��������������λС��
    printf("%.5f\n", sum);
    
    return 0;
}

