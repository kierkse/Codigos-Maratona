#include <stdio.h>

int main() {

   float soma = 0.0, mediana = 0.0, media = 0.0, aux = 0.0;
   int alunos[600], moda [600], i = 0, j = 0, N = 0, mod1 = 0, mod2 = 0, preenc = 0, mo = 0, tammoda = 0;
   do {
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &N);
    } while(N < 1 || N > 600);
	while (preenc < N) {
        printf("\nDigite a idade do %do aluno: ", i+1);
        scanf("%d", &alunos[i]);
        if (alunos[i] >= 2 && alunos[i] <= 18) {
        	i++;
        	preenc++;
		}
	}
	i = 0;
	for (i = 0; i < N; i++) {
		soma += alunos[i];
	}
	media = soma / N;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(alunos[i] < alunos[j]){
                aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
    for(i = 0; i < N - 1; i++){
		for(j = i + 1; j < N; j++){
			if(alunos[i] == alunos[j])
				mod1++;
			if(mod1 > mod2) {
				moda [mo] = alunos[i];
				mo++;
				tammoda++;
			}
			mod2 = mod1;
			mod1 = 0;
		}
	}
    if(N % 2)
        mediana = alunos[N/2];
    else
        mediana = (alunos[N/2-1] + alunos[N/2])/2;
    printf("\nMODA=%d", moda[0]);
    for (i = 1; i < tammoda; i++) {
		printf(", %d", moda[i]);
	}
    printf("\nMEDIA=%.2f", media);
    printf("\nMEDIANA=%.2f", mediana);
    return 0;
}
