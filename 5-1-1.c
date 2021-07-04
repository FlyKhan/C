//取余运算%，要求参与运算的对象为整数，否则会报错（error）
#include<stdio.h>

int main(){
    int a = 22;//除数和被除数都必须为整数
    int b = 3;
    printf("%d\n", a % b);
    return 0;//结果为1，为取余运算的余数部分
}