#include<stdio.h>

main(){
	int *vector = NULL;
	vector = (int*) malloc(25*sizeof(int));
	vector[10]=34;
	free(vector);
}
