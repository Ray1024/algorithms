/*********************************************************************
 * 文件: SearchBinary.c
 * 作者: Ray1024
 * 日期: 2019.1.29
 * 简介: 查找算法——二分查找（折半查找）
 *********************************************************************/

#include <stdio.h>

int SearchBinary(int a[], int value, int left, int right)
{
	if (left <= right)
	{
		int mid = (left + right) / 2;
		int tmpValue = a[mid];
		// 和中间元素比较，如果相等，查找成功
		if (value == tmpValue)
		{
			return mid;
		}
		// 如果小于中间元素，去左边找
		else if (value < tmpValue)
		{
			return SearchBinary(a, value, left, mid - 1);
		}
		// 如果大于中间元素，去右边找
		else
		{
			return SearchBinary(a, value, mid + 1, right);
		}
	}

	// 比较完毕，查找失败
	return -1;
}

int main()
{
	// 注意: 使用二分查找算法的前提是数组元素必须有序
	int a[] = {0, 2, 3, 4, 5, 9, 15, 17, 20, 26, 30, 87, 100};
	int index = SearchBinary(a, 26, 0, sizeof(a) / sizeof(int) - 1);
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("找到26在数组中的位置: %d\n", index);

	return 0;
}
