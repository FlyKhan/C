//除运算，两个实数相处的结果是双精度实数；
//两个整数相除的结果为整数。如5/3的结果为1，舍去小数部分。
#include<stdio.h>

int main(){
    int a = 22;
    int b = 3;
    printf("%d\n", a / b);
    return 0;//结果为7，舍去小数部分
}