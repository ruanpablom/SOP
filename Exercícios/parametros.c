#include<stdio.h>
int main(int argc, char **argv){
    
    //printf("argc %i\n",argc);
    printf("Programa: %s\n",argv[0]);
    printf("Parâmetros:\n");
    while(argc>1){
        printf("%s\n",argv[argc-1]);
        argc--;
    }

    return 0;
}
