#include<stdio.h>

struct arvore{
	int v;
	struct arvore *esq, *dir;
};

typedef struct arvore arv;

arv *insere(arv *r, int c){
	arv *novo = (arv*) malloc(sizeof(arv));
	novo->v= c;
	novo->esq = NULL;
	novo->dir = NULL;
	if(r==NULL){
		r=novo;
	}else{
		arv *aux = r, *ult;
		while*aux !=NULL){
			ult = aux;
			if(c < aux->esq){
				aux = aux->esq;
			}else{
				aux = aux->dir;
			}
		}
		aux = ult;
		if( c < aux->v){
			aux->esq=novo;
		}else{
			aux->dir=novo;
		}
		return r;
	}
}



arv *r = NULL;
r=insere(r, 15);
r=insere(r, 10);
r=insere(r, 8);
r=insere(r, 20);
r=insere(r, 12);
