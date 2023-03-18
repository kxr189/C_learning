#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i < 12; i++)
//	{
//		*p++=i;
//		//等价于
//		//*p=i
//		//p++
//	}
//	int* p = NULL;//NULL是用来给指针赋值的
//
//	if (p != NULL)
//	{
//		//判断其是否为空
//	}
//	return 0;
//}


//int main()
//{
//	//指针运算
//	//1、指针+-整数
//	int arr[10] = { 1, 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//
//	//2、指针-指针
//
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("\n%d\n", &arr2[9] - &arr2[0]);//指针减去指针等于中间元素的个数
//
//
//	//3、指针的关系运算
//	//标准规定：
//	//允许指向数组元素的指针于指向数组最后一个元素后面的那个内存位置的指针比较，但不允许于指向第一个元素之前的那个内存位置的指针进行比较
//
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//实现strlen
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	//数组和指针
//	//在绝大部分情况下，数组名就是首元素地址
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);//整个数组的地址
//	printf("%p\n", &arr+ 1);
//	//1、&arr-&a数组名-数组名不是首元素地址-数组名表示整个数组，&数组名取出的整个数组的地址
//	//2、sizeof(arr)-sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小
//
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int* pa = &a;
	//int* * ppa=&pa;//ppa就是二级指针
	////int*** pppa = &ppa;//三级指针
	//printf("%d\n", **ppa);

	//指针数组
	int a = 1;
	int b = 2;
	int c = 3;
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}

	return 0;
}