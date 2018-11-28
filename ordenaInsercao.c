#include<stdio.h>
#include<stdlib.h>


void ordena(int *vetor){
	int x, i, j;
	printf("insira um valor: \n");
	scanf("%d", &vetor[5]);
	printf("\n\n\n\n");
	
	if(vetor[0]>vetor[1]){
		x=vetor[0];
		vetor[0]=vetor[1];
		vetor[1]=x;
	
	}
	
	for(j=2; j<6; j++){
		for(i=j; i>=0 ; i--){
			if(vetor[i]<vetor[i-1]){
				x=vetor[i];
				vetor[i]=vetor[i-1];
				vetor[i-1]=x;
			}
		}
	}
	
}

main(){
	int  k, vetor[6] = {100, 45, 80, 20, 0, 0};
	
	ordena(vetor);
		
	
	for(k=0; k<6; k++)printf("%d\n", vetor[k]);
	
	
}
