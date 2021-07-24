//模块化函数设计————求出两个数的最大值
#include <stdio.h>

int main()
{
    int max(int x, int y); //声明max函数
    int a = 10, b = 20;
    int c;
    c = max(a, b); //a,b为实际参数（实参）；调用max函数，传递的是a,b的值给max函数
    // printf("进行到这里了：");
    printf("%d", c);

    return 0;
}

int max(int x, int y)
{
    int z;
    z = x > y ? x : y;
    return z;
}