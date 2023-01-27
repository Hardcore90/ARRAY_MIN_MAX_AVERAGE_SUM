#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[100];
	int n;

	printf("Введите кол-во элементов: ");
	scanf("%i", &n);

	printf("Введите элементы:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%i", &arr[i]);
	}

	int min, max;
	min = max = arr[0];
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}

		sum += arr[i];
	}

	float average = (float)sum / (float)n;

	printf("Минимальный элемент: %i, Максимальный элемент: %i, Сумма элементов: %i, Среднее арифметическое: %f\n", min, max, sum, average);

}