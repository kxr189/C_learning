#include<stdio.h>
#include<string.h>

//#define   a   100
////#define����ı�ʶ������
//
//	//ö�ٳ���snum
//	//ö�٣�һһ�о�
//enum sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum sex SEX = MALE;
//
//	const  int  num = 8;//const:������ num��ֵ���ɸı�
//	//const���γ�����  num�����Ǳ�����ֻ�����˳�����
//
//	3;//���泣��
//
//	printf("%d\n", a);
//
//	printf("%d\n", MALE);//Ĭ��0
//	printf("%d\n", FEMALE);//Ĭ��1
//	printf("%d\n", SECRET);//Ĭ��2
//	printf("%d\n", SEX);
//
//	return 0;
//}


//int main()
//{
//	//�ַ������Էŵ�һ����������
//	char str1[ ] = "abc";
//	char str2[ ] = { 'a' ,'b', 'c' ,'\0'};//ע����Ҫ������Ǹ�ת���ַ�
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("%d\n", strlen(str1));
//	printf("%d\n", strlen(str2));
//	return 0;
//}

//int main()
//{
//	//ת���ַ�
//	printf("abc\n");//"\n"����
//	printf("a\tb");//"\t"ˮƽ�Ʊ��� �����൱�ڼ����ϵ�Tab��   
//	printf("\?");//"\?"��ʾ����
//	printf("\a");//"\a"����������ʾ����
//	printf("\\");//"\\"��ʾ\��
//	printf("\'\n");//"\'"��ʾ'��
//	printf("%c\n",'\32');//"\32"�������˽������֣�32��Ϊ�˽��ƴ������Ǹ�ʮ����������ΪASCII��ֵ��Ӧ���ַ����˽���32->ʮ����26->ASCII��Ӧ�ķ���
//	printf("%c", '\x61');//"/xdd"��dd��ʾ����ʮ����������
//
//	//ע��
//	/*ע
//	
//	
//	��*/
//
//	return 0;
//}


//int main()
//{
//	//ѡ�����
//	int safe = 0;
//	printf("�����������н(��λ����Ԫ):");
//	scanf("%d", &safe);
//	if  (safe > 30 || safe == 30)
//		printf("���Ǹ��ɹ���ʿ��\n");
//	else
//		printf("����ҪŬ���أ�\n");
//	return 0;
//} 

//int main()
//{
//	//ѭ���ṹ while���
//	int mon = 0;
//	while (mon<500)
//	{
//		printf("��������׬��Ǯ������Ԫ����");
//		scanf("%d", &mon);
//	}
//	return 0;
//}

////���������Զ��庯���Ϳ⺯��
////�Զ��庯��
//int add(int x, int y)//add�Ǻ�������int x��int y�Ǻ����Ĳ���
//{
//	//������
//	int sum;
//	sum = x + y;
//	return sum;//���ؽ��
//}
//int main()
//{
//	//���ú���
//	int a = 0;
//	int b = 0;
//	int sum;
//	printf("������a��b��");
//	scanf("%d%d", &a, &b);
//   sum=	add(a, b);
//   printf("a+b=%d", sum);
//   return 0;
//}

//int main()
//{
//	//����:һ����ͬ�������ݵļ���
//	int i = 0;
//	int s[10] = {0,1,2,3,4,5,6,7,8,9};//������±��0��ʼ 
//	while (i<9)
//	{
//		printf("��%d���ݵ�ֵΪ��%d \n",i,s[i]);
//		i++;
//	}
//	printf("%d\n", strlen("iamagoodboy\0"));
//	return 0;
//}
////�����
////��0���ݵ�ֵΪ��0
////��1���ݵ�ֵΪ��1
////��2���ݵ�ֵΪ��2
////��3���ݵ�ֵΪ��3
////��4���ݵ�ֵΪ��4
////��5���ݵ�ֵΪ��5
////��6���ݵ�ֵΪ��6
////��7���ݵ�ֵΪ��7
////��8���ݵ�ֵΪ��8
////˵���±���0��ʼ

