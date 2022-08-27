#include <stdio.h>

void transpor(int v[3][3]){
	int a, b;
	int v2[3][3];
	
	for (a=0;a<3;a++){
		for(b=0;b<3;b++){
			v2[a][b] = v[b][a];
		}
	}
	printf("\n =-=-=-=-=-= MATRIZ TRANS =-=-=-=-=-=\n");
	for (a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("%i", v2[a][b]);
		}
	printf("\n");
	}
}
int main(){
	int v[3][3];
	int a, b;
	for (a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("Valor no local |%d| e |%d|: ", a, b);
			scanf("%i", &v[a][b]);
			
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("%i", v[a][b]);			
		}
		printf("\n");
	}	
	transpor(v);
	return 0;
}
