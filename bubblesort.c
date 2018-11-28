#include<stdio.h>
#include<stdlib.h>

main(){
	int i, j, tam=10, x, k, vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3 ,2 ,1};
	
	for(j=0; j<10; j++){
		for(i=1; i<tam; i++){
			if(vetor[i-1]>vetor[i]){
				x=vetor[i-1];
				vetor[i-1]=vetor[i];
				vetor[i]=x;				
			}
		}
		tam--;
	}	
	
	for(k=0; k<10; k++)printf("%d\n", vetor[k]);
	
	
}
