#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//int main()
//{
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

	////分数求和：计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值
	//int i = 0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//sum+=flag*1.0 / i;//这样sum就是小数
	//flag = -flag;
	//}
	//printf("%lf\n", sum);

	////求最大值：求十个整数中的最大值
	//int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	//int max =arr[0];
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < sz; i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max=%d\n", max);

////输出乘法口诀表
//int i = 0;
//int s = 0;
//for (int j = 1; j <= 9; j++)
//{
//	for (i = 1; i <= j; i++)
//	{
//		s = i * j;
//		printf("%d*%d=%-2d ", j, i, s);//%-2d 两位整数左对齐
//	}
//	printf("\n");
//}
//	return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//#include<windows.h>
//#include<time.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("**** 1.play      0.exit ****\n");
//	printf("****************************\n");
//}
////RAND_MAX 0-32767
//void game()
//{
//	printf("猜数字游戏开始！\n");
//	Sleep(1000);
//	system("cls");
//	//1.生成随机数
//	//时间戳：当前计算机的时间-计算机的起始时间（1917.1.1.0：0：0）=（xxxx）秒
//	//获取时间戳来设置随机数  
//	int ret=rand()%100+1;//生成1~100随机数
//	//printf("%d", ret);
//	//2.猜数字
//	while (1)
//	{
//		int num = 0;
//		printf("请猜数字：>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//	Sleep(1000);
//	system("cls");  
//	printf("游戏结束！\n");
//	Sleep(1000);
//	system("cls");
//}
//int main()
//{
//	//猜数字游戏
//	srand((unsigned)time(NULL));//获取起点，只设置一次就行，不要频繁设置   
//	//1、电脑生成随机数；2、猜数字
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		system("cls");
//		switch (input)
//		{
//		case 1:game();//猜数字游戏
//			break;
//		case 0:printf("退出游戏\n");
//			break;
//		default:printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
//again:
//	printf("kxr\n");
//	goto again;

	//关机程序
	// window 10需要把“-”改成“/”
	//shutdown -s -t 60  
	//-s:设置关机
	//-t:时间关机
	//60:一分钟内关机
	char input[20] = { 0 };
	system("shutdown /s /t 60");
again:
	printf("请注意你的电脑在一分钟内关机，如果输入“我是猪”就取消关机\n请输入>");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//返回0则说明两个字符串相等 
	{
		system("shutdown /a");
	}
	else
	{
		goto again;
	}
	return 0;
}