#include <stdio.h>

void escrevenome(int n, int x){
	while (n>0){
		printf("\n UCS %d",x);
		n--;
		x++;
	}	
}

int main(){	
	escrevenome(30,1);
	
	return 0;
}
