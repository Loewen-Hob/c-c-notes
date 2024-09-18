/*
从键盘输入圆柱底面的半径和高，输出圆柱的表面积，保留三位小数。圆周率以3.1415926计算。
提示：圆柱表面积=底面积*2+侧面积（侧面积是底面周长*高）
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415926

void calculate_cylinder_area(double radius, double height) {
    double base_area = PI * pow(radius, 2);
    double side_area = 2 * PI * radius * height;
    double total_area = 2 * base_area + side_area;

    printf("���=%.3f\n", total_area);
}

int main() {
    double r, h;

	scanf("%lf,%lf", &r, &h); 
    calculate_cylinder_area(r, h);

    return 0;
}
