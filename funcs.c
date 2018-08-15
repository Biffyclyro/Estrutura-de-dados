#include<stdio.h>
#include<stdlib.h>

struct pilhas{
	int contador, retorno;
};


typedef struct pilhas Pilhas;
Pilhas empurra(Pilhas pilha, int vetor[]);
Pilhas papa(Pilhas pilha, int vetor[]);

main(){
	int x=0, var, j, arr[5]={}, *p=&x;
	char a = 'y';
	Pilhas pilha;
	while(a != 'n'){		
		pilha.contador = empurra(pilha, arr);
	
	//  printf("x = %d\n", x );
			
		printf("Mais alguam operacao?\n");
		scanf(" %c", &a);
	}
	
	for(j=0;j<3;j++)printf("%d\n",arr[j]);
	
	
	
	
	
}

Pilhas empurra(Pilhas pilha, int vetor[]){
	int i, j, y=0;
	if(pilha.contador==3){		
		printf("nao vai rola\n");
		return;
	}	
	scanf("%d",&vetor[pilha.contador]);	
	return pilha;
	
}
Pilhas papa(Pilhas pilha, int vetor[]){
	pilha.retorno==vetor[pilha.contador];
	pilha.contador--;
	return pilha;
}


