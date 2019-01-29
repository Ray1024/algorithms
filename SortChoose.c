/*********************************************************************
 * 文件: SortChoose.c
 * 作者: Ray1024
 * 日期: 2019.1.29
 * 简介: 排序算法——选择排序
 **********************************************************************/

#include <stdio.h>

int SortChoose(int a[], int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < len; ++j)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			int tmp = a[min];
			a[min] = a[i];
			a[i] = tmp;
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
	SortChoose(a, sizeof(a) / sizeof(int));
	printf("排序后：");
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
