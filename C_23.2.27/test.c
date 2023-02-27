#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
		//二维数组在内存中的存储也是顺序存储的，和一维数组一样
	int i = 0;
	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		for (j= 0;j< 4; j++)
		{
			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
		}
	}
	return 0;
}

//int main()
//{
//	////二维数组的创建和初始化
//	//int arr[3][4] = {1,2,3,4,5};//3行4列,元素是先放满一行，再放下一行
//	//int arr1[3][4] = { {1,2,3},{4,5} };//还可以这样初始化
//	//int arr2[][4] = { {1,2,3},{4,5} };//列不能省略
//
//	//二维数组的使用
//	//打印二维数组
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j= 0;j< 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return  0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, & arr[i]);//%p打印地址
//	}
////结果：
////&arr[0] = 008FF8F8
////& arr[1] = 008FF8FC
////& arr[2] = 008FF900
////& arr[3] = 008FF904
////& arr[4] = 008FF908
////& arr[5] = 008FF90C
////& arr[6] = 008FF910
////& arr[7] = 008FF914
////& arr[8] = 008FF918
////& arr[9] = 008FF91C
//	//说明数组中的元素在内存中是连续存放的
//	return 0;
//}

//int main()
//{
	////数组的创建
	//int arr[10];//数组类型 数组名[元素个数]  ， []里面必须是常量
	////数组的初始化
	//char arr1[10] = "kxr";//不完全初始化，即没放满,剩下的元素默认为0
	//char arr3[10] = { 'a','b' }; 
	//int arr2[10] = { 1,21,1 };
	//char arr4[] = "abcdef";
	//printf("%d\n", sizeof(arr4));//结果：7，sizeof是计算arr4所占空间的大小
	////7个char类型的元素，大小为7*1=7
	//printf("%d\n", strlen(arr4));//结果：6，strlen是求解字符串的长度

	//char str1[] = "abc";
	//char str2[] = { 'a','b','c' };
	//printf("%d,%d,%d,%d", sizeof(str1), sizeof(str2), strlen(str1), strlen(str2));//4,3,3,15（15是随机值
	////strlen只能用于字符串

	////一维数组的使用
	//char str3[] = "abcdef";//数组下表从0开始
	//printf("%c\n", str3[3]);//打印第四个元素，其下标为3
	////打印该数组所有元素
	//int i = 0;
	//for (i = 0; i < (int)strlen(str3); i++)
	//{
	//	printf("%c ", str3[i]);
	//}
//
//	return 0;
//}

//int Fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);//效率极低,有大量重复计算
//}
//int Fib2(int n)
//{
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		while (n>2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//}
//int main()
//{
//	//练习4：求第n个斐波那契数(1 1 2 3 5 8 11 ......
//	//前两个数之和等于第三个数
//	int n = 0;
//	scanf("%d", &n);
//	//printf("%d", Fib1(n));//递归的方法
//	printf("%d", Fib2(n));//循环的方法
//	return 0;
//}

//int Fac1(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	//练习3：求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	//ret=Fac1(n);//循环求阶乘
//	ret = Fac2(n);//递归求阶乘
//	printf("%d!=% d",n, ret);
//	return 0;
//}