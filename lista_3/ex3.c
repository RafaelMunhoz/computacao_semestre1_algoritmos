#include <stdio.h>

int main (){

int dia, mes, ano;

printf("Digite o dia em que nasceu: ");
scanf("%d", &dia);
printf("Digite o mes em que nasceu: ");
scanf(" %d", &mes);
printf("Digite o ano em que nasceu: ");
scanf(" %d", &ano);

if(dia <= 31 && mes <= 12 && ano <=2024){
printf("Data valida %d %d %d", dia, mes, ano);
} else {
printf("Data invalida");
}
return 0;
}
