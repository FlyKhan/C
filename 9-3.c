//模块化程序设计————函数的嵌套调用
#include<stdio.h>
int main(){
    int max4(int a,int b,int c,int d);//声明max4函数
    int a,b,c,d,max;

    printf("Please enter 4 integer number:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=max4(a,b,c,d);
    printf("max=%d\n",max);

    return 0;
}

int max4(int a,int b,int c,int d){
    int max2(int a,int b);//声明max2函数
    int m;

    m = max2(a,b);
    m =max2(m,c);
    m=max2(m,d);
    
    return m;
}

int max2(int a,int b){
    int z;
    z=a>b?a:b;
    return z;
}