#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//int main()
//{
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

	////������ͣ�����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ
	//int i = 0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//sum+=flag*1.0 / i;//����sum����С��
	//flag = -flag;
	//}
	//printf("%lf\n", sum);

	////�����ֵ����ʮ�������е����ֵ
	//int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	//int max =arr[0];
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 1; i < sz; i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max=%d\n", max);

////����˷��ھ���
//int i = 0;
//int s = 0;
//for (int j = 1; j <= 9; j++)
//{
//	for (i = 1; i <= j; i++)
//	{
//		s = i * j;
//		printf("%d*%d=%-2d ", j, i, s);//%-2d ��λ���������
//	}
//	printf("\n");
//}
//	return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//#include<windows.h>
//#include<time.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("**** 1.play      0.exit ****\n");
//	printf("****************************\n");
//}
////RAND_MAX 0-32767
//void game()
//{
//	printf("��������Ϸ��ʼ��\n");
//	Sleep(1000);
//	system("cls");
//	//1.���������
//	//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1917.1.1.0��0��0��=��xxxx����
//	//��ȡʱ��������������  
//	int ret=rand()%100+1;//����1~100�����
//	//printf("%d", ret);
//	//2.������
//	while (1)
//	{
//		int num = 0;
//		printf("������֣�>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//	Sleep(1000);
//	system("cls");  
//	printf("��Ϸ������\n");
//	Sleep(1000);
//	system("cls");
//}
//int main()
//{
//	//��������Ϸ
//	srand((unsigned)time(NULL));//��ȡ��㣬ֻ����һ�ξ��У���ҪƵ������   
//	//1�����������������2��������
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		system("cls");
//		switch (input)
//		{
//		case 1:game();//��������Ϸ
//			break;
//		case 0:printf("�˳���Ϸ\n");
//			break;
//		default:printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
//again:
//	printf("kxr\n");
//	goto again;

	//�ػ�����
	// window 10��Ҫ�ѡ�-���ĳɡ�/��
	//shutdown -s -t 60  
	//-s:���ùػ�
	//-t:ʱ��ػ�
	//60:һ�����ڹػ�
	char input[20] = { 0 };
	system("shutdown /s /t 60");
again:
	printf("��ע����ĵ�����һ�����ڹػ���������롰��������ȡ���ػ�\n������>");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//����0��˵�������ַ������ 
	{
		system("shutdown /a");
	}
	else
	{
		goto again;
	}
	return 0;
}