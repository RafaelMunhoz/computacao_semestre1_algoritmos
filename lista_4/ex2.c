#include <stdio.h>

int main ()
{
int num, soma = 0;

scanf("%d", &num);

while(num>0){
soma = soma + num;
num--;
}
printf("\nSoma = %d", soma);
return 0;
}
