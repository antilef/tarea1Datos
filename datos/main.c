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
    Nodo* nuevo=crearNodo(11);
    apilar(&pila,nuevo);
    Nodo* nuevo1=crearNodo(2);
    apilar(&pila,nuevo1);
    imprimePila(pila);
    moverTorreNumeros(numeroDisco,1,2,3); //1:origen 2:torre Auxiliar 3:destino
    return 0;
}