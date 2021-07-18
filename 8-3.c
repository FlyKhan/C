//二维数组
#include <stdio.h>
int main()
{
    int i, j;       //行，列
    int max;        //最大值
    int row, colum; //最大值所在行，列
    int a[3][4] = {
        {3, 4, 16, 2},
        {7, 5, 1, 9},
        {11, 23, 3, 8}};
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (max < a[i][j])
            { //当新的最大值产生时，判断语句内的内容发生变化；最大值不变时，跳过判断，进入下一次循环，直到循环结束
                max = a[i][j];
                row = i;
                colum = j;
            }
        }
    }
    printf("最大值是:%d\n最大值所在行号是：%d\n最大值所在列号是：%d\n", max, row, colum);

    return 0;
}