#include<stdio.h>

int main(){
    int a, b, c;
    printf("Please enter a value:");
    scanf("%d", &a);
    printf("\n");
    printf("Please enter a value:");
    scanf("%d", &b);
    c = a + b;
    printf("%d\n", c);
    return 0;
}