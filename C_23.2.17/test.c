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
//	strcpy(arr2,arr1);//\0Ҳ�ᱻ����
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


////�ҳ��������Ľϴ�ֵ�����庯��get_max
//int get_max(int x, int y)//��һ��int�Ǻ����ķ�������
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

////дһ�����������������ͱ����ĺ���
//void swap(int* x, int* y)//void��ʾû�з���ֵ
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
//			printf("%d��������\n",x);
//			break;
//		}
//	}
//	if (i == x)
//		printf("%d������\n",x);
//}
//
//int function2(int x)//��ò�Ҫ�ں����д�ӡ
//{
//	//�ж�����
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
////�����ϣ������arr��һ��ָ�룬���Ҫ��������Ԫ�صĸ�������Ҫ���������м����ٴ�����Զ���ĺ���
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
//	(*p)++;//++�ļ���Ƚϸ�
//}
//
//int main()
//{
	//��ϰ1��дһ�����������ж�һ�����Ƿ���������
	//int a = 0;
	//while(1)
	//{
	//scanf("%d", &a);
	//function1(a);
	//}
	
	//��ϰ2���ж�ĳ���ǲ������꣺
	//int year = 0;
	//scanf("%d", &year);
	//if(function2(year)==1)
	//	printf("%d������\n", year);
	//else
	//	printf("%d��������\n",year);
	
	//��ϰ3��дһ������ʵ��һ��������������Ķ��ֲ���
	//����ҵ������±����򷵻�-1
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k =17;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	//int ret=function3(arr,k,sz);//�����ڴ���ʱ����������ȥ���ǵ�һ��Ԫ�صĵ�ַ
	//if (ret == -1)
	//{
	//	printf("�Ҳ���ָ��������\n");
	//}
	//else
	//{
	//	printf("�±���%d", ret);
	//}
	
	//��ϰ4��ÿ����һ�κ������ͻὫnum��ֵ��1
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
//	//����Ƕ��
//	three_line();
//	return 0;
//}

//int main()
//{
//	//��ʽ����
//	//1
//	int len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	//3
//	printf("%d", printf("%d", printf("%d", 43))); //��ӡ�����4321
//	//printf�ķ���ֵ�Ǵ�ӡ���ַ��ĸ���
//	return 0;
//}


//һ����˵������ͷ�ļ�������д��Դ�ļ�����Ҫʹ�ú����Ǿ�include

//��������
//int add(int x, int y);//���Է�ͷ�ļ���

#include"add.h"//�����Լ���ͷ�ļ�ʱ��˫����

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", add(a, b));
	return 0;
}
//��ʱ��add�����Ķ���д������������ʹ��ʱ��Ҫ���������Է���һ���ļ�
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}