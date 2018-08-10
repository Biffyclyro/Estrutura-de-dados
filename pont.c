#include<stdio.h>
#include<stdlib.h>

void localiza(int x[5]);
void entra(int x[5]);

main(){
	int vet[5];
	entra(vet);
	localiza(vet);		 
}

void entra(int x[5]){
	printf("Entre com 5 valores\n");
	scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);	
}

void localiza(int x[5]){
	int i, maior=0, *p;
	
	for(p=x; p< x+5; p++)if(*p > maior)maior=*p;
	
	printf("%d",maior);
}

