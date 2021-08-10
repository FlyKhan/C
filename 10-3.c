#include <stdio.h>
int main()
{
    void swap(int *point_1, int *point_2);
    void swap_2(int x, int y); //对比参照用
    int *p1, *p2, a, b;

    printf("Please enter two integer number:");
    scanf("%d,%d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        // swap_2(a,b);//互换结果不会回传，错误用法
        swap(p1, p2);
    }
    // 如果 a < b，那么 a 和 b 的值进行了交换
    // 如果打印了 *p1 和 *p2 我们会发现，p1 仍指向 a，p2 仍指向 b

    printf("max=%d,min=%d", a, b);
    return 0;
}

void swap(int *point_1, int *point_2)
{
    int temp;
    // 注意：这里是交换指针所指变量的值
    // 即指针的指向没有发生改变
    // 但是变量 a 和 b 的值改变了
    temp = *point_1; //使 *p1 和 *p2 互换
    *point_1 = *point_2;
    *point_2 = temp;
}

void swap_2(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}