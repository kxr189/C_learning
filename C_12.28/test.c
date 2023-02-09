#include<stdio.h>
#include<string.h>

//#define   a   100
////#define定义的标识符常量
//
//	//枚举常量snum
//	//枚举：一一列举
//enum sex
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum sex SEX = MALE;
//
//	const  int  num = 8;//const:常属性 num的值不可改变
//	//const修饰常变量  num本质是变量，只是有了常属性
//
//	3;//字面常量
//
//	printf("%d\n", a);
//
//	printf("%d\n", MALE);//默认0
//	printf("%d\n", FEMALE);//默认1
//	printf("%d\n", SECRET);//默认2
//	printf("%d\n", SEX);
//
//	return 0;
//}


//int main()
//{
//	//字符串可以放到一个数组里面
//	char str1[ ] = "abc";
//	char str2[ ] = { 'a' ,'b', 'c' ,'\0'};//注意需要放最后那个转义字符
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("%d\n", strlen(str1));
//	printf("%d\n", strlen(str2));
//	return 0;
//}

//int main()
//{
//	//转义字符
//	printf("abc\n");//"\n"换行
//	printf("a\tb");//"\t"水平制表符 作用相当于键盘上的Tab键   
//	printf("\?");//"\?"显示？号
//	printf("\a");//"\a"蜂鸣声，表示警告
//	printf("\\");//"\\"显示\号
//	printf("\'\n");//"\'"显示'号
//	printf("%c\n",'\32');//"\32"是两个八进制数字，32作为八进制代表的那个十进制数字作为ASCII码值对应的字符，八进制32->十进制26->ASCII对应的符号
//	printf("%c", '\x61');//"/xdd"中dd表示两个十六进制数字
//
//	//注释
//	/*注
//	
//	
//	释*/
//
//	return 0;
//}


//int main()
//{
//	//选择语句
//	int safe = 0;
//	printf("请输入你的年薪(单位：万元):");
//	scanf("%d", &safe);
//	if  (safe > 30 || safe == 30)
//		printf("你是个成功人士！\n");
//	else
//		printf("还需要努力呢！\n");
//	return 0;
//} 

//int main()
//{
//	//循环结构 while语句
//	int mon = 0;
//	while (mon<500)
//	{
//		printf("请输入你赚的钱（百万元）：");
//		scanf("%d", &mon);
//	}
//	return 0;
//}

////函数包括自定义函数和库函数
////自定义函数
//int add(int x, int y)//add是函数名，int x和int y是函数的参数
//{
//	//函数体
//	int sum;
//	sum = x + y;
//	return sum;//返回结果
//}
//int main()
//{
//	//调用函数
//	int a = 0;
//	int b = 0;
//	int sum;
//	printf("请输入a、b：");
//	scanf("%d%d", &a, &b);
//   sum=	add(a, b);
//   printf("a+b=%d", sum);
//   return 0;
//}

//int main()
//{
//	//数组:一组相同类型数据的集合
//	int i = 0;
//	int s[10] = {0,1,2,3,4,5,6,7,8,9};//数组的下标从0开始 
//	while (i<9)
//	{
//		printf("第%d数据的值为：%d \n",i,s[i]);
//		i++;
//	}
//	printf("%d\n", strlen("iamagoodboy\0"));
//	return 0;
//}
////结果：
////第0数据的值为：0
////第1数据的值为：1
////第2数据的值为：2
////第3数据的值为：3
////第4数据的值为：4
////第5数据的值为：5
////第6数据的值为：6
////第7数据的值为：7
////第8数据的值为：8
////说明下表从0开始

