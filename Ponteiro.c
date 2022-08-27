#include <stdio.h>

int main(){
	

	int v[5] = {10,20,30,40, 50};
	int a;
	for (a=0;a<5;a++)
	{
		int *pv = &v[a];
		int *pvv = pv;
		printf("Numero escolhido: %d", *pvv);
		printf("|Localizacao na memoria: %p\n", pv);
	}
	return 0;

}