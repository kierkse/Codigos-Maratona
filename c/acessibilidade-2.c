#include <stdio.h>

int main() {
	double H, C, L;
	double i;
	
	do{
		scanf("%lf",&H);
		scanf("%lf",&C);
		scanf("%lf",&L);
		i=H*100.0/C;
		if (!(H==0.0 && C==0.0 && L==0.0))
			if (i<=8.334 && L>=0.8)
				printf("PROJETO SIMPLES\n");
			else
				printf("PROJETO ESPECIAL\n");
	} while (!(H==0.0 && C==0.0 && L==0.0));
	
	return 0;
}
