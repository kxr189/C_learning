#include<stdio.h>


int main()
{
	//int a = 0;//这就是一条语句，分号表示一条语句的结束

	//1、
	//int age = 10;
	//if (age < 18)
	//	printf("未成年\n");

	//2、
	//int age = 20;
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");

	//3、
	//int age = 112;
	//if (age < 18)
	//	printf("未成年\n");
	//else if(18<=age&&age<28)//此处需要逻辑与&&,不能这么写18<=age<28
	//	printf("青年\n");
	//else if (28 <= age && age < 50)
	//	printf("壮年\n");
	//else if (50 <= age && age < 90)
	//	printf("老年\n");
	//else
	//	printf("长寿\n");

	//练习1：判断1~100是否为奇数？
	//for (int a=0;a <= 100;a++)//也可以用while 
	//{
	//	if (a <= 100)
	//		//scanf("%d", &a);
	//	{
	//		if (a % 2 == 0)
	//			printf("%d不是奇数。\n", a);
	//		else
	//			printf("%d是奇数。\n", a);
	//	}
	//}

	////switch语句
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:printf("星期一\n"); break;
	//case 2:printf("星期二\n"); break;
	//case 3:printf("星期三\n"); break; 
	//case 4:printf("星期四\n"); break;
	//case 5:printf("星期五\n"); break;
	//case 6:printf("星期六\n"); break;
	//case 7:printf("星期日\n"); break;
	//default:printf("您输错了哦！");
	//}

	//while循环
	//int i = 0;
	//	while (i <= 10)
	//	{
	//		printf("%d\n", i);
	//		i++; 
	//	}


	////getchar() putchar()
	//int a = getchar();//用于接受键盘获取的字符
	//putchar(a);//输出字符  ,和printf差不多

	//代码1
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