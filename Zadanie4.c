#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	float n, S, t, V;
	printf("Введите число столбов, расстояние между столбами,время ");
	scanf (" %f %f %f", &n, &S, &t);
	V = (n-1) * S / t;
	printf ("Cкорость %f метров в минуту", V);
	return 0;
}