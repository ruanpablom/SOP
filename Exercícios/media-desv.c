#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n=0,i;
    int *vet,*aux;
    int atual;
    
    aux=(int*)malloc(sizeof(int)*1);
    while(scanf("%i",&atual) && atual!=-1){
        n++;
        free(vet);
        vet=(int*)malloc(sizeof(int)*n);
        memcpy(vet,aux,sizeof(int)*(n));
        vet[n-1]=atual;
        free(aux);
        aux=(int*)malloc(sizeof(int)*n+1);
        memcpy(aux,vet,sizeof(int)*n); 
    }

    for(i=0;i<n;i++){
        printf("%i ",vet[i]);
    }
    printf("\n");

    return 0;
}
