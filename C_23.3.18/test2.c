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
//		//�ȼ���
//		//*p=i
//		//p++
//	}
//	int* p = NULL;//NULL��������ָ�븳ֵ��
//
//	if (p != NULL)
//	{
//		//�ж����Ƿ�Ϊ��
//	}
//	return 0;
//}


//int main()
//{
//	//ָ������
//	//1��ָ��+-����
//	int arr[10] = { 1, 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//
//	//2��ָ��-ָ��
//
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("\n%d\n", &arr2[9] - &arr2[0]);//ָ���ȥָ������м�Ԫ�صĸ���
//
//
//	//3��ָ��Ĺ�ϵ����
//	//��׼�涨��
//	//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�����������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
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
//	//ʵ��strlen
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	//�����ָ��
//	//�ھ��󲿷�����£�������������Ԫ�ص�ַ
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);//��������ĵ�ַ
//	printf("%p\n", &arr+ 1);
//	//1��&arr-&a������-������������Ԫ�ص�ַ-��������ʾ�������飬&������ȡ������������ĵ�ַ
//	//2��sizeof(arr)-sizeof(������)����������ʾ�������飬���������������Ĵ�С
//
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int* pa = &a;
	//int* * ppa=&pa;//ppa���Ƕ���ָ��
	////int*** pppa = &ppa;//����ָ��
	//printf("%d\n", **ppa);

	//ָ������
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