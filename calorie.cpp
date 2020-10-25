#include <stdio.h>
struct calorie
{
	char sex;
	int weight;
	int height;
	int exercise;
	int BMR;
	int age;
}BMR;

void print()
{
	struct calorie* bmr = &BMR;
	printf("Enter your weight : ");
	scanf_s("%d", &bmr->weight);
	printf("\n");

	printf("Enter your height : ");
	scanf_s("%d", &bmr->height);
	printf("\n");

	printf("Enter your age : ");
	scanf_s("%d", &bmr->age);
	printf("\n");

	printf("Type[1]--> Do not exercise.\n");
	printf("Type[2]--> Exercise 1-3 times a week.\n");
	printf("Type[3]--> Exercise 3-5 times a week.\n");
	printf("Type[4]--> Exercise 6-7 times a week.\n");
	printf("Type[5]--> Exercise every day, morning and evening.\n");
	printf("Enter your exercise : ");
	scanf_s("%d", &bmr->exercise);
	printf("\n");
}

void check(char sex, int weight, int height, int exercise, int age)
{
	struct calorie* bmr = &BMR;
	if (bmr->sex == 77)
	{
		bmr->BMR = (66 + (13.7 * bmr->weight) + (5.00 * bmr->height)) - (6.8 * bmr->age);
		if (bmr->exercise == 1) { bmr->BMR *= 1.2; }
		if (bmr->exercise == 2) { bmr->BMR *= 1.375; }
		if (bmr->exercise == 3) { bmr->BMR *= 1.55; }
		if (bmr->exercise == 4) { bmr->BMR *= 1.725; }
		if (bmr->exercise == 5) { bmr->BMR *= 1.9; }
		printf("Your BMR : %d\n", bmr->BMR);
	}
	if (bmr->sex == 70)
	{
		bmr->BMR = (665 + (9.6 * bmr->weight) + (1.8 * bmr->height)) - (4.7 * bmr->age);
		if (bmr->exercise == 1) { bmr->BMR *= 1.2; }
		if (bmr->exercise == 2) { bmr->BMR *= 1.375; }
		if (bmr->exercise == 3) { bmr->BMR *= 1.55; }
		if (exercise == 4) { bmr->BMR *= 1.725; }
		if (exercise == 5) { bmr->BMR *= 1.9; }
		printf("Your BMR : %d\n", BMR);
	}
}

int main()
{
	struct calorie* bmr = &BMR;
	printf("Type[M]--> Male\n");
	printf("Type[F]--> Female\n");
	printf("Enter your sex : ");
	scanf_s("%c", &bmr->sex,99);
	printf("\n");

	if (bmr->sex == 'F' || bmr->sex == 'M')
	{
		print();
		check(bmr->sex, bmr->weight, bmr->height, bmr->exercise, bmr->age);
	}
	else 
    	{
		printf("\\\\\\\\\\ Please enter \"M\" or \"F\" Ouppercase characters /////.\n\n");
	}
	return 0;
}
