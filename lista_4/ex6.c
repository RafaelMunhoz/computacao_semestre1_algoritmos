#include <stdio.h>

int main () {

int n, i = 1, maior = 0, menor = 0, numero, anterior = 0;

printf("Digite a quantos numeros inteiros voce deseja inserir: ");
scanf("%d", &n);

while(i <= n){

scanf("%d", &numero);
if(menor == 0){
menor = numero;
}
if(numero > maior){
maior = numero;
}
if(numero < menor){
menor = numero;

}
i++;
}
printf("maior = %d e menor = %d", maior, menor);

return 0;
}
