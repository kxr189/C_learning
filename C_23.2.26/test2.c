#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//最简单的递归:会导致栈溢出（递归常见的错误）
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//} 

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//练习1：接收一个整型数，按顺序打出该数字的每一位
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//
//	return 0;
//}

int len(char* arr)//arr这个指针变量接受的是地址
{
	if (*arr != '\0')
		return 1 + len(arr + sizeof(char));
	else
		return 0;
}
//递归
//len(bit)
//1+len(it)
//1+1+len(t)
//1+1+1+len(\0)
//1+1+1+0
int main()
{
	//练习2：编写函数是不允许创建临时变量，求字符串的长度
	char arr[] = "bit";
	printf("%d", len(arr));//数组传参传的是第一个元素的地址
	return 0;
}