//int main()
//{
//
//	//������
//	//1��������������
//	int a = 5 / 2;//����
//	int b = 5 % 2;//ȡ��
//	printf("a=%d,b=%d\n", a, b);
//	//2����λ������ ������λ ��λ��0
//	//����  <<
//	int c = 1;
//	int d= c<< 1; 
//	printf("c����һλ��ֵΪ%d\n", d);//����ͬ��
//	printf("c=%d\n", c);//c������ֵ�ǲ�����
//	//3���������ƣ�λ������&��λ�롢|��λ�� ��^��λ���
//	int e = 3;//011
//	int f = 5;//101
//	int g = e & f;//001
//	printf("g=%d\n", g); 
//	//4����ֵ������
//	int h = 1;//"="���Ǹ�ֵ������֮һ��ע�⡰==�����ж����
//	h = h + 10;//
//	h += 10;//����������ʽ��ͬ
//	//����-=��*=��/=��&=��|=��>>=��<<=����Щ�������ϸ�ֵ��
//	
//	//5����Ŀ������
//	int i = 10;
//	//! 
//	printf("i=%d\n", i);
//	printf("!i=%d\n", !i);//"!"���߼�������������c�У�0��ʾ�٣���������ʾ��
//	//��Ŀ����+��-��sizeof
//	// sizeof()��������Ǳ�����������ռ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n",sizeof(i));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof i);//��������sizeof�ı�ʾ�����ԣ������һ��ֻ�б����ſ���ȥ������ ��sizeof int ������   
//	//sizeof�����Լ�������Ĵ�С
//	int arr[10] = { 10 };
//	printf("%d\n", sizeof arr);//�����40
//	//&(���潲)��~����һ�����Ķ����ư�λȡ������--��++��*��(����)
//	//��Ŀ�����������ͣ���ʾǿ������ת��
//
//	//~
//	int aa =2;//aaռ���ĸ��ֽڣ�32��bitλ����00000000000000000000000000000010
//	int bb = ~aa;//��λȡ����11111111111111111111111111111101��ע�����ǲ��룬Ҫת��Ϊԭ�룬�����-3
//	printf("%d\n", bb);//-3
//
//	//�漰ԭ�롢���롢�����֪ʶ
//	
//	//--��++
//	int cc = 10;
//	int dd = cc++;
//	printf("cc=%d,cc++=%d\n",cc, dd);//11 10
//	int ee = ++cc;
//	printf("cc=%d,cc++=%d\n", cc, ee);//12 12
//	//���Է��֣�dd=cc++����dd=cc��ֵ����cc=cc+1�����ȸ�ֵ������
//	//                      ee=++cc����cc=cc+1����ee=cc��ֵ������������ֵ
//	
//	//*�Ǽ�ӷ��ʲ������������ò������������潲��
//
//	//ǿ������ת����������ʹ�ã�
//	int qq =(int) 3.14;//����ǿ������ת���Ų��ᷢ������
//	printf("qq=%d\n", qq);
//
//	//6��˫Ŀ������ 
//	//a+b ��+����˫Ŀ������������������
//	
//	//7����Ŀ������
//
//
//	//8����ϵ��������>��<��>=��<=��==��!=(�����)
//
//	//9���߼���������&&�߼��롢||�߼��� 
//
//	//10������������(��Ŀ������)��exp1?exp2:exp3
//	//��������ʽ1���Ϊ�棬����ʽ2�Ľ��Ϊ��������ʽ�Ľ������֮����ʽ3�Ľ��Ϊ��������ʽ�Ľ��
//	int ww = 10;
//	int  yy = 11;
//	int max = 0;
//	max = (ww >yy ?ww :yy);
//	printf("max=%d\n", max);
//
//	//11�����ű���ʽ��exp1,exp2,exp3,...
//
//	//12���±����ò�������[]��
//	//13���������ò�������();
//	//14���ṹ��Ա��.��->
//
//
//	return 0;
//}

