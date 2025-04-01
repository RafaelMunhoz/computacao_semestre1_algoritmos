#include <stdio.h>

int main ()
{
int n, i = 0, temp, soma = 0;
float media;
printf("\nDigite o valor de n: ");
scanf("%d", &n)

while(i < n){

printf("\n\nDigite o valor da temperatura: %d", i);
scanf("%d", &temp);

soma = soma + temp;

i++;
}
media = soma / (n*1.0);

return 0; 
}
