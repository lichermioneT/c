#include <stdio.h>
#include <string.h>



// 函数定义
int add(int x, int y)
{
    // 进入函数，变量创建，出作用域，变量生命周期结束
    return x + y;
}


void print(void)
{
    printf("hello world\n");
}


int test()
{
    return 666;
}

void test2()
{
    int x = 1;
    if(x)
        printf("hhhh\n");
    return;
}

void set_arr(int arr[], int sz, int set)
{
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        arr[i] = set;
    }
}


void print2(int arr[], int sz)
{
    int i = 0;
    for(i  = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print3(int arr[][5], int r, int c)
{
    int i = 0;
    for(i = 0; i < r; i++)
    {
        int j = 0;
        for(j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}



int is_leap_year(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}



int get_days_of_month(int y, int m)
{
    
    int days[] = {0,31,80,31,30,31,30,31,30,31,31,30,31,31};
    if(m == 2 && is_leap_year(m))
    {
        return 29;
    }
    else
    {
        return days[m];
    }

}

int main()
{

    /* int a = 0; */
    /* int b = 0; */
    
    /* scanf("%d %d", &a, &b); */
    /* int ret = add(a, b); */
    /* printf("%d \n", ret); */

/* 左值（lvalue）：有“位置”，表示可以访问的内存地址，可以取地址 &。 */

/* 右值（rvalue）：有“值”，但没有确定位置，通常是临时的计算结果。 */
    
    /* print(); */

// 函数返回值 函数名（参数列表）
// {
//    函数主体
// }

    
// 真实传递给函数的参数就是实际参数
// 函数声明的时候参数就是形式参数
// 形式参数是实际参数的临时拷贝


// return 语句
// return可以是表达式,可以是一个值
// 直接写一个return ，适合void返回值的函数
// 返回值和return值一一对应
// return 后面代码就不执行了
// 每种情况都要有return值
// 没写默认是int返回值类型
//



// 数组做函数参数

    /* int arr[] = {1,2,3,4,5,6,7,8,9,10}; */
    /* int sz = sizeof(arr) / sizeof(arr[0]); */    
    
    /* set_arr(arr, sz, -1); */
    /* print2(arr, sz); */    


//  1.数组传参的时候，实参就写数组名就行 ，形式参数也是数组
//  2.实参和形式参数可以一样，也可以不一样的
//  3.函数设计功能单一，置零就是置零，打印就是打印
//  4.形式参数是实际参数


// 形式参数和实际参数匹配


    /* int arr[3][5] = {1,2,3,4,5,6,7,8,9,1,11,12,1,3,14}; */
    /* print3(arr,3,5); */

// 二维数组行可以省略
// 二维数组传参数也是数组名
// 接收的时候行可以省略
    

// 某年某月多少天

    /* int year = 0; */
    /* int month = 0; */

    /* scanf("%d %d", &year, &month); */
    /* int day = get_days_of_month(year, month); */

    /* printf("%d\n", day); */

// 链式访问
// 返回值作为其他函数的参数

    /* printf("%zu \n", strlen("asdf")); */
    /* printf("%d",printf("%d", printf("%d", 43))); */

// 函数的声明和定义
// 函数和变量都要先声明后使用
// 函数声明的时候，函数的形参可以省略

// add.c // 实现
// add.h // 声明
// main.c 包含就头文件就行了

// 大型项目拆分成很多文件
// 团队协作
// 代码模块化更加清晰
// 代码的隐藏

// static
// extern:声明外部符号的


// 局部变量的声明周期就是局部范围
// 全局变量的声明周期就是整型项目工程


// extern int a
//
















































    return 0;
}

