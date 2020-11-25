#pragma once
#include<stdio.h>

const char* Info(int i)
{
	const char* info[] = { "Tutor","Pay/Hours","Hours","Total","Pay","Change","Error","Restart to try again" };
	return info[i];
}

int tutor()
{
	int i;
	do
	{
		printf("Enter %s : ", Info(0));
		scanf_s("%d", &i);
	} while (i <= 0);



	return i;
}

int payhours()
{
	int Payhours;
	do
	{
		printf("%s : ", Info(1));
		scanf_s("%d", &Payhours);

	} while (Payhours <= 0);

	return Payhours;
}

int hours()
{
	int hours;
	do
	{
		printf("%s : ", Info(2));
		scanf_s("%d", &hours);

	} while (hours <= 0);

	return hours;
}

void main_1()
{


	struct infomation
	{
		int i;
		int j[20];
		int Payhours;
		int hours;
		int total;
		double pay;
		double change;

	}Tutor;

	int k = 0;
	//จำนวนติวเตอร์

	Tutor.i = tutor();

	if (Tutor.i >= 1 && Tutor.i <= 20)
	{

		while (k < Tutor.i)
		{

			Tutor.j[k] = k + 1;

			printf("%d.%s\n", Tutor.j[k], Info(0));

			Tutor.Payhours = payhours();

			Tutor.hours = hours();

			Tutor.total = Tutor.Payhours * Tutor.hours;
			printf("%s = %d\n", Info(3), Tutor.total);

			do
			{
				printf("%s : ", Info(4));
				scanf_s("%lf", &Tutor.pay);

			} while (Tutor.pay < Tutor.total);

			if (Tutor.pay > Tutor.total)
			{
				printf("%s = %.2lf\n", Info(5), Tutor.pay - Tutor.total);
			}

			if (Tutor.pay == Tutor.total)
			{
				printf("No %s\n", Info(5));
			}

			printf("\n");

			k++;

		}
	}
	else
	{
		printf("%s\n", Info(6));
		printf("%s", Info(7));
	}




}
