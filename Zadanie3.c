#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	float mil, KM;
	printf("������� ����� ���� - ");
	scanf_s ("%f", &mil);
	KM = mil*1.852;
	printf("��� ��������� %f ��", KM);
	return 0;
}