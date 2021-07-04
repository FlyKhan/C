//自增运算
#include <stdio.h>
int main()
{
    int a = 5;
    printf("%d\n",a++);//此时a打印完之后再加1，a打印为5，而后变为6
    printf("%d\n",++a);//a在上一步变为6的基础上先加1，然后打印为7
    return 0;
}