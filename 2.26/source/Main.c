#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("��J2�Ӿ�ơA�P�_�Ĥ@�Ӿ�ƬO�_���ĤG�Ӿ�ƪ�����");
	scanf_s("%d%d", &num1, &num2);

	if (num1 > num2)
	{
		if (num1%num2 == 0)
		{
			printf("%d��%d������\n", num1, num2);
		}
		else
		{
			printf("%d����%d������\n", num1, num2);
		}
	}
	else
	{
		printf("%d����%d������\n", num1, num2);
	}
	system("pause");
	return 0;
}