#include <stdio.h>

int main()
{

// if总是和最近的else匹配

// 关系操作符
// 注意判断等于==
// 注意判断赋值=
// 常量和变量判断相等
// 常量==变量 建议将常量放在==左边

    /* int a = 99; */
    /* int b = 66; */
    /* printf("%d\n",(a > b)); */
    /* printf("%d\n",(a < b)); */
    /* printf("%d\n",(a == b)); */
    /* printf("%d\n",(a >= b)); */
    /* printf("%d\n",(a <= b)); */
    /* printf("%d\n",(a != b)); */
    
    /* int c = (a == b); */
    /* printf("%d \n",c); */

        
    /* int a = 3; */
    /* int b = 7; */
    /* int c = 4; */

    /* if(a < b < c) */
    /* { */
    /*     printf("hhh\n"); */
    /* } */

    /* if(a < b && b < c) */
    /* { */
    /*     printf("hhhhh\n"); */
    /* } */
    
    /* int age = 20; */

// 不要把你数学上面的东西拿到编程里面来
    /* /1* if(18<age<36)`` *1/ */

    /* if(age >= 18 && age <=38) */
    /* { */
    /*     printf("青年的\n"); */
    /* } */

    
// 三目操作符
    
    /* int a = 0; */
    /* int b = 0; */
    /* scanf("%d %d", &a, &b); */
    
    /* int max = (a >  b ? a : b); */
    /* printf("%d \n",max); */

    /* int max = (4 > 5 ? 4 : 5); */
    /* printf("%d \n", max); */

// 逻辑操作符号
// && ||  !

// ! 真的变成假的，假的变成真的


    /* int i = 0; */
    /* if(!i) */
    /* { */
    /*     printf("asdf\n"); */
    /* } */

// && 逻辑与

    /* int a = 0; */
    /* int b = 0; */
    /* scanf("%d %d", &a, &b); */

    /* if(a > 4 && b > 3) */
    /* { */
    /*     printf("dasf \n"); */
    /* } */
    
    /* int month = 4; */
    /* if(month >= 3 && month <= 5) */
    /* { */
    /*     printf("春天\n"); */
    /* } */



// || 逻辑或

    /* int a = 0; */
    /* int b = 0; */
    /* scanf("%d %d", &a, &b); */
    /* if(a || b) */
    /* { */
    /*     printf("hehehehhehe \n"); */
    /* } */

// 判断闰年

    /* int year = 0; */
    /* scanf("%d", &year); */

    /* if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) */
    /* { */
    /*     printf("闰年\n"); */
    /* } */
    /* else */
    /* { */
    /*     printf("平年\n"); */
    /* } */

// 短路
// 左边复合条件就不计算右边的了
    
    /* int month = 0; */
    /* // 短路了，不用计算后面的了 */
    /* if(month >= 3 && month <=5) */
    /* { */
    /*     printf("hhhhhh\n"); */
    /* } */

    /* if(month == 0 || month == 3) */
    /* { */
    /*     printf("dsaffads\n"); */
    /* } */
    

    /* int i = 0; */
    /* int a = 0; */
    /* int b = 2; */
    /* int c = 3; */
    /* int d = 4; */
    
    /* i = (a++ && ++b &&  d++); */


// switch语句

// 计算一个数字除三的余数

    /* int n = 0; */
    /* scanf("%d", &n); */
    /* switch(n % 3) */
    /* { */
    /*     case 0: printf("余数是0\n"); break; */
    /*     case 1: printf("余数是1\n"); break; */
    /*     case 2: printf("余数是3\n"); break; */
    /*     default:printf("请输入整数\n");break; */
    /* } */

// case必须是整型常量表达式

    /* char ch = 0; */
    /* scanf("%c", &ch); */
    
    /* switch(ch) */
    /* { */
    /*      case A: printf("优秀\n"); break; */
    /* } */

// 字符类型也是归类到整型的
// 因为字符的本质是ASCII码值，


    /* int day = 0; */
    /* scanf("%d", &day); */

    /* switch(day) */
    /* { */
    /*     case 1: printf("星期1\n"); break; */
    /*     case 2: printf("星期2\n"); break; */
    /*     case 3: printf("星期3\n"); break; */
    /*     case 4: printf("星期4\n"); break; */
    /*     case 5: printf("星期5\n"); break; */
    /*     case 6: printf("星期6\n"); break; */
    /*     case 7: printf("星期7\n"); break; */
    /*     default: printf("输入有误\n"); break; */
    /* } */


    /* switch(day) */
    /* { */
    /*     case 1: */
    /*     case 2: */
    /*     case 3: */
    /*     case 4: */
    /*     case 5: printf("工作日\n"); break; */ 
    /*     case 6: */
    /*     case 7: printf("休息日\n"); break; */
    /*     default: printf("输入有误\n"); break; */
    /* } */


// default用来解决case语句处理不了的情况
// case和default没有顺序要求，


// while循环

    /* int n = 10; */
    /* if(n > 0) */
    /* { */
    /*     printf("hehe\n"); */
    /* } */
    
    /* while(n) */
    /* { */
    /*     printf("hehe\n"); */
    /* } */

// while循环只要满足条件就一直执行
// while循环注意改变循环条件
// while(expression)
// {
//    语句
// }

    /* int i = 1; */
    /* while(i <= 10) */
    /* { */
    /*     printf("%d\n", i); */
    /*     i++; */
    /* } */


    /* int x = 0; */
    /* scanf("%d", &x); */
    /* while(x) */
    /* { */
    /*     printf("%d\n", x % 10); */
    /*     x = x / 10; */
    /* } */


// for循环
// for(express1, express2, express3)
// 初始化一次 
// 调整循环 调整循环

    // 10 - 1 + 1 == 10循环十次
    
    /* int i = 0; */
    /* for(int i = 1; i <= 10; i++) */
    /* { */
    /*     printf("%d \n", i); */
    /* } */


// 1--100的数字三的倍数
    /* int sum = 0; */
    /* int i = 0; */
    /* for(i = 1; i <= 100; i++) */
    /* { */
    /*     // 判断是3的倍数才打印出来 */
    /*     if(i % 3 == 0) */
    /*     { */
    /*         printf("%d ", i); */
    /*         sum += i; */
    /*     } */
    /* } */
    
    /* printf("\n%d\n", sum); */

    /* for(i = 3; i <= 100; i += 3) */
    /* { */
    /*     if(i % 3 == 0) */
    /*     { */
    /*         sum += i; */
    /*     } */
    /* } */
    /* printf("%d\n", sum); */

// do while
// 不管什么，上来执行一次
// do while至少执行一次

    /* int i = 0; */
    /* do */
    /* { */
    /*     i++; */
    /*     printf("%d ",i); */

    /* }while(i <= 9); */
    // 9 - 0 + 1 == 10;
    
    /* int i = 0; */
    /* int count = 0; */
    /* scanf("%d",&count); */
    /* do */
    /* { */   
    /*     i++; */
    /*     count = count / 10; */
    /* }while(count); */
    
    /* printf("%d\n", i); */

// break和continue;
    
    /* int i = 0; */
    /* while(i < 10) */
    /* { */
    /*     i++; */
    /*     if(i == 5) */
    /*         break;  // 跳出本次循环,终止一个循环 */
    /*     printf("%d ", i); */
    /* } */
    /* printf("\n"); */
    

// continue注意跳出时，改变循环条件

    /* int  i = 1; */
    /* while(i <= 10) */
    /* { */
    /*     if(i == 5) */
    /*         continue; */

    /*     printf("%d", i); */
    /*     i++; */
    /* } */
    
// for循环天生就是改变循环条件，应该不会出现死循环的条件
    














































    
    return 0;
}

