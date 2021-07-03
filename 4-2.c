//浮点型应用：计算圆的周长或者面积
#include<stdio.h>

int main(){
    float radius, diameter;//半径，直径
    float circumference, area;//周长，面积
    float pi = 3.1415926;

    printf("Input the diameter of the table: ");
    scanf("%f", &diameter);

    radius = diameter / 2.0;
    circumference = 2.0 * pi * radius;
    area = pi * radius * radius;
    printf("\nThe circumference is %f", circumference);
    printf("\nThe area is %f", area);

    return 0;
}
