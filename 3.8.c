#include <stdio.h>

int main() {
    int n, sum = 0, i;
    
    // ���� n
    scanf("%d", &n);

    // ����ǰ n ���
    for (i = 1; i <= n; i++) {
        // ������ӣ�ż�����
        if (i % 2 == 1) {
            sum += (3 * i - 2); // ����� i ��
        } else {
            sum -= (3 * i - 2); // ����� i ��
        }
    }

    // ������
    printf("%d\n", sum);
    
    return 0;
}

