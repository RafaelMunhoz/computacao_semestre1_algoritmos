#include <stdio.h>

int main(){

int a, b, c, d;
int soma, media;

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);

soma = a + b + c + d;
media = soma/4;
printf("%d", media);

return 0;
}