//test.c
//void test()
//{
//	//static����̬������ 
//	static int num2 =1;//��̬������static���ξֲ����������������������ӳ��ˣ���������Ҳ��������
//	num2++;
//	printf("num2=%d\n", num2);//��������2��3��4��5��6
//}
////�����ⲿ����
//extern int add(int, int);
//int main()
//{
//	//�ؼ���
//	auto int a = 0;//�ֲ����� -�Զ��������ֲ�����ǰ����auto��һ��ʡ�Ե�
//	//int����ķ������з��ŵ� ȫ����signed int;
//	//unsigned int���޷��ŵ�
//	//struct�ǽṹ��ؼ���
//	//union��������/������
//	register int b = 1;//�����b����ɼĴ�������
//	//typedef�����Ͷ���
//	typedef unsigned int u_int;//�൱�ڸ�unsigned int ���������/����
//	u_int num1 = 1;
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	//static����ȫ�ֱ����ı�����������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	//extern-�����ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//
//	//static�������κ���������Ϊ�����ⲿ�����������򣬸ı��˺�������������
//	//�����ĺ����Ǿ����ⲿ�������Եģ����ⲿԴ�ļ�ϣ��ʹ�ø�Դ����ʱֻ��Ҫ�����Ϳ���ʹ��
//	//��static���κ��ⲿ�������Ծͱ�Ϊ�ڲ���������
//	int yy = 10;
//	int zz = 20;
//	int sum = add(yy, zz);//ʹ���ⲿ����ʱ��Ҫ����
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

////test.c
//#define max 100//#define�����ʶ������
//#define MAX(X,Y) (X>Y?X:Y) //�����Զ����-������
//int main()
//{
//	//#define���ڶ��峣���ͺ�
//
//	//���峣��
//	int aaa = max;
//	printf("aaa=%d\n", aaa);
//
//	//���ú���ʵ�ֱȴ�С
//	int ab = 10;
//	int cd = 20;
//	int	 maxx = MAX(ab, cd);//maxx=(X>Y?X:Y)
//	printf("maxx=%d\n", maxx);
//	return 0;
//}


//int main()
//{
//	//ָ��
//	int a = 10;//4���ֽ�
//	//ָ�����ר��������ŵ�ַ
//	int* p = &a;//���a�ĵ�ַ
//	printf("p=%p\n", p);
//	//����&ȡ��ַ��������ȡ��ַ
//	printf("&a=%p\n", &a);//%p
//	//��ӡ�����ʮ�����ƣ���005AFDF0
//	*p = 20;//*���������ò���������p��ַ��Ӧ�����ݸ�ֵ20 
//	printf("a=%d\n", a);//a=20
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("ָ������Ĵ�СΪ��%d���ֽ�\n", sizeof(pc));
//	printf("%c\n", ch);
//
//	return 0;
//}

////����һ���ṹ������
//struct book//book��������
//{
//	char name[20];//C�������
//	short price;//55
//};//�˴��ķֺŲ���ȱ��
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ����� 
//	struct book b1 = {"C���Գ������",55};
//	struct book* pb = &b1;
//	//���õ�ַpd��ӡ�����ͼ۸�
//	//"."���������ڽṹ��������ṹ�����.��Ա
//	printf("������%s\n", (*pb).name);
//	printf("�۸�%d\n", (*pb).price);
//	//������д��
//	//"->"					�ṹ��ָ��->��Ա
//	printf("������%s\n", pb->name);
//	printf("�۸�%d\n",pb->price);
//	//����ͨ��д��
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 15;
//	//b1.name="c++";������ôд����Ϊname�Ǹ����鲻�Ǳ�����name������ַ
//	strcpy(b1.name,"c++");//strcpy-string copy���ַ�������,�Ǹ��⺯������ͷ�ļ���string.h
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	printf("�޸ĺ��������%s\n", b1.name);
//	return 0;
//}