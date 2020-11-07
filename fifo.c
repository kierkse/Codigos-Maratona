#include <stdio.h>

int main() {
	int N;
	int TC, D;
	int instante=0;
	int TTE=0, TTT=0; // tempo TOTAL de espera, tempo TOTAL de turnaround
	float TME, TMT;
	int i;
	
	scanf("%d",&N);
	
	for (i=0;i<N;i++){
		scanf("%d",&TC);
		TTE += instante - TC;
		//printf("%d ",instante - TC);
		scanf("%d",&D);
		instante += D;
		TTT += instante - TC;
		//printf("%d\n",instante - TC);
	}
	
	//printf("TTE: %d\n",TTE);
	TME = TTE/(float)N;
	TMT = TTT/(float)N;
	
	printf("TME:%.1f\n",TME);
	printf("TMT:%.1f\n",TMT);
	
	return 0;
}
