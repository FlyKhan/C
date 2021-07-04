//不同数据类型的混合运算规则
#include<stdio.h>
int main(){
    int i = 3;
    float f = 4.3;
    double d = 7.5;
    double sum;
    sum = 10 + 'a' + i * f - d / 3;
    printf("%lf\n", sum);
    return 0;
}

/*
10 + 'a' 的运算，'a' 的值是整数 97，运算结果为 107。 i*f 的运算。
先将 i 与 f 都转换为 double 型，两者运算 12.9，double 型。 整数
107 与 i * f 的值相加，结果为 119.9，double 型。 d/3 的运算，现
将 3 转换 double 类型，d/3 的结果为 2.5，double 型。 将 119.9 
与 2.5 相减，117.4，double 型。
*/