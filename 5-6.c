//%d的不同用法
#include <stdio.h>
int main()
{
    int a = 12, b = -3456;
    long int c = 123456;
    printf("%5d\n", a);//以5为指定的最小字段宽度输出，右对齐
    printf("%d\n", b);//按照整型数据的实际长度输出
    printf("%ld\n", c);//输出长整型数据。
    printf("%6ld\n", c);//输出指定宽度的长整型数据。
    return 0;
}