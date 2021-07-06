//数据输入输出(求一元二次方程的根)
#include <math.h> //程序中要调用求平方根函数sqrt
#include <stdio.h>

int main()
{
    double a, b, c, disc, x1, x2, p, q;
    printf("请输入二元一次方程的a,b,c参数：");
    scanf("%lf%lf%lf", &a, &b, &c); //输入a,b,c参数，%lf表示输入时会先处理成双精度实数
    disc = b * b - 4 * a * c;
    if (disc > 0)
    {
        p = -b / (2.0 * a);
        q = sqrt(disc) / (2.0 * a);
        x1 = p + q, x2 = p - q;
        printf("x1=%7.2f\nx2=%7.2f\n", x1, x2); //%7.2f，表示指定数据占7列，其中小数占2列
    }else{
        printf("This equation hasn't real root!\n");
    }
    return 0;
}