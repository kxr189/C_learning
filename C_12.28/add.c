//add.c
int g_val = 2020;
//static int g_val = 2020;//全局变量，如果用static修饰就无法在别的地方使用
 int add(int x, int y)//用static修饰，该函数就无法在其他源文件中使用
{
	int z = x + y;
	return z;
}
