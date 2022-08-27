#include <stdio.h>

int main (void){
	
	FILE *file;
	file = fopen("Test file.txt", "rt+");
	/*fopen abre o aquivo */
	if (file == NULL){
		perror("The error was");//Mensagem de erro.
	}
	fprintf(file, "Esse e' o conteúdo do teste.");
	fclose(file);//fecha o aquivo.
	return 0;
}