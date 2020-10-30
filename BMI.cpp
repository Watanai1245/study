#include <stdio.h>
struct Mass
{
	float weight;
	float height;
	float BMI;
	float x;
}BMi;

void print(float BMI)
{
	struct Mass* bmi = &BMi;

	if (bmi->BMI < 18.50 )
	{
		printf("Underweight\n");
	}
	if (bmi->BMI >= 18.50 && bmi->BMI <= 22.90)
	{
		printf("Normal range\n");
	}
	if (bmi->BMI >= 23.00 && bmi->BMI <= 24.90)
	{
		printf("Overweight\n");
	}
	if (bmi->BMI >= 25.00 && bmi->BMI <= 29.90)
	{
		printf("Pre obese\n");
	}
	if (bmi->BMI >=30.00)
	{
		printf("obese\n");
	}

}

void check(float weight, float height ,float x)
{
	struct Mass* bmi = &BMi;
	bmi->BMI = (bmi->weight) / ((bmi->x)*(bmi->x));
	printf("Your BMI : %.2f\n\n", bmi->BMI);
}

int main()
{
	struct Mass* bmi = &BMi;
	printf("\\\\Body Mass Index//\n\n");

	printf("Enter your weight(kg) : ");
	scanf_s("%f", &bmi->weight);
	printf("\n");

	printf("Enter your height(cm) : ");
	scanf_s("%f", &bmi->height);
	printf("\n");

	bmi->x = bmi->height / 100.000000;

	check(bmi->weight, bmi->height ,bmi->x);
	print(bmi->BMI);

	return 0;  
}