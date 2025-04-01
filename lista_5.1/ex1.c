#include <stdio.h>

int main(){

int n, soma = 0;
printf("Digite a quantidade de numeros: ");
scanf("%d", &n);

int i = 0;
int numero;
while(i<n){

printf("Digite um numero: ");
scanf("%d",&numero);
soma = soma + numero;
i++;
}
printf("Soma dos numeros = %d", soma);
return(0);
}
