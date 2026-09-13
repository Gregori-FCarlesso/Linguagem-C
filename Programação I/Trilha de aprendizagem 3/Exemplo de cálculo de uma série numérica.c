#include <stdio.h>

int main(){
	
	float formula,numero;
	int n,nqtd;
	
	printf("Digite a quantidade de termos: ");
	scanf("%d",&nqtd);
	
	numero=0.0;
	
	for(n=0;n<nqtd;n++){
		
		formula=(float)(4.0/((2*n)+1));
		
		if(n%2==0){
		    numero=numero+formula;
		    printf("+ %.5f ",formula);
		}
		else{
	        numero=numero-formula;
	        printf("- %.5f ",formula);
		}
	}
	printf("\nNumero final = %.8f",numero);
}
