#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//	//ָ����ǵ�ַ����ַ����ָ��
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
//	printf("%p\n", pa+1);//����ָ��ʱ��+1�Ǽ�4���ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//�ַ���ָ�룬+1�Ǽ�1���ֽ�
//	//char* pc = &a;//�ᾯ��
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������--��Ԫ�ص�ַ
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
	////1��ָ��δ��ʼ����
	//int a;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ
	////ȫ�ֱ���Ĭ��Ϊ0
	//int* p;//�����ַ
	//*p = 20;//
	
	////2��ָ��Խ��
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 12; i++)
	//{
	//	p++;//Խ��
	//}

	////3��ָ��ָ����ڴ�ռ䱻�ͷ�
	//int* p = test();//a�������ռ���ͷ���
	//*p = 20;
	
	return 0;
}