#include <stdio.h>

int soma(void){
  int firs, sec;
  printf("Digite o valor primeiro e segundo valor: \n");
  scanf("%i%i", &firs, &sec);
  return(firs + sec);
}
/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
char str(){
  int a;
  for (a=0;a <= 15; a++){
    printf("=-=");
  }
  printf("\n");
}
/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
////////////////////////////Função Principal///////////////////////////////////////////
int main(void){
  void screan(void);
  screan();
  int caso();
  caso();
  char str();
  int soma(void);
  int mult();
  mult();
  float divi(void);
  div();
}/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
void screan(void){
  printf("=--=-=-=-= Calculadora =--=-=-=-=\n");
  printf("1 - Somar\n2 - Multiplicar\n");
  printf("Digite a Opcao desejada: \n");

}/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
int caso(){
  int opcao;
  scanf("%i", &opcao);
  switch(opcao)
  {
  case 1: soma();
    break;
  case 2: mult();
    break;
  case 3: div();
    break;
  default:
    printf("ERROR\n");
    break;
  }
}/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
int mult(){
  int firs, sec;
  printf("Digite o valor primeiro e segundo valor: \n");
  scanf("%i%i", &firs, &sec);
  return(firs * sec);
}/*=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
float divi(){
  float firs, sec;
  printf("Digite o valor primeiro e segundo valor: \n");
  scanf("%2.f%2.f", &firs, &sec);
  return(firs / sec);
}