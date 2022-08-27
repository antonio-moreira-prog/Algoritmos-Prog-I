#include <stdio.h>

struct dados
{
	char nome[50];
	int idade;
	float salario;
};
int ler_Pessoa(struct dados pessoa)
{
	printf("Digite seu nome: ");
	scanf("%s", &pessoa.nome);
	
	printf("Digite idade: ");
	scanf("%d", &pessoa.idade);
	
	printf("Digite o salario: ");
	scanf("%f", &pessoa.salario);
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf("\nNome: %s\nIdade: %d\nSalario: %.2f \n", pessoa.nome, pessoa.idade, pessoa.salario);	
};
int main()
{
	struct dados pessoa;
	ler_Pessoa(pessoa);
	return 0;
}