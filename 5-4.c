//大小写字母转换
#include<stdio.h>
int main(){
    char c1, c2;
    printf("请输入一个大写字母：");
    scanf("%c", &c1);
    c2 = c1 + 32;//小写表示的字符比大写表示的字符ASCII码大32
    printf("转换后的小写字母是：%c", c2);
    return 0;
}