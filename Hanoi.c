/*********************************************************************
 * 文件: hanoi.c
 * 作者: Ray1024
 * 日期: 2019.1.28
 * 简介: n层汉诺塔问题
 *********************************************************************/

#include <stdio.h>

// 用来统计总的次数
int times = 0;

/* 整个过程可以分为3部分
 * 前——中——后
 * 前: 将n-1个盘子从A移到B
 * 中: 移动最大的盘子
 * 后: 将n-1个盘子从B移到C
 * 依次递归执行
 */
void hanoi(int n, char from, char buffer, char to)
{
	if (n > 0)
	{
		// 前: 将n-1个盘子从A移到B
		hanoi(n - 1, from, to, buffer);
		// 中: 移动最大的盘子
		printf("第%d次移动：%d号盘从%c移到%c\n", ++times, n, from, to);
		// 后: 将n-1个盘子从B移到C
		hanoi(n - 1, buffer, from, to);
	}
}

int main()
{
	hanoi(2, 'A', 'B', 'C');

	return 0;
}
