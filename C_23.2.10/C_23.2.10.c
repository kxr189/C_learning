#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	//��ӦP8��֧��ѭ����2��

	//int ch = 0;
	////ctrl + z
	////EOF - end of file -> -1
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//ע�⣺ֻ���ȡ�ո�֮ǰ�Ķ���
//	//��������ʣ��\n
//	while ((ch = getchar()) != '\n')//����\n��putcharֻ�ܶ���һ���ַ�
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//	printf("ȷ�ϳɹ�\n");
//	printf("���룺%d",password);
//}
//		else
//			printf("ȷ��ʧ��");//1�����Ϊȷ��ʧ�ܣ�����Ϊ��password��Ļس���ret = getchar()������ 
	
		//����2
	//int   ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}

	//forѭ��
	//��ӡ1~10������
	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("%d ", i);//i++����֮����ִ��
	//}
	
	////����1
	//for (;;)//�жϲ���ʡ�ԣ��жϽ�����Ϊ��
	//{
	//	printf("hehe\n");
	//}

	//����2
	//int x, y;
	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	//{
	//	printf("hehe\n");
	//}

	//do while 
	//��ӡ1~10
	//int i = 0;
	//do
	//{
	//	i++;
	//	printf(" %d", i);
	//}
	//while (i < 10);

	////��ϰ1������n�Ľײ�(�Ա�)
	//int n=0;
	//int m = 1;
	//printf("����n�Ľײ㣬������������n��");
	//scanf("%d", &n);
	//while(n!=1)
	//{
	//	m = n * m;
	//	n = n - 1;
	//}
	//printf("n�Ľײ�Ϊ��%d", m);
	////�ο��𰸣�
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;
	//}
	//printf("ret=%d", ret);


	//��ϰ2������1��+2��+3��+...+n!(�Ա�)
	//int n = 0;
	//int m = 1;
	//int  s = 0;
	//printf("����1��+2��+3��+...+n!\n������������n��");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	m= m * i;
	//	s = s + m;
	//}
	//printf("1��+2��+3��+...+n!=%d", s);

	//��ϰ������һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
	//�Ա�
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k =13;
	//int s = 0;//����Ԫ�ظ���
	//int l = 0; //�������߽�
	////д������arr�������ҵ�k
	//int mid = 0;//�м�Ԫ�ص��±�
	//s = sizeof(arr) / sizeof(arr[0]);
	//int r = s-1;//������ұ߽�
	//mid = s / 2-1;//������������ȥ��С�����ֵ�
	//while (l<=r)
	//{
	//	if (k > arr[mid])
	//	{
	//		l = mid+1;
	//		if ((r - l) == 1)
	//		{
	//			mid = r;
	//		}
	//		else
	//		mid = (l + r) / 2;
	//	}
	//	else if (k < arr[mid])
	//	{
	//		r = mid-1;
	//		if ((r - l) == 1)
	//		{
	//			mid = l;
	//		}
	//		else
	//		mid = (l + r) / 2;
	//	}
	//	else
	//	{
	//		printf("������ֵ���±�Ϊ��%d\n", mid);
	//		break;
	//	}
	//}
	//if (l > r)
	//{
	//	printf("�Ҳ���������");
	//}
	//�ο�
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	//int left = 0;//���±�
	//int right= sz-1;//���±�
	//int k = 10;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("�Ҳ���\n");
	//}

	////��ϰ4����д���룬��ʾ����ַ��������ƶ������м���
	////Ч��  I an a good boy.
	//char arr1[] = "i am a good boy!";//�ַ����������Դ�\0
	//char arr2[] = "################";
	//int left = 0;
	//int right = strlen(arr1)-1;//�����������迼��\0���ַ������ַ��������迼��\0�Ƿ�������±��1
	//while (left <= right)
	//{
	//system("cls");//system��ִ��ϵͳ�����һ������-cls-�����Ļ
	//	arr2[left] = arr1[left];
	//	left ++;
	//	arr2[right] = arr1[right];
	//	right--;
	//	printf("%s", arr2);
	//	//��Ϣ1s
	//	Sleep(100);//��Ϣ1000ms����Ҫwindows.hͷ�ļ�}
		
	//��ϰ5: ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)//�ַ����ıȽ�Ӧ����strcmp��������ͬ���0
		{
			printf("��¼�ɹ���");
			break;
		}
		else
		{
			printf("�������������%d�λ���\n", 2 - i);
		}
	}
	if (i == 3)
	{
		printf("�������������������˳�");
	}
	return 0;
}