#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1; // �����洢�׳˽��
    
    // ������Ȼ��n
    scanf("%d", &n);
    
    // ����n�Ľ׳�
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    // ������
    printf("%d\n", factorial);

    return 0;
}

