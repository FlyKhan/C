//字符数组——输出一个正方形
#include <stdio.h>
int main()
{
    char c[][9]={//二维数组初始化的语句中可以不指定行数进行初始化，这里省略了c[5][9]为c[][9]
        {'*',' ','*',' ','*',' ','*',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ','*',' ','*',' ','*',' ','*'},
    };
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<9;j++){
            printf("%c",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}