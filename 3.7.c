#include <stdio.h>

int main() {
    int a[10];
    int sum = 0;
    int i;

    // ����10����
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // �жϲ��ۼ�ż��
    for(i = 0; i < 10; i++) {
        if(a[i] % 2 == 0) {  // �ж��Ƿ�Ϊż��
            sum += a[i];      // �ۼ�ż��
        }
    }

    // ���ż���ĺ�
    printf("%d\n", sum);

    return 0;
}

