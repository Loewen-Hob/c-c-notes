#include <stdio.h>

int main() {
    int m, n, i;
    int sum = 0;

    // �����������ʼֵm�ͽ���ֵn
    scanf("%d %d", &m, &n);

    // ��������[m, n)��ż���ĺ�
    for(i = m; i < n; i++) {
        if(i % 2 == 0) {  // �ж��Ƿ�Ϊż��
            sum += i;      // �ۼ�ż��
        }
    }

    // ������
    printf("%d\n", sum);

    return 0;
}

