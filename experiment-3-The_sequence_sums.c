//实验3：序列求和
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 1; //如果参数少于两个，则直接退出程序

    int sum;
    for (int i = 0; i < argc; i++)
    {
        sum += atoi(argv[i]); //atoi把字符串转换为正整数
    }
    printf("%d\n", sum);
    return 0;
}

