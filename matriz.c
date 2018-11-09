#include<stdio.h>
#include<stdlib.h>

int verifica(int x, int y,int  mat[8][8]);

main(){
	int i, j, x, y, var=0, busca=0, mat[8][8]={};
	
	mat[0][2]=1;
	mat[1][6]=1;
	mat[5][0]=1;
	mat[2][4]=1;
	mat[3][3]=1;
	mat[5][1]=1;
	mat[6][7]=1;
	mat[7][0]=1;

	
	for(i=0;i<8; i++){
		if(i==0)printf("   1 2 3 4 5 6 7 8 \n\n");
		var++;
		for(j=0; j<8; j++){
			if(j==0)printf("%d  ", var);			
			printf("%d ", mat[i][j]);			
		}
		
		printf("\n");
	}
	printf("\n\n");
	
	printf("Entre com os index do caminho\n");
	scanf("%d %d",&x, &y);
	busca=verifica(--x,--y, mat);

	if(busca==0)printf("Nao ha caminho\n");
	else printf("Existe caminho\n");	
	
}


int verifica(int x, int y, int mat[8][8]){
	int  j, a=0;

	for(j=0;j<8;j++){
		if(mat[x][j]==1){
			if(j==y){				
				return 1;
			}else{
				a=verifica(j,y, mat);
			}
		}
	}	
	return a;	
}




