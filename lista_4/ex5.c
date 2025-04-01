#include <stdio.h>

int main ()
{
int n , x;

scanf("%d", &n);
scanf("%d", &x);

int i = n;
int potencia = 1;
while(i>0){
potencia = x * potencia;
i--;
}

printf("\nPotencia = %d", potencia);
return 0;
}
