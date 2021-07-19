//字符串处理函数——strcat——字符串连接函数
#include <stdio.h>
#include <string.h> //在使用字符串处理函数时，在程序文件的开头使用
int main()
{
    char str1[30] = "People's Republic of'";
    char str2[] = "China";

    printf("%s", strcat(str1, str2));

    return 0;
}