#include <stdio.h>

int main (){
int n;
float soma = 0.0;

printf("Digite o valor de n: ");
scanf("%d", &n);
float i = 1;
while(i<=n){
soma = soma + (1.0*i);
printf("Soma = %f 1/i = %f\n", soma, 1.0*i);
i++;
}
printf("Soma = %.2f", soma/n);
return 0;
}
