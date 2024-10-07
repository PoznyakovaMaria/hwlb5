#include <locale.h>      
#include <stdio.h> 
#include <math.h>
#define _USE_MATH_DEFINES
#define d 1

void main() {

	setlocale(LC_ALL, "RUS");
	float x, y;
	puts("Введите x");
	scanf_s("%f", &x);
	puts("Введите y");
	scanf_s("%f", &y);
	float cos3 = pow(cos(y), 3);
	float chisl = cos3 + pow(2, x) * d;
	float sin2 = pow(sin(x), 2);
	float znam = exp(y) + log(sin2 + 7.4);
	printf("Выражение равно: %f", chisl / znam);
}