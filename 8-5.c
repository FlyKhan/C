//字符串处理函数 puts 和 gets
#include<stdio.h>
#include<string.h>//在使用字符串处理函数时，在程序文件的开头用 #include<string.h>
int main(){
    char str[]="China\nChengdu";

    puts(str);//将一个字符串输出到终端
    printf("Enter a new string:");
    gets(str);//从终端输入一个字符串到字符数组，并得到一个函数值

    puts(str);
    return 0;
}