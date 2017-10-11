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
    printf("nil\n");
}

void moverTorre(int discos,Nodo** origen,Nodo** auxiliar,Nodo** destino){
    Nodo *mover;
    if(discos==1){
        mover=desApilar(origen);
        apilar(destino,mover);
    }else{
        moverTorre(discos-1,origen,destino,auxiliar);
        mover=desApilar(origen);
        apilar(destino,mover);
        moverTorre(discos-1,auxiliar,origen,destino);
    }
}

void moverTorreNumeros(int discos,int origen,int auxiliar,int destino){
    char tecla;
    char chungo[20]="";
    if(discos==1){
        printf("Para seguir pulse ENTER POR FAVOR!!!!!: ");
        tecla=getchar();
        printf("Mover disco de (%i) a destino (%i)\n",origen,destino);
    }else{
        moverTorreNumeros(discos-1,origen,destino,auxiliar);
        printf("Para seguir pulse ENTER POR FAVOR!!!!!: ");
        getchar();
        printf("Mover disco de (%i) a (%i)\n",origen,destino);
        moverTorreNumeros(discos-1,auxiliar,origen,destino);
    }
}
#endif