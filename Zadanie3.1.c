#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int a, b;
    printf("¬ведите значение a: ");
    scanf_s ("%d", &a);
    printf("¬ведите значение b: ");
    scanf_s ("%d", &b);

    printf("________________________________________\n");
    printf("| %2d * %2d | %3d + %3d | %3d - %3d |\n", a, b,a,b, a, b);
    printf("________________________________________\n");
    printf("|  %2d | %10d | %10d |\n", a*b, a+b, a-b);
    printf("________________________________________\n");

    return 0;
}