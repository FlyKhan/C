//模块化程序设计
#include<stdio.h>
#include<stdio.h>
int main(){
    void printstar();//声明printstar函数
    void print_message();//声明print_message函数

    printstar();//调用printstar函数
    print_message();
    printstar();

    return 0;
}

void printstar(){//定义printstar函数
    printf("*****************\n");
}

void print_message(){
    printf("how do you do!\n");
}