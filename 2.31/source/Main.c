#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int j;
	printf("number\tsquare\tcube\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%d\t%d\t%d\n",i,i*i,i*i*i);
	}

	system("pause");
	return 0;
}