// 第一个C程序
#include<stdio.h>

//std是标准 i是in o是out
//int main()//主函数-程序入口，有且仅有一个
////int 是整型的意思，此处的int表示main函数调用返回一个整型值
//{
//	printf("hello world\n");
//
//	//char
//	char a = 'K';//单引号 一个字符
//	printf("字符型：%c\n",a);//%c对应打印字符格式的数据
//
//	//int
//	int b = 1000000;
//	printf("整型：%d\n",b);
//	short int sb = 1000000;//向内存申请2个字节用来存放1000000
//	printf("短整型：%d\n", sb);
//	long lb = 1000000;
//	printf("长整型：%d\n", lb);
//
//	//float
//	float d = 1.1f;//一般小数默认是double，可以在小数后面加f，表面是float类型
//	printf("单精度浮点型：%f\n", d);
//
//	//double
//	float dd = 1.11; 
//	printf("双精度浮点型：%lf\n", dd);
//
//	//计算各种数据类型的大小
//	printf("%d\n", sizeof(int));//计算int的大小
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));//sizeof(int)>=sizeof(int)
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long long));
//
//	return  0;
//}
////还有种过时的写法：void main()

//int num1 = 10;//全局变量
//int  main()
//{
//	int num2 = 20;//局部变量	
//	printf("%d", num2);
//	//全局变量和局部变量的名字最好不要相同，若相同局部变量优先
//	return 0;
//}
//int  main()
//{
//	int a = 0;
//	int b = 0;//注意：变量要定义在代码块前面
//
//	//scanf:用于输入数据
//	scanf("%d%d", &a, &b);//&:取址符
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
int main()
{//在该工程下中的文件声明的全局变量在使用时得先声明
	//声明形式  +extern 声明外部符号
	//extern int g_val;
	//全局变量的作用域是整个工程

	return 0;
}