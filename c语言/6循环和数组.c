#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
        printf("**************************\n");
        printf("*******1.play*************\n");
        printf("*******0.exit*************\n");
        printf("**************************\n");
}

void game()
{
   int r = rand() % 100 + 1;
   int guess;
   while(1)
   {
       printf("请猜数字\n");
       scanf("%d", &guess);
       if(guess > r)
       {
           printf("猜大了\n");
       }
       else if( guess < r )
       {
           printf("猜小了\n");
       }
       else
       {
           printf("恭喜你猜对了\n");
           break;
       }
   }
    

}


int main()
{   

// 100到200之间的素数
    /* int i = 0; */
    /* int j = 0; */
    /* int count = 0; */
    /* for(int i = 101; i <= 200; i += 2) */
    /* { */   
    /*     int flag = 1; // 假设i是素数 */
    /*     for(j = 2; j < i - 1; j++) */
    /*     { */
    /*         if(i % j == 0) */
    /*         { */
    /*             flag = 0; // 只要能够整除就不是素数 */
    /*             break; // 退出循环 */
    /*         } */
    /*     } */

    /*     if(flag) */
    /*     { */
    /*         printf("%d ", i); */
    /*         count++; */
    /*     } */

    /* } */
    /* printf("%d", count); */

// goto语句，一般是跳出深层循环
// shutdown 
// -s关节
// -t设置关节时间
// shutdown  -a 取消关节


// 头文件 string.h
// strcmp()
// 返回值==0两个字符串相等
//



/*
    如果传入一个指针 t，函数会把当前时间写入这个地址；
    如果传入 NULL，只返回当前时间。
*/

// 把时间存放到指针里面
// time函数


/*     time_t *pt = &t; */

/*     // 把当前时间写入指针 pt 指向的位置（即变量 t） */
/*     time(pt); */

/*     printf("当前时间戳为：%ld\n", *pt);  // 输出的是 time_t 类型的值（时间戳） */


// 随机数猜数字
// int r = rand() % (max - min + 1) + min;

    /* srand(time(NULL));  // 用当前时间作为种子 */
    /* int r = rand() % 100 + 1; // b - a + 1 */
    /* printf("随机数: %d\n", r); */
    
    
    // 随机数的种子
    /* srand((unsigned int)time(NULL)); */

    /* int input = 0; */
    /* do */
    /* { */
    /*     // 打印菜单 */
    /*     menu(); */

    /*     scanf("%d", &input); */
        
    /*     switch(input) */
    /*     { */
    /*     case 1: */
    /*         game(); */
    /*         break; */
    /*     case 0: */
    /*         printf("退出游戏\n"); */ 
    /*         break; */
    /*     default: */
    /*         printf("选择错误，重新选择\n"); */
    /*         break; */
    /*     } */

    /* }while(input); */



// 数组
// 用来存放一组相同数据

    /* int arr[] = {1,2,3,4,5,6,7,8,9,7,10}; */
    /* char ch1[] = {'a', 'b', 'c', '\0'}; */
    /* char ch2[] = "abc"; */
    
    // 不建议这样写
    /* char ch3[] = {"abc"};· */

    /* int math[20]; */
    /* double dd[2]; */   

    /* int arr1[20] = {1,33,4,5}; // 剩下默认初始化零 */
                    
// 数组在不完全初始化时，剩下的元素会被自动填充为“对应类型的零”。

// 完全等价的
    /* char ch = 0; */
    /* char ch = '\0'; */


// 数组的类型
// 去掉名字就是类型
// 元素类型 + 元素个数
    
    // 类型是 int[10]
    /* int arr[10] = {0}; */

// 数组下标从零开始
    
    /* char ch[] = "asfddddddddxxt"; */
    
    /* int sz = sizeof(ch) / sizeof(ch[0]); */
    
    /* for(int i = 0; i < sz - 1; i++) */
    /* { */
    /*     printf("%c ", ch[i]); */
    /* } */

    /* printf("\n"); */
    /* for (int i = 0; ch[i] != '\0'; i++) { */
    /*     printf("%c ", ch[i]); */
    /* } */

    
    /* int arr[10] = {1,5,6,8,66,3,12,3}; */

    /* for(int i = 0; i < 10; i++) */
    /* { */
    /*     scanf("%d", &arr[i]); // 这里不是数组名需要存放地址的 */
    /* } */

    /* for(int i = 0; i < 10; i++) */
    /* { */
    /*     printf("%d", arr[i]); */
    /* } */

    
    int arr[10] = {12,3,6};
    for(int i = 0; i < 10; i++)
    {
        printf("%p \n", &arr[i]);
    }

/* 0x7fffb7067360 */ 
/* 0x7fffb7067364 */ 
/* 0x7fffb7067368 */ 
/* 0x7fffb706736c */ 
/* 0x7fffb7067370 */ 
/* 0x7fffb7067374 */ 
/* 0x7fffb7067378 */ 
/* 0x7fffb706737c */ 
/* 0x7fffb7067380 */ 
/* 0x7fffb7067384 */ 
// 数组在内存是连续存放的
// 随着下标的增长，地址是由于低到高增长的
//


// sizeof 操作符计算元素个数

    int sz = sizeof arr / sizeof arr[0];
    printf("%d \n",sz);
    printf("%zd\n", sizeof arr);
    printf("%zd\n", sizeof arr[0]);



































































































    return 0;
}

