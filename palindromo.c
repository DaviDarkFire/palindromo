#include <stdio.h>

void quebra(int n, int *prim, int *ult, int *miolo){
	int aux = 1, aux2 = n/10;
	*ult = n%10;
	while(n/10 > 10){
		n = n/10;
		aux = aux*10; 
	}	
	*prim = n/10;	
	aux2 = aux2%aux;
	*miolo = aux2;
}

int main(void)
{
	int n, prim, ult, miolo , aux = 1;
	scanf("%d", &n);	
	while(n >= 10){
		quebra(n, &prim, &ult, &miolo);				
		n = miolo;
		if(prim != ult){
			aux = 0;
		}


	}
	if(aux){
		printf("palindromo\n");
	}else{
		printf("não palindromo\n");
	}









	return 0;
}