#include<stdio.h>


int main()
{
	//int a = 0;//�����һ����䣬�ֺű�ʾһ�����Ľ���

	//1��
	//int age = 10;
	//if (age < 18)
	//	printf("δ����\n");

	//2��
	//int age = 20;
	//if (age < 18)
	//	printf("δ����\n");
	//else
	//	printf("����\n");

	//3��
	//int age = 112;
	//if (age < 18)
	//	printf("δ����\n");
	//else if(18<=age&&age<28)//�˴���Ҫ�߼���&&,������ôд18<=age<28
	//	printf("����\n");
	//else if (28 <= age && age < 50)
	//	printf("׳��\n");
	//else if (50 <= age && age < 90)
	//	printf("����\n");
	//else
	//	printf("����\n");

	//��ϰ1���ж�1~100�Ƿ�Ϊ������
	//for (int a=0;a <= 100;a++)//Ҳ������while 
	//{
	//	if (a <= 100)
	//		//scanf("%d", &a);
	//	{
	//		if (a % 2 == 0)
	//			printf("%d����������\n", a);
	//		else
	//			printf("%d��������\n", a);
	//	}
	//}

	////switch���
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:printf("����һ\n"); break;
	//case 2:printf("���ڶ�\n"); break;
	//case 3:printf("������\n"); break; 
	//case 4:printf("������\n"); break;
	//case 5:printf("������\n"); break;
	//case 6:printf("������\n"); break;
	//case 7:printf("������\n"); break;
	//default:printf("�������Ŷ��");
	//}

	//whileѭ��
	//int i = 0;
	//	while (i <= 10)
	//	{
	//		printf("%d\n", i);
	//		i++; 
	//	}


	////getchar() putchar()
	//int a = getchar();//���ڽ��ܼ��̻�ȡ���ַ�
	//putchar(a);//����ַ�  ,��printf���

	//����1
	int ch = 0;
	//ctrl + z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	//git try

   return 0;
}