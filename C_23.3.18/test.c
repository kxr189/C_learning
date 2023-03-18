#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//	//指针就是地址，地址就是指针
//	
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(int*));//4
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//整型指针时，+1是加4个字节
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//字符型指针，+1是加1个字节
//	//char* pc = &a;//会警告
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名--首元素地址
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
int main1()
{
	////1、指针未初始化；
	//int a;//局部变量不初始化，默认为随机值
	////全局变量默认为0
	//int* p;//随机地址
	//*p = 20;//
	
	////2、指针越界
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 12; i++)
	//{
	//	p++;//越界
	//}

	////3、指针指向的内存空间被释放
	//int* p = test();//a被用完后空间就释放了
	//*p = 20;
	
	return 0;
}