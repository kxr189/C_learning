#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	////Q1:д���뽫�������Ӵ�С���
	//int a = 0;
	//int b = 0;
	//int  c=0;
	//int mid = 0;
	//printf("������������������");
	//scanf("%d %d %d", &a, &b, &c);
	//if (a < b)
	//{
	//	mid = a;
	//	a = b;
	//	b = mid;
	//}
	//if (a < c)
	//{
	//	mid = a;
	//	a = c;
	//	c = mid;
	//}
	//if (b< c)
	//{
	//	mid = b;
	//	b = c;
	//	c = mid;
	//}
	//printf("%d %d %d",a, b, c);

	////Q2:��ӡ1~100��Ϊ���ı�������
	//for (int i = 3; i <=100; i++)
	//{
	//	if ((i%3)==0)
	//	printf("%d ", i);
	//}

	//Q3:���������������������������Լ��
	int a = 0;
	int b = 0;
	int i = 0;
	printf("��������������");
	scanf("%d%d", &a, &b);
	for (i = a; i >=1 ; i--)
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	printf("���Լ���ǣ�%d", i);
	//շת�����
	int m = 24;
	int n = 18;
	int r = 0;
	//scanf
	while (r=m % n)
	{
		//r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n); 

	return 0;
}