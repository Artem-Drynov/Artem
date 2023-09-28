#include <stdio.h>
#include <math.h>
#include <locale.h>

float calculateGrav(float mass1, float mass2) {
    const float G = 6.67430e-11;
    const float R = 6;  
    float Grav = (G * mass1 * mass2) / pow(R, 2);
    return Grav;
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    float mass1, mass2;
    printf("������� ����� ������� ����: ");
    scanf_s ("%f", &mass1);
    printf("������� ����� ������� ����: ");
    scanf_s ("%f", &mass2);
    float Grav = calculateGrav(mass1, mass2);
    printf("���� ����������: %.8f\n", Grav);
    return 0;
}