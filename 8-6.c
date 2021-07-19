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

// 注意点：
// 1.连接前两个字符串后面都有 '\0'，连接时将字符串 1 后面的 '\0' 取消，只在新串后面保留 '\0'。
// 2.字符串 1 必须足够大，以便于容纳字符串 2。如果在定义是定义为 char str1[]="People's Republic of"; 就会出现问题，因为长度不够。