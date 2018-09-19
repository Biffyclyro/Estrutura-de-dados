#include<stdio.h>
#include<stdlib.h>

struct tree{
	int inf;
	struct tree *left, *right;
};

typedef struct tree Tree;

Tree *enter(Tree *r, int x);
void print(Tree *r);


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
	r=enter(r,12);
	r=enter(r,6);
	r=enter(r,4);
	r=enter(r,17);
	imprime(r);
	
	
}

Tree *enter(Tree *r, int x){
	Tree *novo, *p, *aux;
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
