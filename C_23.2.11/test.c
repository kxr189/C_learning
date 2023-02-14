#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
int main()
{
	////Q1:写代码将三个数从大到小输出
	//int a = 0;
	//int b = 0;
	//int  c=0;
	//int mid = 0;
	//printf("请依次输入三个数：");
	//scanf("%d %d %d", &a, &b, &c);
	//if (a < b)
	//{
	//	mid = a;
	//	a = b;
	//	b = mid;
	//}
	//if (a < c)
	//{
	//	mid = a;
	//	a = c;
	//	c = mid;
	//}
	//if (b< c)
	//{
	//	mid = b;
	//	b = c;
	//	c = mid;
	//}
	//printf("%d %d %d",a, b, c);

	////Q2:打印1~100内为三的倍数的数
	//for (int i = 3; i <=100; i++)
	//{
	//	if ((i%3)==0)
	//	printf("%d ", i);
	//}

	//Q3:给定两个数，求这两个数的最大公约数
	//int a = 0;
	//int b = 0;
	//int i = 0;
	//printf("请输入两个数：");
	//scanf("%d%d", &a, &b);
	//for (i = a; i >=1 ; i--)
	//{
	//	if (a % i == 0 && b % i == 0)
	//		break;
	//}
	//printf("最大公约数是：%d", i);
	////辗转相除法
	//int m = 24;
	//int n = 18;
	//int r = 0;
	////scanf
	//while (r=m % n)
	//{
	//	//r = m % n;
	//	m = n;
	//	n = r;
	//}
	//printf("%d\n", n); 

	////打印1000~2000之年的闰年
	//int year = 0;
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	//判断year是否为闰年：能被4整数且不能被100整除或者能被400整除是闰年
	//	if (year % 4 == 0 && year % 100 != 0)
	//		
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//	else if (year % 400 == 0)
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//}
	//printf("\ncount=%d ", count);

	////打印100~200之间的素数
	//int i = 0;
	//for (i = 101; i <= 200; i+=2)
	//{
	//	//判断素数：
	//	//试除法：只能被1和其自身整除
	//	int j = 0;
	//	for (j = 2; j <=sqrt(i); j++)//sqrt()开平方的函数，需要头文件math.h
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	} 
	//	if (j > sqrt(i))
	//	{
	//	    printf("%d ", i);
	//	}
	//}

	////编写代码数出1-100之间的所有整数中出现多少个数字9
	//int i = 0; 
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9)
	//		count++;
	//	 if (i / 10 == 9)
	//		count++;
	//}
	//printf("%d\n", count);






	return 0;
}