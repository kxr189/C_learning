#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
		//��ά�������ڴ��еĴ洢Ҳ��˳��洢�ģ���һά����һ��
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
//	////��ά����Ĵ����ͳ�ʼ��
//	//int arr[3][4] = {1,2,3,4,5};//3��4��,Ԫ�����ȷ���һ�У��ٷ���һ��
//	//int arr1[3][4] = { {1,2,3},{4,5} };//������������ʼ��
//	//int arr2[][4] = { {1,2,3},{4,5} };//�в���ʡ��
//
//	//��ά�����ʹ��
//	//��ӡ��ά����
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, & arr[i]);//%p��ӡ��ַ
//	}
////�����
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
//	//˵�������е�Ԫ�����ڴ�����������ŵ�
//	return 0;
//}

//int main()
//{
	////����Ĵ���
	//int arr[10];//�������� ������[Ԫ�ظ���]  �� []��������ǳ���
	////����ĳ�ʼ��
	//char arr1[10] = "kxr";//����ȫ��ʼ������û����,ʣ�µ�Ԫ��Ĭ��Ϊ0
	//char arr3[10] = { 'a','b' }; 
	//int arr2[10] = { 1,21,1 };
	//char arr4[] = "abcdef";
	//printf("%d\n", sizeof(arr4));//�����7��sizeof�Ǽ���arr4��ռ�ռ�Ĵ�С
	////7��char���͵�Ԫ�أ���СΪ7*1=7
	//printf("%d\n", strlen(arr4));//�����6��strlen������ַ����ĳ���

	//char str1[] = "abc";
	//char str2[] = { 'a','b','c' };
	//printf("%d,%d,%d,%d", sizeof(str1), sizeof(str2), strlen(str1), strlen(str2));//4,3,3,15��15�����ֵ
	////strlenֻ�������ַ���

	////һά�����ʹ��
	//char str3[] = "abcdef";//�����±��0��ʼ
	//printf("%c\n", str3[3]);//��ӡ���ĸ�Ԫ�أ����±�Ϊ3
	////��ӡ����������Ԫ��
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
//		return Fib1(n - 1) + Fib1(n - 2);//Ч�ʼ���,�д����ظ�����
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
//	//��ϰ4�����n��쳲�������(1 1 2 3 5 8 11 ......
//	//ǰ������֮�͵��ڵ�������
//	int n = 0;
//	scanf("%d", &n);
//	//printf("%d", Fib1(n));//�ݹ�ķ���
//	printf("%d", Fib2(n));//ѭ���ķ���
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
//	//��ϰ3����n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	//ret=Fac1(n);//ѭ����׳�
//	ret = Fac2(n);//�ݹ���׳�
//	printf("%d!=% d",n, ret);
//	return 0;
//}