# c语言初阶

## 第一 IF语句

```c
#include<stdio.h>

int main()
{
    int age = 0;
    scanf("%d", &age);
    if(age < 18)
    {
		printf("未成年人\n");
    }
    else if(age >= 18 && age < 30)
    {
		printf("青年人\n");
    }
    else if(age >= 30 && age < 50)
    {
        printf("壮年\n");
    }
    else if(age >= 50 && age < 80)
    {
        printf("老年人\n");
    }
    else
    {
        printf("长寿\n");
    }
    
    // if语句，默认只是控制一句
    // if和else只是和最近的进行匹配
    // if语句注意使用代码块
    return 0;
}
```



```c
#include<stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    if(num % 2 == 1)
    {
        printf("%d是奇数\n");
    }
}
```



```c
#include<stdio.h>


int main()
{
    int num = 1;
    while(num <= 100)
    {
        printf("%d ", num);
        num += 2;
    }
    
    return 0;
}
```



```c
#include<stdio.h>

int main()
{
    
    int num = 1;
    while(i <= 100)
   	{
		if(num % 2 == 1)
        {
            printf("%d ", num);
        }
        num++;
    }
    
    // 写while循环的时候注意：控制循环条件。
    
    return 0;
}
```



## 第二SWITCH语句

```c
#include<stdio.h>

int main()
{
	int day = 0;
    scanf("%d", &num);
    switch(day)
    {
        case 1:printf("星期一\n");break;
        case 2:printf("星期二\n");break;
        case 3:printf("星期三\n");break;
        case 4:printf("星期四\n");break;
        case 5:printf("星期五\n");break;
        case 6:printf("星期六\n");break;
        case 7:printf("星期天\n");break;
        default:
            printf("输入有误\n");break;
    }
}
```



```c
#include<stdio.h>

int main()
{
    int day = 0;
    scanf("%d", &day);
    
    switch(day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("工作日\n"); break;
        case 6:
        case 7: printf("休息日\n"); break;
        default:
            	printf("输入有误\n");break;
    }
    return 0;
}
```



## 第三continue和break

```c
#include<stdio.h>


int main()
{
	int i = 0;
    while(i < 10)
    {
		if(i == 5)
        {
            break;
        }
        printf("%d ");
        i++;
    }
    
    return 0;
}
```

**`break` 只会跳出当前所在的那一层循环，不会直接跳出双层或多层循环。**

**continue 注意循环条件的改变**

```c
#include<stdio.h>

int main()
{
    int i = 0;
    while(i < 10)
    {
        i++;
        if(i == 6)
        {
            continue;
        }
        printf("%d ");
    }
    return 0;
}
```

## 第四缓冲区

```c
#include<stdio.h>


int main()
{
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    // EOF 就是-1 文件结束标志
    // getchar()函数从缓冲区里面一直读取字符
    //
    return 0;
}

```

```c
#include<stdio.h>

int main()
{
    
    char password[20] = {0};
    printf("请输入密码-->");
    scanf("%s", password);
    
    int ch = 0;
    while((ch = getchar()) != '\n')
    {
  		
    }
    
    printf("请确认密码-->(Y/N)");
    int ret = getchar();
    
    if('y' == ret)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
```



```c
#include<stdio.h>

int main()
{
    
    char ch = '\0';
    scanf("%c", &ch);
    printf("%c", ch);
    
    return 0;
}
```





```c
#include<stdio.h>
int main()
{
    char ch = '\0';
    while((ch = getchar()) != EOF)
    {
        if(ch < '0' || ch > '9')
            continue;
        putchar(ch);
        
    }
    
    
    
    return 0;
}
```



