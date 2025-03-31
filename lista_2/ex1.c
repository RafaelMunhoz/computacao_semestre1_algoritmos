/*Faça um programa que tenha tres variáveis, uma do tipo float, outra do tipo char e, por
último, uma do tipo int. Dê valores a essas variáveis, utilizando scanf, e imprima-as na
tela.*/
#include <stdio.h>

int main(){

float a;
char b;
int c;

printf("Digite um numero do tipo float: ");
scanf("%f", &a);
printf("\nDigite um caracter do tipo char: ");
scanf(" %c", &b);
printf("\nDigite um numero do tipo inteiro: ");
scanf("%d", &c);

printf("\n%.2f %c %d ", a, b,c);

return 0;
}
