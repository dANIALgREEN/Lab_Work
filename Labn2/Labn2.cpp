#include <stdio.h>
#include <math.h>


int main()
{
	float x, x_min, x_max, y, a, b, dx, mult1; //Ввод переменных

	do			// Проверка Х минимального на соответствие условию
	{
		printf("Input x_min and x_max : ");
		scanf_s("%f%f", &x_min, &x_max);
	
	} while (x_min >= x_max);

	do			// проверка dх на соответствие условию
	{
		printf("Input dx: ");
		scanf_s("%f", &dx);
	} while (dx >= x_max);

	do			// Прроверка а на соответствие условию
	{
		printf("Input a : ");
		scanf_s("%f", &a);
	} while (a <= 0);

	do			// проверка b на соотвктствие условию
	{
		printf("Input b : ");
		scanf_s("%f", &b);
	} while (b == 0);

	mult1 = 78 * a; //Заранее умножаем для упрощения формулы
	x = x_min; // так как Х меняеется от мин к макс значит ствртует он с мин
		do
		{
			if (dx < x_max) // основной расчёт
			{
				y = powf(cosf((x + mult1) / sqrtf(a)), 2) + cosf(x / (a / b));
				printf("Y is""%2.1f\n", y);
				printf("X is""%2.1f\n", x);
				x = x + dx;
			}
			else
			{
				x = x + dx;
				continue;
			}
		} while (fabs(x) <= fabs(x_max)); // пока Х не будет максимально возможным но не больше максимального

	return 0;
}