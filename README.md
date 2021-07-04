# C语言学习笔记
### 一.基本输入输出函数
#### 格式输出函数 printf()
一般形式：printf(格式控制，输出表列)。例如：printf("%d,%d",a,b); 括号内包含两个部分：

（1）格式控制是用双引号括起来的一个字符串，称“转换控制字符串”，简称“格式字符串”，它包括两个信息：

* 格式声明：格式声明由 % 和格式字符组成，如 %d （%d 代表输出整数，%f 代表输出实数），它的作用是将输出的数据转换为指定的格式然后输出。格式声明总是由 % 字符开始。
* 普通字符：普通字符即在需要输出时原样输出的字符。例如上例中的 printf("Please enter a value：");中的 Please enter a value: 即为原样输出。

（2）输出表列是程序需要输出的数据。看下面例子：

`
printf("I love %d and %d",x,s);
`

第一个 %d 对应的是 x 的值，第二个 %d 对应的是 s 的值。I love 和 and（注意这里包括空格）都是普通字符会原样输出。

假如 x 的值是 3，s 的值是 4，这条语句将会输出 I love 3 and 4。

#### 格式输入函数 scanf()
一般形式：scanf(格式控制，地址表列)。格式控制的含义同 printf() 函数。“地址表列”是由若干地址组成的表列，可以是变量的地址。

看下面的例子：

`
scanf("a=%d,b=%d",&a,&b);
`

在格式字符串中除了有格式声明的 %d 以外，其它普通字符在赋值时需要原样输入（如“ a= ”，“ b= ”和“,”），假如给 a 和 b 分别赋值 5 和 6，将输入 a=5,b=6。 建议大家不要在格式控制中加过多的普通字符，否则会发生不可预料的 BUG。

注意：scanf() 函数中的表列是地址表列。 scanf("a=%d,b=%d",&a,&b); 中 a 和 b 前面的 & 不能省掉，这一点要和 printf 作区分。

#### 转义字符
* 常用控制字符

| 转义字符 | 含义                    | 转义字符 | 含义                     |
| -------- | ----------------------- | -------- | ------------------------ |
| \n       | 换行                    | \t       | 水平制表（右移 8 格）    |
| \v       | 垂直制表                | \b       | 退格                     |
| \r       | 回车（不换行）          | \f       | 换页                     |
| \a       | 响铃                    | \\       | 反斜线                   |
| \'       | 单引号                  | \''      | 双引号                   |
| \add     | 3 位 8 进制数代表的字符 | \xhh     | 2 位 16 进制数代表的字符 |

---
### 二. 数据类型
#### 1. 整数类型

为了方便大家理解数据在计算机中的存储方式，我们首先给大家讲述一下计算机内存。计算机在执行程序的时候，组成程序的指令和程序所操作的数据都必须存储在某个地方，这个地方就是计算机的内存，也称为 RAM。

可以将计算机的 RAM 想象成一排井然有序的盒子。每个盒子都有两个状态：满为 1，空为 0 ，因此每个盒子代表一个二进制数：0 或 1 。计算机有时用真和假表示它们：1 为真，0 为假。每个盒子称为一个位（bit）。每 8 个位组成一个字节，在计算机中，一个英文字母（不分大小写）占一个字节的空间，一个中文汉字占两个字节的空间。

计算机中常用的单位是千字节（KB）、兆字节（MB）、千兆字节（GB）。 这些单位的意义如下： 1KB 是 1024 字节。其中 1024=2^10（2 的 10 次方），1MB=1024KB，1GB=1024MB 。如果大家对二进制、字节这些概念不是很熟悉，可以点击查看[字节](http://www.baidu.com/s?wd=字节&ie=utf-8&f=8&rsv_bp=1&tn=92452588_hao_pg&rsv_pq=ba04834400003dcb&rsv_t=b84fNAt7xN3JAP9MLMpbNJ5%2FLzP5ak08CohxLg1fSYX606AfE%2FDahoZxUKjZd%2FMAO1N0pCeT&bs=位)、[二进制](http://baike.baidu.com/view/18536.htm?fr=aladdin)学习了解相关概念。

##### 基本类型（int 类型）

编译系统分配给 int 类型数据 2 个字节或者 4 个字节（由具体的编译系统自行决定）。我们使用的 gcc 编译器为每个整数类型分配四个字节（32 个二进位）。在存储单元中的存储方式是：用整数的补码形式存放。所以当 4 个字节的整数类型取值范围是 -2^31 到（2^31-1）。无符号的基本整型表示为 `unsigned int`，和 int 类型占有的字节数相同，取值范围是 0 到（2^32-1）。

##### 短类型（short 类型）

短整型的类型名为 short，gcc 编译系统分配给 short 类型 2 个字节，存储方式和 int 类型一样，也是补码的形式存储，取值范围是 -2^15 到（2^15-1），无符号短整型 `unsigned short` 的取值范围是 0 到（2^16-1）。

##### 长整型（long 类型）

gcc 编译系统分配给 long 类型 8 个字节，存储方式和 int 类型一样，也是补码的形式存储，取值范围是 -2^63 到（2^63-1），无符号长整型 `unsigned long` 的取值范围是 0 到（2^64-1）。

#### 2.浮点型数据

浮点型数据是用来表示具有小数点的实数的。想知道为什么在 C 中把实数称为浮点数吗？

在 C 语言中，实数是以指数的形式存放在存储单元的。一个实数表示为指数可以不止一种形式，如 4.3242 可以表示为 `4.3242*10^0`，`0.43242*10^1`，`0.043242*10^2`， `432.42*10^-2` 等，他们代表同一个值。可以看到小数点的位置是可以在 43242 几个数字之间浮动的，只要在小数点位置浮动的同时改变指数的值，就可以保证它的值不会改变。由于小数点的位置可以浮动，所以实数的指数形式称为浮点数。

> 规范化的指数形式：在指数形式的多种表示方式中把小数部分中小数点前的数字为 0，小数点后第 1 位数字不为 0 的表示形式称为规范化的指数形式，如 `0.43242*10^1` 就是 4.3242 的规范化的指数形式。一个实数只有一个规范化的指数形式。

浮点数类型包括 float（单精度浮点型）、double（双精度浮点型）、long double（长双精度浮点型）。

---
### 三.运算符和数据转换
#### 1.不同数据之间的混合运算
> 在程序中经常会遇到不同类型的数据进行运算，比如 7*3.5。如果一个运算符的两侧数据类型不同，则先进行类型的转换，使两者具有同一种类型，然后进行运算。因此整型、浮点型、字符型数据之间可以进行混合运算。 数据类型计算的时候究竟是如何转换类型的呢？大家先看下表：

|     类型     | 优先级 |
| :----------: | :----: |
| long double  |   高   |
|    double    |   /\   |
|    float     |   \|   |
|     long     |   \|   |
| unsigned int |   \|   |
|     int      |   \|   |
|    short     |   \|   |
|     char     |   低   |

> 1. 如果 int 类型的数据和 float 或 double 型数据进行运算时，先把 int 型和 float 型数据转换为 double 型数据，然后进行运算，结果为 double 型。其他的大家可以按照上图来做。
>
> 2. 字符 (char) 型数据和整型数据进行运算，就是把字符的 ASCII 代码与整型运算。如 4+'B'，由于字符 'B' 的 ASCII 代码是 66，相当于 66+4=70。字符型数据可以直接和整型数据进行运算。如果字符型数据和浮点型数据运算，则将字符的 ASCII 码先转化为 double 型，然后再进行运算。
>
>  * 参考程序5-3.c

