/*********************************************************************
 * 文件: SortQuick.c
 * 作者: Ray1024
 * 日期: 2019.1.30
 * 简介: 排序算法——快速排序
 **********************************************************************/

#include <stdio.h>

void SortQuick(int a[], int left, int right)
{
	if (left < right)
	{
		int i = left;
		int j = right;
		int x = a[left];

		while (i < j)
		{
			while (a[j] >= x && i < j)
			{
				j--;
			}
			if (i < j)
			{
				a[i++] = a[j];
			}
			while (a[i] <= x && i < j)
			{
				i++;
			}
			if (i < j)
			{
				a[j--] = a[i];
			}
		}
		a[i] = x;
		SortQuick(a, left, i - 1);
		SortQuick(a, i + 1, right);
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
	SortQuick(a, 0, sizeof(a) / sizeof(int) - 1);
	printf("排序后：");
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
