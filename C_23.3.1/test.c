#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//ִ�н����ͬ��˵��������������Ԫ�ص�ַ
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);//ȡ����������ĵ�ַ������Ԫ�ص�ַ��ͬ��
//	//�����ͬ�����岻ͬ����Ԫ�ص�ַ��1ָ��ڶ���Ԫ�صĵ�ַ�������ַ��1ָ����һ������ĵ�ַ
//	//����Ҫע�������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1���˴��� sizeof(arr) ���������������Ĵ�С����λ���ֽ�
//	//2��&��������ȡ��������������ĵ�ַ
//	return 0;
// }

//void bubble_sort(int* arr,int sz)
//{
//	//ȷ��ð�������������������Ԫ�ظ���
//	int i = 0;
//	int mid = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//���������Ѿ���������
//		int j = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				mid = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = mid;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;//����һ�����򣬲��������ݽ�������ʾ�����Ѿ�����
//	}
//}

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr�������ð����������
//	bubble_sort(arr,sz);//������arr���д��Σ�ֻ�Ǵ�ȥ�׵�ַ
//	//��ӡ����������
//	for (int k = 0; k < sz; k++)
//		printf("%d ", arr[k]);
//	return 0;
//}