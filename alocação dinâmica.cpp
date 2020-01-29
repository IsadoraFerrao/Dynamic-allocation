#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main (){
	int *vet, tamanho, i; /*para ser dinâmico tem que ter ponteiro === em tempo de execução */
	printf("Digite o tamanho: ");
	scanf("%d", &tamanho);
	vet=(int*)malloc(tamanho*sizeof(int)); /*tamanho para inteiro*/
	for(i=0; i<tamanho; i++){
		printf("Digite o vetor %d: ", i);
		scanf("%d", &vet[i]);
	}
	for(i=0; i<tamanho; i++){
		printf("%d ", vet[i]);
	}
	
	free(vet);
}



