#include <stdio.h>

int main (){

int i, u, r, p;
i = 0;
u = 0;

printf("Digite a tensao: ");
scanf("%d", &u);
printf("\nDigite a corrente: ");
scanf("%d", &i);
printf("\nDigite a resistencia: ");
scanf("%d", &r);

if(i != 0 && u != 0){
p = i * u;
printf("Potencia = %d", p);
}
if(i == 0){
p = (u * u) / r;

printf("Potencia = %d", p);
}
if(u == 0){
p = r * (i * i);
printf("Potencia = %d", p);
}

return 0;
}
