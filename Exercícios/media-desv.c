#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n=0,i;
    int *vet,*aux;
    int atual;
    double media=0,desvio=0;

    aux=(int*)malloc(sizeof(int)*1);
    vet=(int*)malloc(sizeof(int)*1);
    while(scanf("%i",&atual) && atual!=-1){
        n++;
        free(vet);
        vet=(int*)malloc(sizeof(int)*n);
        memcpy(vet,aux,sizeof(int)*(n));
        vet[n-1]=atual;
        media+=atual;
        free(aux);
        aux=(int*)malloc(sizeof(int)*n+1);
        memcpy(aux,vet,sizeof(int)*n);       
    }
    media/=n;
    free(aux);
    printf("\n");
    for(i=0;i<n;i++){
        desvio+=pow((vet[i]-media),2);
    }
    
    desvio/=n;
    desvio=sqrt(desvio); 
    printf("Media: %.3lf\n",media);
    printf("Desvio Padrão: %.3lf\n",desvio);
    return 0;
}
