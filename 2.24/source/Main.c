#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("��J�@�ӼƦr�A�P�_�䬰�_�Ʃΰ���");
	scanf_s("%d", &num);

	if(num % 2 == 0)
	{
		printf_s("%d������", num);
	}
	else
	{
		printf_s("%d���_��", num);
	}
	system("pause");
	return 0;
}