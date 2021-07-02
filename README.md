# C

> C语言学习，实验楼课程对应代码及笔记

# 2. 数据类型
---
## 基本输入输出函数
### 格式输出函数 printf()
一般形式：printf(格式控制，输出表列)。例如：printf("%d,%d",a,b); 括号内包含两个部分：

（1）格式控制是用双引号括起来的一个字符串，称“转换控制字符串”，简称“格式字符串”，它包括两个信息：

* 格式声明：格式声明由 % 和格式字符组成，如 %d （%d 代表输出整数，%f 代表输出实数），它的作用是将输出的数据转换为指定的格式然后输出。格式声明总是由 % 字符开始。
* 普通字符：普通字符即在需要输出时原样输出的字符。例如上例中的 printf("Please enter a value：");中的 Please enter a value: 即为原样输出。