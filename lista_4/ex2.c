#include <stdio.h>

int main (){

int idade, peso;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("\nDigite seu peso: ");
scanf("%d", &peso);

if(idade >= 18 && idade <= 69 && peso >= 50){
printf("Pode doar sangue");
}
else{
printf("Nao pode doar sangue");
}
return 0;
}
