#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	float n, S, t, V;
	printf("������� ����� �������, ���������� ����� ��������,����� ");
	scanf (" %f %f %f", &n, &S, &t);
	V = (n-1) * S / t;
	printf ("C������� %f ������ � ������", V);
	return 0;
}