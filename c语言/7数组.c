#in：clude <stdio.h>
#include <unistd.h>

// UNIX standard

int main()
{
    /* int arr1[10] = {0}; // 十个元素 */
    /* int arr2[] ={0} // 一个元素 */
    /* int arr[20] = {1, 3};  // 20个元素 */

    
// 二维数组
    /* int a[2][3] = */
    /* { */
    /*     {1, 2, 3}, */
    /*     {4, 5, 6} */
    /* }; */
    
    // a[0]:    int[3]
    // a[0][0]: int
    
    /* int data[3][5] = {1,2,3,4,5,6,7,8}; */
    /* for(int i = 0; i < 3; i++) */
    /* { */
    /*     for(int j = 0; j < 5; j++) */
    /*     { */
            /* printf("%d ",data[i][j]); */
        /* } */
        /* printf("\n"); */
    /* } */
    /* float score[5][30]; */
    
    /* int data2[3][5] = {{1,2}, {3,4}, {5,6}}; */ 

    // 二维数组必须知道列的个数
    // 可以理解为列是行的数据类型

    
    /* int arr[3][5] = {1,2,3,45,3,6,5,4,5,6,4,5,6,7,8}; */
    /* printf("%d\n",arr[2][0]); */
    
    /* int arr2[3][5] = {0}; */

    /* int i = 0; */
    /* for(i = 0; i < 3; i++) */
    /* { */
    /*     int j = 0; */
    /*     for(j = 0; j < 5; j++) */
    /*     { */
    /*         arr[i][j] = j; */
    /*     } */
    /* } */

    /* for(i = 0; i < 3; i++) */
    /* { */
    /*     int j = 0; */
    /*     for(j = 0; j < 5; j++) */
    /*     { */
    /*         printf("%d ", arr[i][j]); */
    /*     } */
    /*     printf("\n"); */
    /* } */
    

// 二维数组在内存的存储

    /* int arr[4][5] = {0}; */

    /* int i = 0; */
    /* for(int i = 0; i < 4; i++) */
    /* { */
    /*     int j  = 0; */
    /*     for(j = 0; j < 5; j++) */
    /*     { */
    /*         printf("%p\n", &arr[i][j]); */
    /*     } */
    /* } */
    
    /* printf("---------------\n"); */
    
    /* for(i = 0; i < 4; i++) */
    /* { */
    /*     printf("%p\n", &arr[i]); */
    /* } */
    
// 二维数组在内存里面也是连续存储的
    
// c99标准下才有边长数组
    
// 变长数组
    /* int n = 10; */
    /* int arr[n]; */

// 变长数组，仅仅是可以用变量初始化
// 数组一旦确定好了，数组的大小就确定了，不能改变的


/*     char ch[] = "hello lichermionex"; */
/*     char ch1[] = "##################"; */
/*     printf("%s\n",ch); */

/*     int left = 0; */
/*     int right = sizeof(ch) - 1; */
/*     while(left <= right) */
/*     { */
/*         /1* ch1[left] = ch[left]; *1/ */
/*         /1* ch1[right] = ch[right]; *1/ */
/*         /1* printf("%s\n", ch1); *1/ */
/*         /1* sleep(1); *1/ */
/*         /1* left++; *1/ */
/*         /1* right--; *1/ */
    
/*         ch1[left] = ch[left]; */
/*         ch1[right] = ch[right]; */

/*         printf("\r%s", ch1);     // \r 回到行首，不换行 */
/*         fflush(stdout);          // 立即刷新缓冲区，输出内容 */

/*         sleep(1);                // 延迟一秒 */

/*         left++; */
/*         right--; */
/*     } */
/*     printf("\n"); */


    
    /* int arr[] =  {1,2,3,4,5,6,7,8,9,10,22,33,44,55,66}; */
    /* int sz = sizeof(arr) / sizeof(arr[0]); */

    /* int left = 0; */
    /* int right = sz - 1; */
    /* int k = 8; */
    /* while(left <= right) */
    /* { */
        
    /*     int mid = (left + right) / 2; */
           /* int mid = left + (right - left) / 2; */
    /*     if(k > arr[mid]) */
    /*     { */
    /*         left = mid + 1; */
    /*     } */

    /*     else if( k < arr[mid]) */
    /*     { */
    /*         right = mid - 1; */
    /*     } */

    /*     else */
    /*     { */
    /*         printf("找打了，下表是:%d \n",mid); */
    /*         break; */
    /*     } */

    /* } */

    /* printf("asfd\rxxxxxxxxxx\n"); */



// 两个值的平均值

// 函数
// c语言的程序或者代码基本上就是函数
// 函数用来解决一类特定任务的代码
// 大型项目基本上就是函数组成的

// 库函数：编译器提供的,约定了一下函数功能，参数，返回值等
//
// 自定义的函数：程序员自己实现的

    




















































































    









    return 0;
}

