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
    //1:origen 2:torre Auxiliar 3:destino
    //nodo pila 1
    Nodo* nuevo=crearNodo(11);
    apilar(&pila3,nuevo);
    Nodo* nuevo1=crearNodo(5);
    apilar(&pila3,nuevo1);
    Nodo* nuevo2=crearNodo(2);
    apilar(&pila,nuevo2);
    //Nodos pila 2
    Nodo* nuevo3=crearNodo(3);
    apilar(&pila2,nuevo3);
    //nodos pila 3
    
    Nodo* nuevo5=crearNodo(2);
    apilar(&pila3,nuevo5);
    Nodo* nuevo4=crearNodo(6);
    apilar(&pila,nuevo4);
    Nodo* nuevo7=crearNodo(14);
    apilar(&pila3,nuevo7);
    Nodo* nuevo8=crearNodo(10);
    apilar(&pila2,nuevo8);
    
    imprimerPilaAvanzado(pila,pila2,pila3);
    //moverTorre(&pila,&pila2,&pila3);
    //imprimerPilaAvanzado(pila,pila2,pila3);
    return 0;
}