#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
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
	//int a = 0;
	//int b = 0;
	//int i = 0;
	//printf("��������������");
	//scanf("%d%d", &a, &b);
	//for (i = a; i >=1 ; i--)
	//{
	//	if (a % i == 0 && b % i == 0)
	//		break;
	//}
	//printf("���Լ���ǣ�%d", i);
	////շת�����
	//int m = 24;
	//int n = 18;
	//int r = 0;
	////scanf
	//while (r=m % n)
	//{
	//	//r = m % n;
	//	m = n;
	//	n = r;
	//}
	//printf("%d\n", n); 

	////��ӡ1000~2000֮�������
	//int year = 0;
	//int count = 0;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	//�ж�year�Ƿ�Ϊ���꣺�ܱ�4�����Ҳ��ܱ�100���������ܱ�400����������
	//	if (year % 4 == 0 && year % 100 != 0)
	//		
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//	else if (year % 400 == 0)
	//	{
	//		printf("%d ", year);
	//		count++;
	//	}
	//}
	//printf("\ncount=%d ", count);

	////��ӡ100~200֮�������
	//int i = 0;
	//for (i = 101; i <= 200; i+=2)
	//{
	//	//�ж�������
	//	//�Գ�����ֻ�ܱ�1������������
	//	int j = 0;
	//	for (j = 2; j <=sqrt(i); j++)//sqrt()��ƽ���ĺ�������Ҫͷ�ļ�math.h
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	} 
	//	if (j > sqrt(i))
	//	{
	//	    printf("%d ", i);
	//	}
	//}

	////��д��������1-100֮������������г��ֶ��ٸ�����9
	//int i = 0; 
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9)
	//		count++;
	//	 if (i / 10 == 9)
	//		count++;
	//}
	//printf("%d\n", count);






	return 0;
}