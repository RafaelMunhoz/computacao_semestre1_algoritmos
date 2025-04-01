#include <stdio.h>

int main () {

int n, numero, somaPares=0, somaImpares=0, contPar = 0, contImpar = 0;
printf("Digite a quantos numeros inteiros voce deseja inserir: ");
scanf("%d", &n);
int i = 0;
while(i<n){

scanf("%d", &numero);
if(numero % 2 == 0){
somaPares = somaPares + numero;
contPar++;
} else {
somaImpares = somaImpares + numero;
contImpar++;
}

i++;
}
printf("Soma dos pares = %d Soma dos Impares = %d \n", somaPares, somaImpares);

printf("Quantidade de pares = %d quantidade de Impares = %d", contPar, contImpar);

return 0;
}
