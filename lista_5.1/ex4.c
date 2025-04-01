#include <stdio.h>

int main() {
int n;
printf("Digite um numero: ");
scanf("%d", &n);

int i, soma = 0;

while (n > 1) { // Corrigido para usar apenas 'n' como variável de controle
int contador = 0; // Reset do contador para cada número

// Verifica se 'n' é primo
for (i = 1; i < n; i++) {
if (n % i == 0) {
contador++;
}
}

// Soma apenas se for primo
if (contador == 1) {
soma += n;
}

n--; // Decremento correto de 'n'
}

printf("Soma = %d\n", soma);
return 0;
}
