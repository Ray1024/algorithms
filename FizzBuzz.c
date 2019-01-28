/*********************************************************************
 * 文件: FizzBuzz.c
 * 作者: Ray1024
 * 日期: 2019.1.25
 * 简介: FizzBuzz问题
 *********************************************************************/

#include <stdio.h>

void FizzBuzz(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz\n");
			}
			else
			{
				printf("Fizz\n");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}

int main()
{
	FizzBuzz(100);
	return 0;
}
