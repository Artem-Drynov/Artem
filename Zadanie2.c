#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("����:\n");
	printf("%12.3u\n", 4);
	printf("%12d\n", 433);
	printf("        _______\n");
	printf("�����:\n");
	printf("%+06.1f", .4 / 433);
	return 0;
}