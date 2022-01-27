//通过指针对数组元素进行操作
//题目：有一个整型数组a，有10个元素，要求输出数组中的全部元素
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int *p;
    p = a;
    int x;
    for (int i = 0; i < 10;i++){
        x = *(p + i);
        
        printf("第%d个元素是:%d\n", i+1, x);
    }
    //下面是另一种方法（用指针变量p++能大大提高执行效率）
    // for (p = a; p < (a + 10);p++){
    //     printf("%d\n", *p);
    // }
    return 0;
}