#include <stdio.h>
int main()
{
 int numero, i;
 float resposta, divisor;
 resposta = 0;
 printf("Digite um numero:\n");
 scanf("%d", &numero);
 for (i=1; i <= numero; i++)
 {
 divisor = i;
 resposta = resposta + 1/divisor;
 }
 printf("Resposta: %f\n", resposta);
 return (0);
}