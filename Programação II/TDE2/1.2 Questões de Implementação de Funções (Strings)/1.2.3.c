#include <stdio.h>
#include <string.h>
#define MAX 100

int ehAnagrama(const char *str1, const char *str2);

int main(){

    char palavra1[MAX], palavra2[MAX];

    printf("Digite uma palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);

    printf("Digite outra palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);

    if(ehAnagrama(palavra1, palavra2) == 1)
        printf("E um anagrama!\n");
    else
        printf("Nao e um anagrama!\n");

    return 0;
}

int ehAnagrama(const char *str1, const char *str2){

    int i;
    char letra;
    int freq[26] = {0}, frequencia = 1;

    for(i=0; str1[i]!='\0'; i++){
        if((str1[i]!=' ') && (str1[i]!='\n')){
            letra = str1[i];

            if(letra>='A' && letra<='Z'){
                letra = letra + 32;
            }

            if(letra>='a' && letra<='z')
                freq[letra - 'a']++;
        }
    }

    for(i=0; str2[i]!='\0'; i++){
        if((str2[i]!=' ') && (str2[i]!='\n')){
            letra = str2[i];

            if(letra>='A' && letra<='Z'){
                letra = letra + 32;
            }

            if(letra>='a' && letra<='z')
                freq[letra - 'a']--;
        }
    }

    for(i=0; i<26; i++){
        if(freq[i] != 0)
            frequencia = 0;
    }

    if(frequencia == 0)
        return 0;
    else
        return 1;
}