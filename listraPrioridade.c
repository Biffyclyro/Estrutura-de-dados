#include<stdio.h>

int entra(int x[6], int i){
	int y;
	scanf("%d", &x[i]);
	int j = i;
	while(x[j/2] < x[j]) {			
		y=x[j];		
		x[j]=x[j/2];
		x[j/2]=y;
		j = j/2;		
	}
	
	return ++i;
}




main(){
	int x[6]={5,3,1,0,0,0}, i=3, j;
	i=entra(x,i);
	i=entra(x,i);
	
	for(j=0; j<6; j++){
		printf("%d  ", x[j]);
	}
	
	
	
	
	
}
