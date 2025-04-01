#include <stdio.h>

int main (){

int p, contador = 0;

printf("Digite um numero: ");
scanf("%d", &p);
int i = 1;
while(i<p){

if(p % i == 0){
contador++;
}

i++;
}

if(contador>=2){
printf("Nao eh primo");
}else{
printf("Eh primo");
}
return 0;
}
