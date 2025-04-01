#include <stdio.h>

int main(){

int n, somaMaiorIdade = 0, somaMenorIdade = 0;
printf("Digite a quantidade de numeros: ");
scanf("%d", &n);

int i = 0, idade, media = 0;
while(i<n){
printf("Digite a idade: ");
scanf("%d",&idade);
if(idade>=18){
somaMaiorIdade = somaMaiorIdade + idade;
}else{
somaMenorIdade = somaMenorIdade + idade;
media++;
}
i++;

}
printf("Soma das idades maiores de 18 = %d\n", somaMaiorIdade);
printf("Media das idades menores de 18 = %d", somaMenorIdade/media);
return(0);
}
