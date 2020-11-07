#include <stdio.h>

int main() {
	int jogadas;
	int dado;
	int i;
	int muda;
	int jog=0; // 0: luisa; 1:antonio
	int soma[2]={0,0};
	
	scanf("%d",&jogadas);
	
	for (i=0;i<jogadas;i++){
		scanf("%d",&dado);
		soma[jog]+=dado;
		if (dado != 6)
			if (jog == 0)
				jog = 1;
			else
				jog = 0;
	}
	
	if (soma[0]==soma[1])
		printf("EMPATE");
	else
		if (soma[0]>soma[1])
			printf("LUISA %d", soma[0]);
		else
			printf("ANTONIO %d", soma[1]);
	
	return 0;
}
