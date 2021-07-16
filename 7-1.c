//循环程序设计-重复统计学生平均成绩段
#include <stdio.h>

int main()
{
    float score1, score2, score3, score4;
    float aver;
    int i = 1;
    while (i <= 50)
    {
        printf("输入第%i个学生的四门成绩：\n",i);
        scanf("%f%f%f%f", &score1, &score2, &score3, &score4);
        //输入一个学生4门课程的成绩
        aver = (score1 + score2 + score3 + score4) / 4;
        // printf("aver是：\n", aver);
        printf("第%i个学生的平均成绩是%7.2f\n----------------------------\n", i,aver);
        i++;
    }
    return 0;
}