#include <stdio.h>

int main() {
	long N, soma;
	int Q;
	long lajota[1000];
	int i, j;
	
	scanf("%ld",&N);
	scanf("%d",&Q);
	
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
			printf("SIM\n");
			break;
		}
	}
	
	if (i==Q)
		printf("NAO\n");
	
	return 0;
}
