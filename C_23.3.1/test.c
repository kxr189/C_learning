#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//执行结果相同，说明数组名就是首元素地址
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);//取出的是数组的地址，与首元素地址相同，
//	//结果相同但意义不同，首元素地址加1指向第二个元素的地址，数组地址加1指向下一个数组的地址
//	//但需要注意以下两种情况
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1、此处的 sizeof(arr) 计算的是整个数组的大小，单位是字节
//	//2、&数组名，取出的是整个数组的地址
//	return 0;
// }

//void bubble_sort(int* arr,int sz)
//{
//	//确定冒泡排序的趟数，即数组元素个数
//	int i = 0;
//	int mid = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组已经满足升序
//		int j = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				mid = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = mid;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;//经过一趟排序，不存在数据交换，表示数组已经有序
//	}
//}

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr数组进行冒泡排序，升序
//	bubble_sort(arr,sz);//对数组arr进行传参，只是传去首地址
//	//打印排序后的数组
//	for (int k = 0; k < sz; k++)
//		printf("%d ", arr[k]);
//	return 0;
//}