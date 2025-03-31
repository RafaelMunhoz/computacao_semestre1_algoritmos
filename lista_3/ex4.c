#include <stdio.h>

int main (){

int idade;
char sexo;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite M para sexo masculino ou F para feminino: ");
scanf(" %c", &sexo);

if(idade == 18 && sexo == 'M'){
printf("Precisa se alistar");
}else {
printf("Nao precisa se alistar");
}

return 0;
}
