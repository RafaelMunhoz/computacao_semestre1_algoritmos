#include <stdio.h>

int main (){

int j = 2, i = 1, contador = 0;

while(j < 20000){
while(i<j){

if(j % i == 0){
contador++;
}

i++;

}
i=1;
if(contador>=2){
printf("\n %d Nao eh primo", j);
}else{
printf("\n %d Eh primo ", j);
}
contador = 0;
j++;
}

return 0;
}
