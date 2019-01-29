/*********************************************************************
 * 文件: SortBubble.c
 * 作者: Ray1024
 * 日期: 2019.1.29
 * 简介: 排序算法——冒泡排序
 **********************************************************************/

#include <stdio.h>

int SortBubble(int a[], int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
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
	SortBubble(a, sizeof(a) / sizeof(int));
	printf("排序后：");
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
