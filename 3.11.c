#include <stdio.h>

int main() {
    int m, n, i;
    int sum = 0;

    // �������� m �� n
    scanf("%d %d", &m, &n);

    // ���㲻�ܱ�3���������ĺ�
    for (i = m; i < n; i++) {
        if (i % 3 != 0) {
            sum += i; // �ۼӲ��ܱ�3��������
        }
    }

    // ������
    printf("%d\n", sum);
    
    return 0;
}

