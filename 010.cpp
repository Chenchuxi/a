#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//int year_(int i)
//{
//	if (i % 4 == 0 || (i % 100 != 0 && i % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 0; year <=2000; year++)
//	{
//		int n = year_(year);
//		if (n == 1)
//		{
//			printf(" % d", year);
//		}
//	}
//
//
//	return 0;
//}

//int find(int n_, int sz, int arr[])
//{
//
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n_ < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n_ > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return arr[mid];
//		}
//
//	}
//	return arr[mid];
//}
//
//int main()
//{
//	int n = 7;
//	printf("请输入：");
//	scanf("%d", &n);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	printf("已找到数为%d", find(n, sz, arr));//链式调用
//	return 0;
//}


//#include "find.h"
//
//int main()
//{
//	int n = 7;
//	printf("请输入：");
//	scanf("%d", &n);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("已找到数为%d", find(n, sz, arr));//链式调用
//	return 0;
//}

#include "find.h"

int main()
{
	int a = 0;
	int b = 8;
	int sum = add(a, b);
	printf("%d", sum);

}