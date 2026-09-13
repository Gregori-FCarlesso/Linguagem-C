#include<stdio.h>

int testevogal(char caracter)
{
   if (caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u'
        || caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U')
            return 1;
    else
        return 0;
}

int main(){
    char caracter;
    
    printf("Digite uma letra: ");
    scanf("%c",&caracter);

    if(testevogal(caracter) == 1)
        printf("\nSua letra e vogal!\n");
    else
        printf("\nSua letra nao e vogal!\n");
}