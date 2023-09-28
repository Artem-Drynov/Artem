#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	float mil, KM;
	printf("¬ведите число миль - ");
	scanf_s ("%f", &mil);
	KM = mil*1.852;
	printf("¬аш результат %f км", KM);
	return 0;
}