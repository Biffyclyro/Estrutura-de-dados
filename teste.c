#include<stdio.h>
#include<stdlib.h>


void func(int *vet, int tam, int vet1[8]);

main(){
	int n, vet1[8], *vet = (int *) malloc(n * sizeof(int)); // primero int diz o tipo de conteudo sendo apontado, o segundo int faz a mesma coisa no escopo interno
	printf("Entre com o tamanho do vetor");
	scanf("%d", &n);
	//printf("%d\n", sizeof(vet1));
	func(vet, n, vet1);	
}

void func(int *vet, int tam, int vet1[8]){
	int i;
	//printf("%d\n", sizeof(vet1));
	printf("Entre com os valores para o vetor\n");
	for(i=0; i<tam; i++)scanf("%d", vet + i);
	for(i=0; i<tam; i++)printf("%d", *(vet + i));
	free(vet);
}
