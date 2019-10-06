#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("块计耞ㄤ计┪案计");
	scanf_s("%d", &num);

	if(num % 2 == 0)
	{
		printf_s("%d案计", num);
	}
	else
	{
		printf_s("%d计", num);
	}
	system("pause");
	return 0;
}