#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��򵥵ĵݹ�:�ᵼ��ջ������ݹ鳣���Ĵ���
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//} 

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//��ϰ1������һ������������˳���������ֵ�ÿһλ
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//
//	return 0;
//}

int len(char* arr)//arr���ָ��������ܵ��ǵ�ַ
{
	if (*arr != '\0')
		return 1 + len(arr + sizeof(char));
	else
		return 0;
}
//�ݹ�
//len(bit)
//1+len(it)
//1+1+len(t)
//1+1+1+len(\0)
//1+1+1+0
int main()
{
	//��ϰ2����д�����ǲ���������ʱ���������ַ����ĳ���
	char arr[] = "bit";
	printf("%d", len(arr));//���鴫�δ����ǵ�һ��Ԫ�صĵ�ַ
	return 0;
}