#include<stdio.h>
#include<stdlib.h>

struct list{
	int inf;
	struct list *ant, *prox;
	
};

typedef struct list List;

int cont(List *l);
List *enter(List *l, int i);
int retorna(List *l);
List *limpa(List *l);
List *copia(List *l, List *c);
void insere(List *l);


main(){
	int x, y=0;
	List *l, *c;
	c=NULL;
	l=NULL;
	l=enter(l, 123);
	l=enter(l, 44);
	l=enter(l, 566);
	l=enter(l, 90);
	l=enter(l, 57);
	
	while(y==0){
		//system("cls");
		printf("Escolha opcao\n");
		printf("1.Contar.\n");
		printf("2. Retorna.\n");
		printf("3.Limpa.\n");
		printf("4. Copiar\n");
		printf("5. Inserir\n");
		scanf("%d", &x);
	
		switch(x){
			case 1:{
				printf("%d\n",cont(l));
				system("pause");
				break;
			}
			case 2:{
				printf("%d\n",retorna(l));
				system("pause");
				break;
			}
			case 3:{
				//free(l);
				l = limpa(l);
				break;
			}
			case 4:{
				c=copia(l, c);
				break;
			}
			case 5:{
				insere(l);
				break;
			}
			case 0:{
				y++;
				break;
			}
		}
	}
	
	

	
}

 List *enter(List *l, int i){
	List *novo, *p;
	if(l==NULL){
		novo=(List*) malloc(sizeof(List));
		novo->ant=NULL;
		novo->prox=NULL;
		novo->inf=i;
		return novo;
	}
	for(p=l; p->prox!=NULL; p=p->prox);
	novo=(List*) malloc(sizeof(List));
	p->prox=novo;
	novo->ant=p;
	novo->inf=i;
	novo->prox=NULL;
	return l;		
	
 }
 
int cont(List *l){
	List *p;
	int cont=0;
	if(l==NULL)return cont;
	if(l->prox==NULL)return 1;
	for(p=l; p !=NULL; p=p->prox)cont++;
	return cont;
}

int retorna(List *l){
	List *p;
	int cont=0, i;
	printf("Entre com a posicao: \n");
	scanf("%d", &i);
	
	if(l==NULL){		
		printf("Posicao n existe!!\n");
		return;
	}
	
	for(p=l; p!= NULL; p=p->prox){
		cont++;
		if(cont==i){			
			return p->inf;	
		}
				
	}
	
	if(cont < i){
		printf("Posicao n existe!!\n");
		return;
		
	}
	
}

List *limpa(List *l){
	List *p, *ant;
	for(p=l; p != NULL; ) {
		ant=p;
		p=p->prox;
		//printf("%d, ", ant->inf);
		free(ant);
	}
	return NULL;		
}

List *copia(List *l, List *c){
	List *p;	
	for(p=l; p != NULL; p=p->prox){		
		c=enter(c, p->inf);	
	}
	return c;
	
}

void insere(List *l){
	List *novo, *p;
	int cont=0, x, y;
	printf("Entre com um valor e a posicao\n");
	scanf("%d %d", &x, &y);
	for(p=l; p!= NULL; p=p->prox){
		cont++;
		if(cont+1==y){
			novo=(List*) malloc(sizeof(List));
			novo->prox = p->prox;
			p->prox=novo;
		//	p->ant->prox=novo;
		//	novo->ant = p->ant;
		//	p->ant=novo;			
			novo->inf = x;
		}
		
	}
}

