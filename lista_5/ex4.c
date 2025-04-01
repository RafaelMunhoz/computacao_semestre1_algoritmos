#include <stdio.h>

int main (){

int valores[10];

printf("Digite 10 valores: \n");
for(int i = 0;i < 10; i++){
printf("Valor %d: ", i+1);
scanf("%d", &valores[i]);
}
printf("Valores maiores 25 e menores que 85: ");

for(int i = 0; i < 10; i++){
if(valores[i] > 25 && valores[i] < 85){
printf("%d = %d ", i+1, valores[i]);
}
}

return 0;
}
