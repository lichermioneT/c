#include <stdio.h>

int main()
{

// printf函数
    /* printf("hello world\n"); */
    /* printf("abc\ndef\n"); */
    
// 占位符
// 占位符和参数一一对应的
    /* printf("%d \n",99); */
    /* printf("%s","dasfffffffffff\n"); */
    /* printf("%s lichermionex\n", "hello"); */

// %c字符
// %d十进制整数
// %f小数 %lf %lf
// %zd size_t类型的数据

    
// 限制宽度
    
    /* // 右边对其 */
    /* printf("%5d\n",123); */
    /* printf("%d\n",12345); */
    
    /* // 左边对其 */
    /* printf("%-5d\n",123); */
    /* printf("%-d\n",12345); */
    
    /* // %lf默认小数是六位 */
    /* printf("%lf\n",123.45); */
    /* printf("%12lf\n",123.45); */
    
    /* // 总是显示正负号 */
    /* printf("%+d\n",123); */
    /* printf("%+d\n",-123); */
    
    /* // 小数的位数 */
    /* printf("%12.2lf\n",123.465); */
    
    /* // 输出部分字符 */
    /* printf("%.3s\n","sdfasdfasf"); */

    



// scanf函数
    
    /* int score = 0; */
    /* printf("请输入成绩："); */
    /* // 后面需要的是取地址 */
    /* scanf("%d", &score); */
    /* printf("成绩是：%d \n", score); */
    
    /* int a = 0; */
    /* int c = 0; */
    /* int b = 0; */
    /* scanf("%d %d %d", &a, &b, &c); */
    /* printf("%d %d %d\n",a, b, c); */

// scnaf:会自动跳过空白字符的
// scanf:数据先放到缓冲区域里面
// 根据占位符来一次 读取数据
    
// 严格按照格式控制输入数据
    /* int x = 0; */
    /* float f = 0.0; */
    /* scanf("%d%f",&x, &f); */
    /* printf("%d %f\n", x, f); */

// scanf的返回值
// 返回值是int
// 成功读取几个就返回几个
// 没有成功0
// 匹配错误 或者文件结尾EOF(-1), 上来就读取错误
        
    /* int a = 0; */
    /* int b = 0; */
    /* int c = 0; */
    /* int ret = scanf("%d %d %d", &a, &b, &c); */
    /* printf("ret = %d\n", ret); */

// %c不会跳过起首的空白字符
    /* char ch = 0; */

    /* // 不会跳过空白的 */
    /* scanf("%c", &ch); */

    /* // 会主动跳过空格 */
    /* /1* scanf(" %c", &ch); *1/ */
    /* printf("adf%cafd",ch); */

// %s遇到空格就停止了
// %s末尾存放一个\0
// scanf不会检查是否溢出
// %ns 检查字符

    /* char ch[20] = {0}; */
    /* scanf("%19s", ch); */
    /* printf("%s \n", ch); */

// 复制忽略符号
    /* int year = 0; */
    /* int month = 0; */
    /* int day = 0; */
    /* scanf("%d%*c%d%*c%d", &year, &month, &day); */
    /* printf("%d %d %d\n", year,month, day); */

    /* int a; */
    /* printf("%d\n", a); */

// 全局变量不初始化默认是零
// c/c++里面这是等于==
// c/c++里面这是赋值=

    /* int flag = 0; */
    /* scanf("%d", &flag); */
    /* if(flag) */
    /* { */
    /*     printf("hhhhhhhhhhhh\n"); */
    /* } */
    /* else */
    /* { */
    /*     printf("aaaaaaaaaaaaa\n"); */
    /* } */

    /* int age = 0; */
    /* scanf("%d",&age); */
    /* if(age > 18 || age == 18) */
    /* { */
    /*     printf("成年\n"); */
    /*     printf("可以谈恋爱了\n"); */
    /* } */
    /* else */
    /* { */
    /*     printf("未成年\n"); */
    /*     printf("进制谈恋爱\n"); */
    /* } */

// if和else默认只是控制一条语句
// 多条语句使用{} 语句块控制
    
    /* int num = 0; */
    /* scanf("%d", &num); */

    /* if(num == 0) */
    /* { */
    /*     printf("num是：%d\n", num); */
    /* } */
    /* else */
    /* { */
    /*     if(num > 0) */
    /*     { */
    /*         printf("num是正数\n"); */
    /*     } */
    /*     else */
    /*     { */
    /*         printf("num是负数\n"); */
    /*     } */
    /* } */



    /* int age = 0; */
    /* printf("请输入您的年龄:>"); */
    /* scanf("%d", &age); */

    /* if(age < 18) */
    /* { */
    /*   printf("未成年\n"); */
    /* } */
    /*     else if(age < 44) // 18 ~ 43 */
    /* { */
    /*     printf("青年\n"); */
    /* } */
    /* else if(age < 60) // 44 ~ 59 */
    /* { */
    /*     printf("中老年\n"); */
    /* } */
    /*     else if(age < 80) // 60 ~ 79 */
    /* { */
    /*     printf("老年\n"); */
    /* } */
    /* else              // 80 及以上 */
    /* { */
    /*     printf("老寿星\n"); */
    /* } */

// if和else的匹配
// if只是和最近的else匹配


    return 0;
}
