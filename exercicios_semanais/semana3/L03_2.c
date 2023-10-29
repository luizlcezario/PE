#include <stdio.h>
#include <math.h>

float calculaDistancia(float Px1, float Px2, float Py1, float Py2);

int main(void)
{
	float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	printf("Digite as coordenadas X e Y do ponto 1: ");
	scanf("%f", &x1);
	scanf("%f", &y1);
	printf("Digite as coordenadas X e Y do ponto 2: ");
	scanf("%f", &x2);
	scanf("%f", &y2);
	printf("A distancia entre os pontos eh: %0.2f.", calculaDistancia(x1, x2, y1, y2));
}

float calculaDistancia(float Px1, float Px2, float Py1, float Py2)
{
	return sqrt(pow((Px2 - Px1), 2) + (pow((Py2 - Py1), 2)));
}