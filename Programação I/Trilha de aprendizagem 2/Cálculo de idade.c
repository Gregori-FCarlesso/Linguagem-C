#include <stdio.h>

int main(){
	int anon,mesn,dian,anoa,mesa,diaa,idade;
	
	printf("Digite a data de nascimento: ");
	scanf("%d/%d/%d",&dian,&mesn,&anon);
	
	printf("Digite a data atual: ");
	scanf("%d/%d/%d",&diaa,&mesa,&anoa);
	
	if(anoa>anon || (anoa==anon && mesa>mesn) || (anoa==anon && mesa==mesn && diaa>=dian)){
		
		idade = anoa-anon;
		
	    if(mesa>mesn || (mesa==mesn && diaa>dian)){
	    }
	    else{
	    idade--;	
		}
	    printf("Idade em anos: %d",idade);
	}
	else{
		printf("Datas informadas incoerentes.");
	}
}
