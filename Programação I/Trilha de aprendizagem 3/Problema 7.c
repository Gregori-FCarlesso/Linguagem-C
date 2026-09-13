#include <stdio.h>

int main(){
	float tempmin,tempmax,temperatura,tempmenor,tempmaior;
	int foracontrole=0,mes,mesmenor,mesmaior;
	float media,total;
	
	printf("Digite a faixa de temperatura minima (celsius): ");
	scanf("%f",&tempmin);
	printf("Digite a faixa de temperatura maxima (celsius): ");
	scanf("%f",&tempmax);
	
	for(mes=1;mes<=12;mes++){
		printf("Digite a temperatura do mes %d: ",mes);
		scanf("%f",&temperatura);
		total=total+temperatura;
		
		if(mes==1){
			tempmenor=temperatura;
			tempmaior=temperatura;
			mesmenor=mes;
			mesmaior=mes;
	    }
		else{
			if(temperatura<tempmenor){
			    tempmenor=temperatura;
			    mesmenor=mes;
			}
			if(temperatura>tempmaior){
			    tempmaior=temperatura;
			    mesmaior=mes;
			}
		}
		
		if(temperatura<tempmin || temperatura>tempmax){
			foracontrole++;
		}
		
	}
	media=total/12.0;
	printf("Media de temperatura mensal no ano: %.2f\n",media);
	printf("Menor temperatura do ano: %.2f no mes %d\n",tempmenor,mesmenor);
	printf("Maior temperatura do ano: %.2f no mes %d\n",tempmaior,mesmaior);
	printf("Quantidade de meses com temperaturas fora da faixa de controle: %d",foracontrole);
}
