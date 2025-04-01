#include <stdio.h>

int main () {

int n, i = 1;
printf("Determine o valor de n fatorial: ");
scanf("%d", &n);
int fat = n;
while(i<n){
fat = fat * (n-i);
i++;
}

return 0;
}
