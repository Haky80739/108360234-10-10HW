#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight;
	float height;
	float BMI;
	printf("請先輸入身高(Cm)，再輸入體重(Kg)，將計算BMI值及判斷是否健康");
	scanf_s("%f%f",&height,&weight);
	BMI = weight / (height / 100)/(height / 100);
	printf("BMI=%.2f\n", BMI);
	if(BMI >= 30)
	{
		printf("您的體重超重了\n");
	}
	if (BMI >= 25 && BMI<30)
	{
		printf("您的體重過重了\n");
	}
	if (BMI >=18.5&& BMI < 25)
	{
		printf("您的體重正常\n");
	}
	if (BMI < 18.5)
	{
		printf("您的體重過輕\n");
	}
	
	system("pause");
	return 0;
}