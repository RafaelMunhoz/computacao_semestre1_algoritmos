#include <stdio.h>

int main (){

int num1, num2;

printf("Digite um numero: ");
scanf("%d", &num1);
printf("\nDigite outro numero: ");
scanf("%d", &num2);

if(num1 > num2){
printf("\n O maior numero e %d e o menor e %d", num1, num2);
} else if(num2 > num1){
printf("\n O maior numero e %d e o menor e %d", num2, num1);
} else if (num1 == num2){
printf("\n Numeros iguais %d %d ", num1, num2);
}

return 0;
}
