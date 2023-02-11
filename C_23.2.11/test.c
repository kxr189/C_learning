#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

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
	int a = 0;
	int b = 0;
	int i = 0;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	for (i = a; i >=1 ; i--)
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	printf("最大公约数是：%d", i);
	//辗转相除法
	int m = 24;
	int n = 18;
	int r = 0;
	//scanf
	while (r=m % n)
	{
		//r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n); 

	return 0;
}