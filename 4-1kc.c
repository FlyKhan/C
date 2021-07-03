//计算距离问题
#include<stdio.h>

int main(){
    int speed;
    float lostTime,distance;//花费时间，距离
    speed = 40;//40km/h
    lostTime = 1.5;//1h30min
    distance = speed * lostTime;
    printf("小明家与公司的距离是：%fkm", distance);
    return 0;
}