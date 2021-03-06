//摄氏转华氏温度
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //存储输入的摄氏温度
    int input = 0;
    //判断是否输入1个参数
    if (argc != 2)
        return 1;
    // 注意 argv[0] 是执行的程序，argv[1] 是第1个参数
    //C 库函数 int atoi(const char *str) 把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。
    input = atoi(argv[1]);
    // TODO：将输入的 input（摄氏温度）值转为华氏温度并打印输出
    float output = 0;
    output = 32 + input * 1.8;
    printf("%0.1f\n", output);
    return 0;
}