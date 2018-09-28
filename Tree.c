#include<stdio.h>
#include<stdlib.h>

struct tree{
	int inf;
	struct tree *left, *right;
};

typedef struct tree Tree;

Tree *enter(Tree *r, int x);
void print(Tree *r);
Tree *remover(Tree *r, int x);
int busca(Tree *r, int x);


void imprime(Tree *r){
/*	if(r!=NULL){
		printf("%d\n", r->inf);
		imprime(r->left);
		imprime(r->right);		
		
	} */
	
	if(r!=NULL){
		
		imprime(r->left);
		printf("%d\n", r->inf);
		imprime(r->right);		
		
	}
/*	
		if(r!=NULL){
		
		imprime(r->left);		
		imprime(r->right);
		printf("%d\n", r->inf);		
		
	}*/
	
	
}

main(){
	Tree *r;
	r=NULL;
	r=enter(r,20);
	r=enter(r,17);
	r=enter(r,5);
	r=enter(r,30);
	r=enter(r, 28);
	r=enter(r, 70);
	r=enter(r, 49);
	imprime(r);
	r=remover(r, 30);
	printf("\n\n");
	//printf("%d\n", busca(r, 30));
	//remover(r);
	imprime(r);
	
	
}

Tree *enter(Tree *r, int x){
	Tree *novo, *p;
	if(r==NULL){
		novo=(Tree*) malloc(sizeof(Tree));
		novo->inf=x;
		novo->left=r;
		novo->right=r;
		return novo;
	}else{
		if(x<r->inf){					
			p=r->left;			
			p=enter(p, x);
			r->left=p;			
		}
		
		if(x>r->inf){			
			p=r->right;			
			p=enter(p, x);
			r->right=p;		
		}
	}
	return r;	
	

}

void print(Tree *r){
	//preorder
	Tree *p;
	printf("%d\n", r->inf);
	if(r->left!=NULL){
		p=r->left;
		print(p);
	}else{
		p=r;
	}	
}

Tree *remover(Tree *r, int x){
	//p é todo é qualquer ponteiro e k é outro ponteiro no caso do p ta ocupado, é nois!!! ;P
	
	
	Tree *p, *k, *l;
	p=r;
	l=r;
	Tree *pai;	
	while(p != NULL && p->inf != x) {			
		pai = p;
		if(x < p->inf) p=p->left;
		if(x > p->inf) p=p->right;		
	}
	printf("\n\nPai: %d", pai->inf);	
	printf("Filho: %d\n\n", p->inf);
	
	
	while(l != NULL && l->inf != x ) {			
		if(l->left != p) l=l->left;
		if(l->right !=p) l=l->right;
		printf("sahsuashua \n");
		
	}
	
	if(l->left == p)l->left=k;
	if(l->right == p)l->right=k;
	
	printf("%d ", p->inf);
	
	if(p->right!=NULL)k=p->right;
	while(k->left != NULL)k=k->left;
	
	k->left=p->left;
	k->right=p->right;	
	free(p);
	p->left = NULL;
	p->right = NULL;
	p=NULL;
			
	
	
	return r; 
	
	
	
}


int busca(Tree *r, int x){
	Tree *p;
	p=r;
	while(p != NULL){
		if(p->inf == x){
			return 1;
		}
		if(x < p->inf) p=p->left;
		else p=p->right;
	}
//	return 0;
	
	
	
	
/*	if(r==NULL){
		return 0;		
	}else{
		printf("%d\n", r->inf);
		if(r->inf==x){
			return 1;
		}else if(x<r->inf){
			busca(r->left, x);			
		}else if(x>r->inf){
			busca(r->right, x);
		}		
		
	} */
	
	
	
}





