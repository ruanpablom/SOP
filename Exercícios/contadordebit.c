#include<stdio.h>
#include<math.h>

int main(int argc, char **argv){
    int numero=0;
    int aux;
    int i,j;
    int contador=0;

    if(argc<=1)printf("Falta o parametro! (./contadordebits \"número\")\n");
    for(i=0;i!='\0';i++);
    for(j=0;j<i;j++){
        numero+=pow(10,i-1)*(argv[2][j]-48);        
    }
    printf("%i\n",numero);
    //printf("digite o número para a verificação de bits 1: ");
    //scanf("%i",&numero);
    aux=numero;
    while(numero>0){
        contador+=(numero&1);
        numero = numero>>1;
    }
    printf("O número de bits 1 do número %i é: %i\n",aux,contador);
    return 0;
}
