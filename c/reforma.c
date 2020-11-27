#include <stdio.h>

int main() {
	long int N, Q, soma;
	long int lajota[1000];
	int i, j;
	
	scanf("%ld",&N);
	scanf("%ld",&Q);
	
	for (i=0;i<Q;i++){
		scanf("%ld",&lajota[i]);
	}
	
	for (i=0;i<Q;i++){
		soma = 0;
		for (j=i;j<Q;j++){
			soma += lajota[j];
			if (soma >= N)
				break;
		}
		if (soma == N) {
			printf("SIM");
			break;
		}
	}
	
	if (i==Q)
		printf("NAO");
	
	return 0;
}
