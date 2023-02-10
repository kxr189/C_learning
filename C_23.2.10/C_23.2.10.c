#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//对应P8分支与循环（2）

	//int ch = 0;
	////ctrl + z
	////EOF - end of file -> -1
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//注意：只会读取空格之前的东西
//	//缓冲区还剩余\n
//	while ((ch = getchar()) != '\n')//读走\n，putchar只能读走一个字符
//	{
//		;
//	}
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//	printf("确认成功\n");
//	printf("密码：%d",password);
//}
//		else
//			printf("确认失败");//1、结果为确认失败，是因为敲password后的回车被ret = getchar()读入了 
	
		//代码2
	//int   ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}

	//for循环
	//打印1~10的数字
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("%d ", i);//i++在这之后再执行
	//}
	
	////变种1
	//for (;;)//判断部分省略，判断结果则恒为真
	//{
	//	printf("hehe\n");
	//}

	//变种2
	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	//{
	//	printf("hehe\n");
	//}

	//do while 
	//打印1~10
	//int i = 0;
	//do
	//{
	//	i++;
	//	printf(" %d", i);
	//}
	//while (i < 10);

	////练习1：计算n的阶层(自编)
	//int n=0;
	//int m = 1;
	//printf("计算n的阶层，接下来请输入n：");
	//scanf("%d", &n);
	//while(n!=1)
	//{
	//	m = n * m;
	//	n = n - 1;
	//}
	//printf("n的阶层为：%d", m);
	////参考答案：
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;
	//}
	//printf("ret=%d", ret);


	//练习2：计算1！+2！+3！+...+n!(自编)
	//int n = 0;
	//int m = 1;
	//int  s = 0;
	//printf("计算1！+2！+3！+...+n!\n接下来请输入n：");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	m= m * i;
	//	s = s + m;
	//}
	//printf("1！+2！+3！+...+n!=%d", s);

	//练习三：在一个有序数组中查找具体的某个数字n。（讲解二分查找）
	//自编
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k =13;
	//int s = 0;//数组元素个数
	//int l = 0; //区间的左边界
	////写代码在arr数组中找到k
	//int mid = 0;//中间元素的下标
	//s = sizeof(arr) / sizeof(arr[0]);
	//int r = s-1;//区间的右边界
	//mid = s / 2-1;//除法除不尽是去除小数部分的
	//while (l<=r)
	//{
	//	if (k > arr[mid])
	//	{
	//		l = mid+1;
	//		if ((r - l) == 1)
	//		{
	//			mid = r;
	//		}
	//		else
	//		mid = (l + r) / 2;
	//	}
	//	else if (k < arr[mid])
	//	{
	//		r = mid-1;
	//		if ((r - l) == 1)
	//		{
	//			mid = l;
	//		}
	//		else
	//		mid = (l + r) / 2;
	//	}
	//	else
	//	{
	//		printf("所找数值的下标为：%d\n", mid);
	//		break;
	//	}
	//}
	//if (l > r)
	//{
	//	printf("找不到该数字");
	//}
	//参考
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	//int left = 0;//左下标
	//int right= sz-1;//右下标
	//int k = 10;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标是：%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到\n");
	//}

	////练习4：编写代码，演示多个字符从两端移动，到中间汇聚
	////效果  I an a good boy.
	//char arr1[] = "i am a good boy!";//字符串结束后自带\0
	//char arr2[] = "################";
	//int left = 0;
	//int right = strlen(arr1)-1;//整型数组无需考虑\0，字符串或字符数组则需考虑\0是否会引起下标加1
	//while (left <= right)
	//{
	//system("cls");//system是执行系统命令的一个函数-cls-清空屏幕
	//	arr2[left] = arr1[left];
	//	left ++;
	//	arr2[right] = arr1[right];
	//	right--;
	//	printf("%s", arr2);
	//	//休息1s
	//	Sleep(100);//休息1000ms，需要windows.h头文件}
		
	//练习5: 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)//字符串的比较应该用strcmp函数，相同输出0
		{
			printf("登录成功！");
			break;
		}
		else
		{
			printf("密码错误，您还有%d次机会\n", 2 - i);
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，请退出");
	}
	return 0;
}