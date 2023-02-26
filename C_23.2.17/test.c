#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "####";
//	strcpy(arr2,arr1);//\0也会被拷贝
//	printf("%s", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s", arr);
//	return 0;
//}


////找出两个数的较大值，定义函数get_max
//int get_max(int x, int y)//第一个int是函数的返回类型
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*get_max(a, b);*/
//	printf("max=%d", get_max(a, b));
//	return 0;
//}

////写一个函数交换两个整型变量的函数
//void swap(int* x, int* y)//void表示没有返回值
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a=10 ;
//	int b=20 ;
//	int* pa = &a;
//	int* pb =&b;
//	printf("a=%d,b=%d\n", a, b);
//	swap(pa, pb);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//void function1(int x)
//{
//	int i = 0;
//	for ( i=2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			printf("%d不是素数\n",x);
//			break;
//		}
//	}
//	if (i == x)
//		printf("%d是素数\n",x);
//}
//
//int function2(int x)//最好不要在函数中打印
//{
//	//判断闰年
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
////本质上，这里的arr是一个指针，因此要计算数组元素的个数，需要在主函数中计算再传输进自定义的函数
//int function3(int arr[], int k , int sz)
//{
//	int l = 0;
//	int r = sz- 1;
//	while (l<=r)
//	{
//		int mid = (l + r) / 2;
//		if (arr[mid] < k)
//		{
//			l = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			r = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//void function4(int* p)
//{
//	(*p)++;//++的级别比较高
//}
//
//int main()
//{
	//练习1：写一个函数可以判断一个数是否是素数：
	//int a = 0;
	//while(1)
	//{
	//scanf("%d", &a);
	//function1(a);
	//}
	
	//练习2：判断某年是不是闰年：
	//int year = 0;
	//scanf("%d", &year);
	//if(function2(year)==1)
	//	printf("%d是闰年\n", year);
	//else
	//	printf("%d不是闰年\n",year);
	
	//练习3：写一个函数实现一个整型有序数组的二分查找
	//如果找到返回下表，否则返回-1
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k =17;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//int ret=function3(arr,k,sz);//数组在传参时，仅仅传过去的是第一个元素的地址
	//if (ret == -1)
	//{
	//	printf("找不到指定的数字\n");
	//}
	//else
	//{
	//	printf("下标是%d", ret);
	//}
	
	//练习4：每调用一次函数，就会将num的值加1
//	int num = 0;
//	function4(&num);
//	printf("num=%d\n", num);
//	function4(&num);
//	printf("num=%d\n", num);
//	function4(&num);
//	printf("num=%d\n", num);
//	function4(&num);
//	printf("num=%d\n", num);
//
//	return 0;
//}

//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	//函数嵌套
//	three_line();
//	return 0;
//}

//int main()
//{
//	//链式访问
//	//1
//	int len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	//3
//	printf("%d", printf("%d", printf("%d", 43))); //打印结果：4321
//	//printf的返回值是打印的字符的个数
//	return 0;
//}


//一般来说声明放头文件，定义写在源文件，需要使用函数是就include

//函数声明
//int add(int x, int y);//可以放头文件里

#include"add.h"//引用自己的头文件时用双引号

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", add(a, b));
	return 0;
}
//此时，add函数的定义写在主函数后，在使用时需要声明，可以放另一个文件
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}