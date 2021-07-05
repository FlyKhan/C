// 请编写程序将 ShiYanLou 译成密码，用原来的字母后面第一个字母替代原来的母。例如 A 后面的第二个字母是 B，因此 ShiYanLou 应该译成 TijZboMpv。请大家编写一个程序实现这个过程，并且分别用 putchar 函数和 printf 函数打印这些字符
#include<stdio.h>

int main(){
    char syl[]="Shiyanlou";
    char lys[9];
    printf("Putchar方法打印如下：\n");
    for (int i = 0; i < 9;i++){
        lys[i] = (char)(syl[i] + 1);
        putchar(lys[i]);
    }
    printf("\nprintf方法打印如下：\n");
    printf("%c", (char)lys);
    return 0;
}