#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("块2俱计耞材俱计琌材俱计计");
	scanf_s("%d%d", &num1, &num2);

	if (num1 > num2)
	{
		if (num1%num2 == 0)
		{
			printf("%d%d计\n", num1, num2);
		}
		else
		{
			printf("%dぃ%d计\n", num1, num2);
		}
	}
	else
	{
		printf("%dぃ%d计\n", num1, num2);
	}
	system("pause");
	return 0;
}