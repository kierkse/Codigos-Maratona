#include <stdio.h>

int main() {

   int i = 0, j = 0, N = 0, prox = 0, U[1000], V[1000], erro = 0;
   do {
        printf("Digite a quantidade de convidados: ");
        scanf("%d", &N);
    } while(N < 1 || N > 1000);
	while (prox < N) {
        printf("\nDigite o numero dos %do convidados: ", prox + 1);
        scanf("%d %d", &U[i], &V[i]);
        if ( U[i] >= 0 && U[i] <= N){
        	if (V[i] >= 0 &&V[i] <= N) {
        	prox++;
        	i++;
        }
        }
	}
	i = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if(U[i] == V[j]){
				erro = 1;
	}
	}
	}
	if (erro == 1){
		printf("Lascou...");
	}
	else
    	printf("FESTA!");
    printf("\n");
    return 0;
}
