#include <stdio.h>

















/* int fib(int n) */
/* { */
/*     if (n == 0) */
/*         return 0; */
/*     else if (n == 1) */
/*         return 1; */
/*     else */
/*         return fib(n - 1) + fib(n - 2); */
/* } */

/* fib(4) */
/* = fib(3) + fib(2) */
/* = (fib(2) + fib(1)) + (fib(1) + fib(0)) */
/* = ((fib(1) + fib(0)) + 1) + (1 + 0) */
/* = ((1 + 0) + 1) + (1 + 0) */
/* = (1 + 1) + 1 = 2 + 1 = 3 */











int  fact(int x)
{   
    /* static int n = 0; */
    /* ++n; */
    /* printf("%d \n", n); */


    if(x == 0)
        return 1;
    else
        return x * fact(x -1);
}

int fact2(int x)
{
    int i = 0;
    int sum = 0;
    for(i = 1; i <= x; i++)
    {  
        sum *= i;   
    }
    printf("%d\n", sum);
}

/* fact(5) =  5 * fact(4); */
/* fact(4) =  4 * fact(3); */
/* fact(3) =  3 * fact(2); */
/* fact(2) =  2 * fact(1); */
/* fact(1) =  1 * fact(0); */
/* fact(0) =  1; */

/* fact(5) = 5 * fact(4); */
/* fact(4) = 4 * fact(3); */
/* fact(3) = 3 * fact(2); */
/* fact(2) = 2 * fact(1); */
/* fact(1) = 1 * fact(0); */
/* fact(0) = 1;                  // 递归终点 */

/* // 逐层返回： */
/* fact(1) = 1 * 1 = 1; */
/* fact(2) = 2 * 1 = 2; */
/* fact(3) = 3 * 2 = 6; */
/* fact(4) = 4 * 6 = 24; */
/* fact(5) = 5 * 24 = 120; */



void printDigits(int n)
{
    if (n < 10)
    {
        printf("%d\n", n);  // 递归出口：一位数，直接打印
    }
    else
    {
        printDigits(n / 10);    // 先打印高位（递）
        printf("%d\n", n % 10); // 再打印当前最低位（归）
    }
}

void printDigitsReverse(int n)
{
    if (n < 10)
    {
        printf("%d\n", n);
    }
    else
    {
        printf("%d\n", n % 10);   // 先打印低位
        printDigitsReverse(n / 10);  // 再递归打印高位
    }
}



int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    int prev2 = 0;
    int prev1 = 1;
    int curr = 0;

    for(int i = 2; i <= n; ++i)
    {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return curr;
}



int main()
{












    fact(10);
    fact2(10);















// 递归
// 函数自己调用自己



/*  简单展示 */
/*     printf("hehe\n"); */
/*     main(); */

// 递归必须要有结束条件
// 每次函数的调用，都要为函数的分配空间
// 分配的空间是栈区分配的，如果无限的递归调用函数，很容易栈溢出


// break不能用在递归，结束递归
// break是在循环和判断里面使用的


// 青蛙跳台阶
// 汉诺塔





























    return 0;
}

