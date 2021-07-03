//字符类型ASCII
#include<stdio.h>

int main(){
    char a, b;//定义a和b为字符型变量
    a = 'c';//把字符常量'c'赋值给变量a
    b = 121;
    printf("%c,%c\n",a,b);//%c表示以字符的形式输出
    printf("%d,%d\n",a,b);//%d表示以有符号十进制的形式输出整数型
    return 0;
}