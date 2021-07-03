//测试不同整数类型占用的空间（字节）
#include<stdio.h>

int main(){
    printf("%d\n", (int)sizeof(int));
    printf("%d\n", (int)sizeof(short));
    printf("%d\n", (int)sizeof(long long));

    return 0;
}