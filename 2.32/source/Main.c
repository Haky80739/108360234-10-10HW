#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight;
	float height;
	float BMI;
	printf("�Х���J����(Cm)�A�A��J�魫(Kg)�A�N�p��BMI�ȤΧP�_�O�_���d");
	scanf_s("%f%f",&height,&weight);
	BMI = weight / (height / 100)/(height / 100);
	printf("BMI=%.2f\n", BMI);
	if(BMI >= 30)
	{
		printf("�z���魫�W���F\n");
	}
	if (BMI >= 25 && BMI<30)
	{
		printf("�z���魫�L���F\n");
	}
	if (BMI >=18.5&& BMI < 25)
	{
		printf("�z���魫���`\n");
	}
	if (BMI < 18.5)
	{
		printf("�z���魫�L��\n");
	}
	
	system("pause");
	return 0;
}