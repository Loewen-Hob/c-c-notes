/*
�༶���Σ���40��Ҫ���ӣ���m��С����ÿ��С���޳�4�ˣ���n���󴬣�ÿ�����޳�6�ˣ���m��n�Ӽ������룬������������ǲ�����?
*/ 

#include <stdio.h>

int main() {
    int m, n, total_capacity;

    scanf("%d %d", &m, &n);


    // ����������
    total_capacity = 4 * m + 6 * n;

    // �ж��������Ƿ���ڵ���40��
    if(total_capacity >= 40) {
        printf("����\n");
    } else {
        printf("������\n");
    }

    return 0;
}
