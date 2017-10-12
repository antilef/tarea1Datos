#ifndef NODO_H
#define NODO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
    printf("Empieza la pila \n");
    while(aux!=NULL){
        printf("(%i) -- ",aux->diametro);
        aux=aux->siguente;
    }
    printf("nil\n\n");
}

void moverTorre(int discos,Nodo** origen,Nodo** auxiliar,Nodo** destino){
    Nodo *mover;
    char tecla;
    if(discos==1){
        printf("Para seguir pulse ENTER POR FAVOR!!!!!: ");
        tecla=getchar();
        mover=desApilar(origen);
        apilar(destino,mover);
        imprimePila(*origen);
        imprimePila(*destino);
        printf("\n\n");
    }else{
        moverTorre(discos-1,origen,destino,auxiliar);
        printf("Para seguir pulse ENTER POR FAVOR!!!!!: ");
        tecla=getchar();
        mover=desApilar(origen);
        apilar(destino,mover);
        imprimePila(*origen);
        imprimePila(*destino);
        printf("\n\n");
        moverTorre(discos-1,auxiliar,origen,destino);
    }
}
#endif