#include<stdio.h>
#include<stdlib.h>

struct tree{
	int inf;
	struct tree *left, *right;
};

typedef struct tree Tree;

Tree *enter(Tree *r, int x);
void print(Tree *r);
Tree *remover(Tree *r);
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
//	imprime(r);
	printf("%d\n", busca(r, 30));
//	remover(r);
//	imprime(r);
	
	
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

Tree *remover(Tree *r){
	Tree *p;
	if(r->right == NULL && r->left == NULL){
		free(r);
		return NULL;
	}else{
		if(r->right!=NULL){
			
			p=r->right;
			r->right=remover(p);		
			
		}
		if(r->left!=NULL){
			
			p=r->left;
			r->left=remover(p);		
			
		}
			
	}
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
