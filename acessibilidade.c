#include <stdio.h>

int main() {
	double H, C, L;
	double i;
	
	scanf("%lf",&H);
	scanf("%lf",&C);
	scanf("%lf",&L);
	
	while (!(H==0.0 && C==0.0 && L==0.0)) {
		
		i=H*100.0/C;
		if (i<=8.334 && L>=0.8)
			printf("PROJETO SIMPLES\n");
		else
			printf("PROJETO ESPECIAL\n");
		
		scanf("%lf",&H);
		scanf("%lf",&C);
		scanf("%lf",&L);
	}
	
	return 0;
}
