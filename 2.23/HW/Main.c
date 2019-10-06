#include <stdio.h>
#include<stdlib.h>
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int M = 0;
	int N = 0;
	int A = 0;
	int B = 0;
int main(void)
{
	printf("叫块3俱计耞程の程");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 > num2)
	{
		A = num1;
		B = num2;
	}
	else
	{
		B = num1;
		A = num2;
	}

	if (num3 > A)
	{
		M = num3;
		N = B;
	}
	else
	{
		M =A;
	}

	if (num3 < B)
	{
		N = num3;
		M = A;
	}
	else
	{
		N = B;
	}
	printf("程%d程%d\n",M,N);
	system("pause");
	return 0;
}