#include <stdio.h>

int main ()
{
int n;

scanf("%d", &n);

while(n>0){

if(n % 2 == 0){
n--;
continue;
}

printf("%d", n);
n--;
}

return 0;
}
