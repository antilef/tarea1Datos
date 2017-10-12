#ifndef NODO_H
#define NODO_H


#include <stdlib.h>
#include <stdio.h>
typedef struct Nodo{
    int diametro;
    Nodo* siguente;
}Nodo;

Nodo* crearNodo(int diametro){
    Nodo* nuevoNodo=(Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->diametro=diametro;
    nuevoNodo->siguente=NULL;
}
void apilar(Nodo** pila,Nodo* nodo){
    nodo->siguente=*pila;
    *pila=nodo;
}
Nodo* desApilar(Nodo** pila){
    Nodo* eliminar=*pila;
    (*pila)=(*pila)->siguente;
    return eliminar;
}
void imprimePila(Nodo *pila){
    Nodo* aux =pila;
    while(aux!=NULL){
        printf("(%i)-->",aux->diametro);
        aux=aux->siguente;
    }
    printf("NIL\n\n");
}
void llenarTorre(Nodo** torre){
    Nodo* nuevo=crearNodo(24);
    int pisos=4;
    apilar(torre,nuevo);
    int diaAleatorio=(rand() % 24) +1;
    while(pisos>0 && ((*torre)->diametro > 1) ){
        //printf("diaA = %i ,D = %i\n",diaAleatorio,(*torre)->diametro );
        if (diaAleatorio < ((*torre))->diametro){
            nuevo=crearNodo(diaAleatorio);
            apilar(torre,nuevo);
            diaAleatorio=(rand() % 24) +1;
            pisos--;
            
        }
        else{
            diaAleatorio=(rand() % 24) +1;
        }
    }
}
/*void mueveNoInteractivo(Nodo** pila1, Nodo** pila2,){

}*/

#endif