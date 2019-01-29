/*********************************************************************
 * 文件: SortInsert.c
 * 作者: Ray1024
 * 日期: 2019.1.29
 * 简介: 排序算法——插入排序
 **********************************************************************/

#include <stdio.h>

int SortInsert(int a[], int len)
{
	int j = 0;
	for (int i = 1; i < len; ++i)
	{
		int tmp = a[i];
		for (j = i; a[j - 1] > tmp && j >= 1; --j)
		{
			a[j] = a[j - 1];
		}

		if (i != j)
		{
			a[j] = tmp;
		}
	}
}

int main()
{
	int a[] = {30, 5, 3, 26, 0, 17, 15, 20, 2, 100, 4, 9, 87};
	printf("排序前：");
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	SortInsert(a, sizeof(a) / sizeof(int));
	printf("排序后：");
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
