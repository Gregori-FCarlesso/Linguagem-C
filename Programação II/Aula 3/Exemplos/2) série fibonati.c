#include <stdio.h>
#define T 48

int main(){
	
	long long int M[T];
	int i=0;
	
	M[0] = 0;
	M[1] = 1;
	
	for (i=2;i<T;i++)
	{
		M[i] = M[i-1] + M[i-2];
	}
	
	for(i=0;i<T;i++)
	{
		printf("M[%d] = %lld\n",i,M[i]);
	}
	
	return 0;
}
