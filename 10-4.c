//指针变量作为函数参数
//输入 3 个整数 a，b，c 要求按从大到小的顺序将他们输出，用函数实现。
#include <stdio.h>
int main()
{
    void exchange(int *x1, int *x2, int *x3);
    int a, b, c, *x1, *x2, *x3;
    printf("please enter 3 integer number:");
    scanf("%d,%d,%d", &a, &b, &c);
    x1 = &a;
    x2 = &b;
    x3 = &c;
    exchange(x1, x2, x3);
    printf("the order is: %d,%d,%d", a, b, c);
    return 0;
}
void exchange(int *x1, int *x2, int *x3)
{
    void swap(int *p1, int *p2);
    if(*x1<*x2) swap(x1,x2);
    if(*x1<*x3) swap(x1,x3);
    if(*x2<*x3) swap(x2,x3);
}
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1; //把指针a的值给temp
    *p1 = *p2;
    *p2 = temp;
}