//int main()
//{
//
//	//操作符
//	//1、算术操作符：
//	int a = 5 / 2;//除法
//	int b = 5 % 2;//取余
//	printf("a=%d,b=%d\n", a, b);
//	//2、移位操作符 二进制位 空位补0
//	//左移  <<
//	int c = 1;
//	int d= c<< 1; 
//	printf("c左移一位的值为%d\n", d);//右移同理
//	printf("c=%d\n", c);//c本身的值是不会变的
//	//3、（二进制）位操作：&按位与、|按位或 、^按位异或
//	int e = 3;//011
//	int f = 5;//101
//	int g = e & f;//001
//	printf("g=%d\n", g); 
//	//4、赋值操作符
//	int h = 1;//"="就是赋值操作符之一；注意“==”是判断相等
//	h = h + 10;//
//	h += 10;//运算结果与上式相同
//	//还有-=、*=、/=、&=、|=、>>=、<<=，这些叫做复合赋值符
//	
//	//5、单目操作符
//	int i = 10;
//	//! 
//	printf("i=%d\n", i);
//	printf("!i=%d\n", !i);//"!"是逻辑反操作符，在c中，0表示假，非零数表示真
//	//单目还有+、-、sizeof
//	// sizeof()：计算的是变量、类型所占空间的大小，单位：字节
//	printf("%d\n",sizeof(i));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof i);//以上三种sizeof的表示都可以，但最后一种只有变量才可以去掉括号 即sizeof int 不可用   
//	//sizeof还可以计算数组的大小
//	int arr[10] = { 10 };
//	printf("%d\n", sizeof arr);//结果：40
//	//&(后面讲)、~（对一个数的二进制按位取反）、--、++、*、(类型)
//	//单目操作符（类型）表示强制类型转换
//
//	//~
//	int aa =2;//aa占用四个字节，32个bit位，即00000000000000000000000000000010
//	int bb = ~aa;//按位取反得11111111111111111111111111111101，注意这是补码，要转化为原码，结果是-3
//	printf("%d\n", bb);//-3
//
//	//涉及原码、反码、补码的知识
//	
//	//--、++
//	int cc = 10;
//	int dd = cc++;
//	printf("cc=%d,cc++=%d\n",cc, dd);//11 10
//	int ee = ++cc;
//	printf("cc=%d,cc++=%d\n", cc, ee);//12 12
//	//可以发现：dd=cc++是先dd=cc赋值，后cc=cc+1，即先赋值后自增
//	//                      ee=++cc是先cc=cc+1，后ee=cc赋值，即先自增后赋值
//	
//	//*是间接访问操作符（解引用操作符）（后面讲）
//
//	//强制类型转换（不建议使用）
//	int qq =(int) 3.14;//进行强制类型转换才不会发出警告
//	printf("qq=%d\n", qq);
//
//	//6、双目操作符 
//	//a+b “+”是双目操作符有两个操作数
//	
//	//7、三目操作符
//
//
//	//8、关系操作符：>、<、>=、<=、==、!=(不相等)
//
//	//9、逻辑操作符：&&逻辑与、||逻辑或 
//
//	//10、条件操作符(三目操作符)：exp1?exp2:exp3
//	//若表表达式1结果为真，表达式2的结果为整个表达式的结果；反之表达式3的结果为整个表达式的结果
//	int ww = 10;
//	int  yy = 11;
//	int max = 0;
//	max = (ww >yy ?ww :yy);
//	printf("max=%d\n", max);
//
//	//11、逗号表达式：exp1,exp2,exp3,...
//
//	//12、下标引用操作符：[]；
//	//13、函数调用操作符：();
//	//14、结构成员：.、->
//
//
//	return 0;
//}

//test.c
//void test()
//{
//	//static：静态变量， 
//	static int num2 =1;//静态变量，static修饰局部变量，变量的生命周期延长了，出作用域也不再销毁
//	num2++;
//	printf("num2=%d\n", num2);//结果：输出2、3、4、5、6
//}
////声明外部函数
//extern int add(int, int);
//int main()
//{
//	//关键字
//	auto int a = 0;//局部变量 -自动变量，局部变量前面有auto，一般省略掉
//	//int定义的符号是有符号的 全称是signed int;
//	//unsigned int是无符号的
//	//struct是结构体关键字
//	//union是联合体/共用体
//	register int b = 1;//建议把b定义成寄存器变量
//	//typedef：类型定义
//	typedef unsigned int u_int;//相当于给unsigned int 重新起个名/别名
//	u_int num1 = 1;
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	//static修饰全局变量改变的是作用域，让静态的全局变量只能在自己所在的源文件内部使用
//	//extern-声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//
//	//static还能修饰函数，作用为限制外部函数的作用域，改变了函数的链接属性
//	//正常的函数是具有外部链接属性的，即外部源文件希望使用该源函数时只需要声明就可以使用
//	//用static修饰后外部连接属性就变为内部链接属性
//	int yy = 10;
//	int zz = 20;
//	int sum = add(yy, zz);//使用外部函数时需要声明
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

////test.c
//#define max 100//#define定义标识符常量
//#define MAX(X,Y) (X>Y?X:Y) //还可以定义宏-带参数
//int main()
//{
//	//#define用于定义常量和宏
//
//	//定义常量
//	int aaa = max;
//	printf("aaa=%d\n", aaa);
//
//	//利用宏来实现比大小
//	int ab = 10;
//	int cd = 20;
//	int	 maxx = MAX(ab, cd);//maxx=(X>Y?X:Y)
//	printf("maxx=%d\n", maxx);
//	return 0;
//}


//int main()
//{
//	//指针
//	int a = 10;//4个字节
//	//指针变量专门用来存放地址
//	int* p = &a;//存放a的地址
//	printf("p=%p\n", p);
//	//利用&取地址操作符获取地址
//	printf("&a=%p\n", &a);//%p
//	//打印结果（十六进制）：005AFDF0
//	*p = 20;//*——解引用操作符，将p地址对应的内容赋值20 
//	printf("a=%d\n", a);//a=20
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("指针变量的大小为：%d个字节\n", sizeof(pc));
//	printf("%c\n", ch);
//
//	return 0;
//}

////创建一个结构体类型
//struct book//book是类型名
//{
//	char name[20];//C程序设计
//	short price;//55
//};//此处的分号不可缺少
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量 
//	struct book b1 = {"C语言程序设计",55};
//	struct book* pb = &b1;
//	//利用地址pd打印书名和价格
//	//"."操作符用于结构体变量，结构体变量.成员
//	printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);
//	//还有种写法
//	//"->"					结构体指针->成员
//	printf("书名：%s\n", pb->name);
//	printf("价格：%d\n",pb->price);
//	//最普通的写法
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 15;
//	//b1.name="c++";不能这么写，因为name是个数组不是变量，name代表地址
//	strcpy(b1.name,"c++");//strcpy-string copy是字符串拷贝,是个库函数，其头文件是string.h
//	printf("修改后的价格：%d\n", b1.price);
//	printf("修改后的书名：%s\n", b1.name);
//	return 0;
//}