//输入 10 个数，要求输出其中值最大的元素和该数是第几个数
#include <stdio.h>
int main()
{
    int max(int x, int y); //函数声明
    int a[10], m, n, i;

    printf("please enter 10 integer number:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");

    for (i = 1, m = a[0], n = 0; i < 10; i++)
    {
        if(max(m,a[i])>m){
            m = max(m, a[i]);
            n = i;//记录最大数对应的元素序号
        }
    }
    printf("the largest number is %d\n,it is the %dth number \n", m, n + 1);
    return 0;
}

int max(int x, int y)
{
    return (x > y ? x : y);
}