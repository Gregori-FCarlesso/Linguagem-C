#include <stdio.h>

int main(){
	int i;
	float n[6], divi;
	
	printf("Digite 6 valores:\n");
	for(i=0; i<6; i++){
		scanf("%f", &n[i]);
	}
	
	for(i=0; i<6; i++){
		divi = n[i]/2;
		printf("%.2f ", divi);
	}
	
}
