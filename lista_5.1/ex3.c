#include <stdio.h>

int main()
{
int num;
printf("Digite um numero natural: ");
scanf("%d", &num);

int vet_bin[1000];
int i = 0, j;
int aux_num = num;

while(num > 0)
{
vet_bin[i] = num % 2;
i++;
num = num / 2;
}

printf("%d em binario: ", aux_num);

for(j = i - 1; j >= 0; j--)
printf("%d", vet_bin[j]);
printf("\n");

return 0;
}
