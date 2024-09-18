/*
班级春游，有40人要过河，租m条小船（每条小船限乘4人）和n条大船（每条大船限乘6人），m和n从键盘输入，请输出够坐还是不够坐?
*/ 

#include <stdio.h>

int main() {
    int m, n, total_capacity;

    scanf("%d %d", &m, &n);


    // 计算总容量
    total_capacity = 4 * m + 6 * n;

    // 判断总容量是否大于等于40人
    if(total_capacity >= 40) {
        printf("够坐\n");
    } else {
        printf("不够坐\n");
    }

    return 0;
}
