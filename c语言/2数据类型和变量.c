#include <stdio.h>
#include <stdbool.h>

int add(int x, int y)
{
    return x + y;
}

int x = 66;

int main()
{

// 空语句
// 表达式 语句
// 函数语句
// 复合语句
// 控制语句


// 空语句
    ;

// 表达式语句

    /* int a = 10; */
    /* int b = 10; */
    /* int c = a + b; */

// 函数调用语句
    /* printf("asdfadf\n"); */
    
    /* int ret = add(a, b); */

// 复合语句

// 控制语句
// 循环，选择，顺序
// if switch
// for while do while
// cotine break goto return

    /* int x = 100; // 创建一个变量a,a=10 */

    /* printf("Hello\rWorld\n"); */    


// 数据类型

// 创建变量的本质就是开辟空间
    
// 整型四种
    /* short grade = 4; */
    /* int high = 180; */
    /* long tele = 55; */
    /* long long width = 88; */
    
// 浮点型两种
    /* float price = 16.5f; */
    /* double scoer = 145.5; */
    /* long double score = 1.333L; */

// 字符一种
    /* char ch = 'w'; */

// 布尔类型一种
    /* _Bool flag = true; */
    /* bool flag1 = false; */

    /* if(flag) */
    /* { */
        /* printf("dasf\n"); */
    /* } */
    
    /* printf("整型\n"); */
    /* printf("short:%zd\n",sizeof(short)); */
    /* printf("int:%zd\n",sizeof(int)); */
    /* printf("long:%zd\n",sizeof(long)); */
    /* printf("long long:%zd\n",sizeof(long long)); */
    /* printf("------------------------\n"); */

    /* printf("浮点型\n"); */
    /* printf("float:%zd\n",sizeof(float)); */
    /* printf("double:%zd\n",sizeof(double)); */
    /* printf("long double:%zd\n",sizeof(long double)); */
    /* printf("------------------------\n"); */

    /* printf("字符\n"); */
    /* printf("char:%zd\n",sizeof(char)); */
    /* printf("------------------------\n"); */

    /* printf("布尔类型\n"); */
    /* printf("bool:%zd\n",sizeof(bool)); */
    
// sizeof里面的表达式不会计算的，只会推断类型的
    /* short s = 2; */
    /* int b =10; */
    /* printf("%zd\n", sizeof(s = b + 1)); */

// c语言规定
// sizeof(long) >= sizeof(long long)
// sizeof返回的类型是：size_t类型的
// size_t 只有零和大于零的整数
// size_t 使用%zd格式控制1

    
    /* signed short x = 66; // 等价short x = 66; */
    /* unsigned short xx = 88; */

// char是有符合还是无符号，具体看编译器的
// 大部分char == signed char

// 有符号使用%d
// 无符号使用%u
    /* int num1 = 100; */
    /* printf("%d\n",num1); */
    
    /* unsigned int num = 100; */
    /* printf("%d\n",num); */


// 创建变量的时候给个值就是初始化
    /* unsigned int age = 18; */
    /* char ch = 'w'; */
    /* float score = 13.2f; */

// 局部变量和全部变量
// 局部变量优先
// 进入作用域，生命周期开始，出作用域，生命周期结束
    {
        int x = 4;
        printf("%d\n", x);
    }

// 内存空间分布
// 栈区
// 堆区
// 静态区
    
    /* int num1 = 105; */
    /* int num2 = 66; */
    /* printf("num1 + num2 = : %d\n", num1 + num2); */
    /* printf("num1 - num2 = : %d\n", num1 - num2); */
    /* printf("num1 * num2 = : %d\n", num1 * num2); */
    /* printf("num1 / num2 = : %d\n", num1 / num2); */
    /* printf("num1 %% num2 = : %d\n", num1 % num2); */


// 取模只能是整型
// 除法整型除以整型结果还是整型
// 整型的除法

    /* printf("%d\n", 10 % 3); */

// 取模可以判断一个数能否被整除
// 负数取模，符号由第一个数决定符号

    /* printf("%d\n", -10 % 3); */
    /* printf("%d\n", -10 % -3); */
    /* printf("%d\n", 10 % -3); */

// 这是赋值=
// 这是判断相等==

    /* int a = 9; */

// 复合赋值 *=
    /* a += 9; */
    /* a -+ 9; */

// ++和--
    /* a++; */
    /* ++a; */
    /* a--; */
    /* --a; */

// 后置++和--先试用在++ --
// 一条语句执行 不用管++ --    
    /* a = 0; */
    /* printf("%d \n", a++); */
    /* printf("%d \n", a); */
    /* printf("%d \n", a--); */
    /* printf("%d \n", a); */

// 后置—和++ 会产生临时变量的

// 强制类型转换
// (类型)

    /* double d = (double)a; */
    /* printf("%f\n", d); */

    float a = 3.14159f;
    double b = 1234.56789;
    long double c = 1.234567890123456789L;

    printf("float:      %f\n", a);          // 默认6位小数
    printf("double:     %.2f\n", b);        // 保留两位小数
    printf("double:     %e\n", b);          // 科学计数法
    printf("double:     %g\n", b);          // 自动格式
    printf("long double: %.10Lf\n", c);     // 打印 long double








































































































































    return 0;
}

