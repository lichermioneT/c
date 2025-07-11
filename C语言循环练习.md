# C语言循环练习

## 第一计算n的阶乘

```c
#include<stdio.h>

int fact(int n)
{
    if(n <= 0)
    {
        printf("负数和零没有阶乘\n");
    }
    else
    {
        int result = 1;
        for(int i = 2; i <= n; i++)
        {
            result *= i; // 依次累乘法
        }
        return result;
    }


}

int main()
{
    int  n = 0;
    printf("请输入:");
    scanf("%d", &n);
    
    if(n <= 0)
    {
        printf("负数和零没有阶乘\n");
        return 1;
    }

    int result = fact(n);
    printf("%di的阶乘是:%d\n", n, result);

}
```



## 第二计算n阶乘之和

```c
#include<stdio.h>

int fact(int n)
{
    if(n <= 0)
    {
        printf("负数和零没有阶乘\n");
    }
    else
    {
        int result = 1;
        int sum = 0;
        for(int i = 2; i <= n; i++)
        {
            result *= i; // 依次累乘法
            sum += result;
        }
        return sum;
    }


}

int main()
{
    int  n = 0;
    printf("请输入:");
    scanf("%d", &n);
    
    if(n <= 0)
    {
        printf("负数和零没有阶乘\n");
        return 1;
    }

    int result = fact(n);
    printf("%di的阶乘只和是:%d\n", n, result);

}
```

```
```



## 第三二分法



```c
#include<stdio.h>

int main()
{
    int arr[] = {1,2,4,5,6,7,8,9,10,12,23,26,28};
    int k = 9;
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] < k)
        {
            left = mid+1;
        }
        else if( arr[mid] > k)
        {
            right = mid -1;
        }
        else
        {
            printf("找到了，下表是%d \n",mid);
            break;
        }
    }
    return 0;
}
```





## 第四字符串中间靠

```c
#include<stdio.h>


int main()
{
    // 这里sizeof() 会计算\0的长度
    char ch[] = "wel";
    printf("%d \n",sizeof(ch));

    char ch2[] = {'a', 'b', 'c','\0'};
    printf("%d \n",sizeof(ch2));

}
```



```c
#include<stdio.h>
#include<string.h>

int main()
{
   char ch[] = "welcome come to lichermionex";
   char ch2[]= "############################";
   
   int left = 0;
   int right = strlen(ch) - 1; // int right = sizeof(ch) / sizeof(ch[0]) - 2, 这里会计算\0
    while (left <= right)
    {
        ch2[left] = ch[left];
        ch2[right] = ch[right];
        printf("%s \n",ch2);
        left++;
        right--;
    }
    



}
```



