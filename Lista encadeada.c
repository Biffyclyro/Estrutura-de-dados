#include<stdio.h>
#include<stdlib.h>

struct lista{
	int info;
	struct lista *prox;
};

typedef struct lista Lista;

Lista *insere(Lista *l, int i);
void imprime(Lista *l);

main(){
	Lista *l;
	l = NULL;
	l = insere(l,43);
	l = insere(l,73);
	l = insere(l,30);
	l = insere(l,12);
	imprime(l);
//	l = retira(l, 75);
	printf("\n");
	imprime(l);
	getch();	
}

Lista *insere(Lista *l, int i){
	Lista *novo;
	novo = (Lista*) malloc(sizeof(Lista));
	novo -> info = i;
	novo -> prox l;
	return novo;
}

void imprime(Lista *l){
	Lista *p;
	for (p=1; p!=NULL; p=p -> prox){
		printf("%d - ", p -> info);
	}
}
