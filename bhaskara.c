#include <stdio.h>
#include <math.h>

int main() {
	
	float a, b, c;
	
	printf("Insira os tr\210s coeficientes da equa\207\706o, separados por espa\207o:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0) {
		printf("Valor de a inv\240lido (a deve ser diferente de zero)");
	}
	else
	{
		float delta = pow(b, 2) - 4 * a * c;
		
		if (delta < 0) {
			printf("N\706o existe solu\207\706o real");
		}
		else if (delta == 0) {
			float x = (- b) / (2.0 * a);
			printf("\751nica solu\207\706o:\nx = %.2f", x);
		}
		else {
			float raiz = sqrt(delta);
			float x1 = (- b + raiz) / (2.0 * a);
			float x2 = (- b - raiz) / (2.0 * a);
			printf("As duas solu\207\744es:\nx = %.2f ou x = %.2f", x1, x2);
		}
	}
	
	return 0;
}
