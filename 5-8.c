//getchar函数输入一个字符
#include <stdio.h>

int main(){
    char c;
    printf("Input an uppercase letter:\n");
    c = getchar();
    putchar(c + 32);//ASCII表中，小写字母比大写字母大32
    return 0;
}