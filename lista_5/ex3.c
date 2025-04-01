#include <stdio.h>

void ordenarCrescente(int arr[], int n){
for(int i = 0; i < n-1; i++){
for(int j = 0; j< n-i-1;j++){
if(arr[j] > arr[j+1]){
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}

}

int main (){
int valores[5];
printf("Digite 5 valores inteiros: \n");
for(int i = 0; i<5; i++){
printf("Valor %d: ", i+1);
scanf("%d", &valores[i]);

}

//ordenação em ordem crescente
ordenarCrescente(valores, 5);

printf("\nOrdem Crescente: \n");
for(int i = 0;i<5;i++){
printf("%d ", valores[i]);
}
printf("\nOrdem decrescente: \n");
for(int i = 4; i >= 0;i--){
printf("%d ", valores[i]);
}

return 0;
}
