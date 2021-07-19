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

// //strlen函数——测字符串长度
// char str[] = "China";
// printf("%d", strlen(str));

// 注意：strlen()返回值不包含'\0',所以返回值比实际占用的长度要小



// //strcpy——字符串复制函数
// char str1[10],str2[]="China";
// strcpy(str1,str2);//复制str2到str1中

// 注意点：
// 1.字符数组 1 必须定义的足够大，以便容纳被复制的字符串 2。
// 2.“字符数组 1” 必须写成数组名形式（如 str1），“字符串 2”可以使字符数组名，也可以是一个字符串常量。例如：strcpy(str1,"China"); 作用与前面的相同。
// 3.不能用赋值语句将一个字符串常量直接给一个字符数组。


// //strcmp——字符串比较函数
// strcmp(str1,str2);
// strcmp("Chengdu","Beijing");