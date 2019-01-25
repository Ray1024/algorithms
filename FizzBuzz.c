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
