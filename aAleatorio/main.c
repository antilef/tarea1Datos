#include "nodo.h"
#include <time.h>

int main(int argc,char** argv){
    if(argc!=2){
        printf("ejecute ./prog n origen destino mode \n");
        exit(EXIT_FAILURE);
    }
    srand(time(NULL));
    Nodo *torre1=NULL;
    Nodo *torre2=NULL;
    Nodo *torre3=NULL;
    llenarTorre(&torre1);
    llenarTorre(&torre2);
    llenarTorre(&torre3);
    printf("Torre N°1\n");
    imprimePila(torre1);
    printf("Torre N°2\n");
    imprimePila(torre2);
    printf("Torre N°3\n");
    imprimePila(torre3);
    return 0;
}