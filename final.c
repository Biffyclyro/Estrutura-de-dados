#include<stdio.h>
#include<stdlib.h>

struct lista{
	int info;
	struct lista * prox;
};

typedef struct lista Lista;

Lista *insere(Lista *l, int i);
Lista *copiar(Lista *l);

void imprime(Lista *l){
	Lista *p;
	p=l;
	while (p!=NULL){
		printf("%d - ", p -> info);
		// variavel = a prox da propria variavel == incrementar
		p = p ->prox;
	}
}


main(){
	Lista *l, *f;
	l = NULL;
	l = insere(l, 2132);
	l = insere(l, 5345);
	l = insere(l, 235235);
	imprime(l);
	imprime(copiar(l));
 }
 
 

Lista *insere(Lista *l, int i){
	Lista *novo, *p;
	if(l==NULL){				
		novo = (Lista*) malloc(sizeof(Lista));
		novo -> info = i;
		novo -> prox = NULL;			
		return novo;
	}
		
	for(p=l;p->prox != NULL; p=p->prox);
	
			novo = (Lista*) malloc(sizeof(Lista));
			novo -> info = i;
			novo -> prox = NULL;			
			p -> prox = novo;
	

	return l;
}

Lista *copiar(Lista *l){
	Lista *p=l, *k=insere(p,p->info);
	
	//for(; p->prox!=NULL; p=p->prox){
		//insere(p, p->info);
//	}
	//imprime(k);
	return k;
}
