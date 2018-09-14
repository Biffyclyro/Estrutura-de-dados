#include<stdio.h>
#include<stdlib.h>

struct tree{
	int inf;
	struct tree *left, *right;
};

typedef struct tree Tree;

Tree *enter(Tree *r, int x);
void print(Tree *r);

main(){
	Tree *r;
	r=NULL;
	r=enter(r,12);
	r=enter(r,6);
	r=enter(r,4);
	print(r);
	
	
}

Tree *enter(Tree *r, int x){
	Tree *novo, *p;
	if(r==NULL){
		novo=(Tree*) malloc(sizeof(Tree));
		novo->inf=x;
		novo->left=r;
		novo->right=r;
		return novo;
	}
	
	
	if(x < r->inf && r->left==NULL ){
		//for(p=r; p->left!=NULL; p=p->left);
		novo=(Tree*) malloc(sizeof(Tree));
		r->left=novo;
		novo->inf=x;
		novo->left=NULL;
		novo->right=NULL;
		return r;
	}
	 if(x < r->inf && r->left !=NULL){
		p=r->left;
		enter(p, x);
		
	} /*
	if(x > r->inf && r->right==NULL){
		novo=(Tree*) malloc(sizeof(Tree));
		r->right=novo;
		novo->inf=x;
		novo->left=NULL;
		novo->right=NULL;
		return r;
	}else if(x > r->inf && r->right !=NULL){
		p=r->right;
		enter(p, x);
		
	} */
	
}

void print(Tree *r){
	Tree *p;
	printf("%d\n", r->inf);
	if(r->left!=NULL){
		p=r->left;
		print(p);
	}else{
		p=r;
	}
	

	
}
