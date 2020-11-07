#include <stdio.h>

int main() {
	float H, C, L;
	float i;
	
	do{
		scanf("%f",&H);
		scanf("%f",&C);
		scanf("%f",&L);
		i=H*100.0/C;
		if (i<=8.334 && L>=0.8)
			printf("PROJETO SIMPLES\n");
		else
			printf("PROJETO ESPECIAL\n");
	} while (!(H==0.0 && C==0.0 && L==0.0));
	
	return 0;
}
