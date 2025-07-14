#include <stdio.h>
#include <string.h>

int main()
{


// Integrated Development Environment
// 集成开发环境

// xxx.h，头文件
// xxx.c，源文件

    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */
    /* printf("hello , bit\n"); */ 

// MAIN函数是C语言程序的入口
// MAIN函数也是主函数
// MAIN函数有且仅有一个

// 双引号括起来就是字符串
//
    /* printf("hello lichermoinex"); */
    /* printf("hello lichermoinex\n"); */

    /* printf("%d\n", 100); */

    /* printf("%c\n", 'x'); */

    /* printf("%f\n", 3.14); */

    /* printf("%lf\n", 3.14); */

    /* printf("%s\n", "lichermionex\n"); */

// 库函数和自定义函数
// 跨平台，方便使用
    

// c语言关键字
// sizeof 是关键字！！！
    /* int int = x; */



// 字符和ASCII码
// 0--31不可见
// 记不住直接循环查看

    /* for(int i = 0; i <= 127; i++) */
    /* { */
    /*     printf("%d: %c \n", i, i); */
    /* } */

// 字符串和\0
// strlen计算\0之前的字符

    /* char ch[] = "abc"; // 字符串末尾默认存放\0 */
    /* printf("%zu\n", sizeof ch); // 这里明确是4 */
    /* printf("%zd\n", strlen(ch)); // 这里明确是3 */

    /* char ch1[] = {'a' , 'b' , 'c'}; */

    /* printf("%zu\n", sizeof ch1); // 这里面明确是三 */
    /* printf("%zd\n", strlen(ch1)); // 这里面不明确 */

    /* char ch2[] = {'a' , 'b' , 'c', '\0'}; */

    /* printf("%zu\n", sizeof ch2); // 这里面明确是三 */
    /* printf("%zd\n", strlen(ch2)); // 这里面不明确 */


// 转义字符
// \n \r \0 \a

    /* printf("asdf\n"); // \n换行 */
    /* printf("\\\n"); // */ 
    
    /* printf("%c\n", '\''); */
    /* printf("%s\n","xx\""); */

    /* printf("xx\txx \n"); */

    /* printf("\a"); */

    /* printf("asdfad\bsdf\n"); // 光标回退一个位置 */
                             
    /* printf("dafd\raaa"); */

    /* printf("1\t22\t333\ti\n"); */
// 字符可以八进制或者十六进制
// 八进制是没有8的

    /* printf("%c\n",'\77'); */
    /* printf("%c\n",'\x30'); */

    /* printf("%c\n",'\77'); */
    /* printf("%c\n",'\x36'); */

    printf("%zd\n",strlen("c:\test\bit\114\test.c"));

    return 0; // 这里面返回零，MAIN函数的返回值是INT，INT就是整型
}

