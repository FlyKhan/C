#include<stdio.h>
int main(){
    int *p1,*p2,*p,a,b;

    printf("please enter two integer number:");
    scanf("%d,%d",&a,&b);
    p1 = &a;
    p2 = &b;
// 注意：这里是交换指针的值
// 即指针的指向发生了改变
// 但是两个变量 a 和 b 的值是没有改变的
    if(a<b){
        p = p1;
        p1 = p2;
        p2 = p;          //使 p1 和 p2 的值互换
    }

// 如果 a < b，通过结果可以观测到 p1 指向 b，p2 指向 a
    printf("a=%d,b=%d\n",a,b);
    printf("max=%d,min=%d\n",*p1,*p2);

    return 0;
}