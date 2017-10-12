#include "nodo.h"

int main(int argc,char** argv){
    if(argc!=4){
        printf("ejecute ./prog numeroDePiso torreInicio torreDestino \n");
        exit(EXIT_FAILURE);
    }
    int numeroDisco=atoi(argv[1]);
    int torreInicio=atoi(argv[2]);
    int torreFin=atoi(argv[3]);
    //printf("Aqui vamos (%i)  Inicio (%i) Fin(%i)\n",numeroDisco,torreInicio,torreFin);
    Nodo *pila=NULL;
    Nodo *pila2=NULL;
    Nodo *pila3=NULL;

    Nodo* nuevo=crearNodo(11);
    apilar(&pila,nuevo);
    Nodo* nuevo1=crearNodo(2);
    apilar(&pila,nuevo1);
    Nodo* nuevo2=crearNodo(3);
    apilar(&pila,nuevo2);
    printf("pila 1\n");
    imprimePila(pila);
    printf("pila 3\n");
    imprimePila(pila2);
    printf("\n\n");
    moverTorre(3,&pila,&pila3,&pila2);
    //moverTorreNumeros(numeroDisco,1,2,3); //1:origen 2:torre Auxiliar 3:destino
    printf("pila 1\n");
    imprimePila(pila);
    printf("pila 3\n");
    imprimePila(pila2);
    return 0;
}