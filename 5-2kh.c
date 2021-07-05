//设一个圆柱底面圆的半径 r=2.5，圆柱的高 h=3，求底面圆周长、圆面积以及圆柱的体积。用 scanf 输入数据，输出计算结果，要求保留小数点后两位。
#include<stdio.h>

int main(){
    double r, h;//半径，高
    double dmyzc, dmymj, yztj;//底面圆周长，底面圆面积，圆柱体积
    double PI = 3.1415926;
    printf("请输入圆柱体的半径和高:\n");
    scanf("%lf%lf", &r, &h);//两次输入之间间隔一个空格或回车
    dmyzc = 2 * PI * r;
    dmymj = PI * r * r;
    yztj = dmymj * h;
    printf("底面圆周长是：%.2f\n底面圆面积是：%.2f\n圆柱体积是：%.2f\n", dmyzc, dmymj, yztj);
    return 0;
}