//一维冒泡排序（小到大）
#include <stdio.h>

int main()
{
    int i, j, t, LearnTime[10];
    printf("please enter 10 number:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &LearnTime);
    }

    for (j = 0; j < 9; j++) //9次外循环，9次比较
    {
        for (i = 0; i < 9 - j; i++) //9-j次内循环
        {
            if (LearnTime[i] > LearnTime[i + 1])
            {
                t = LearnTime[i];
                LearnTime[i] = LearnTime[i + 1];
                LearnTime[i + 1] = t;
            }
        }
    }
    printf("the sorted number:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", LearnTime[i]);
    }

    return 0;
}