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
void imprimePilaSimple(Nodo *pila){
    Nodo* aux =pila;
    printf("Empieza la pila \n");
    while(aux!=NULL){
        printf("(%i) -- ",aux->diametro);
        aux=aux->siguente;
    }
    printf("nil\n\n");
}
int largoPila(Nodo* pila){
    Nodo* recorredor=pila;
    int largo=0;
    while(recorredor!=NULL){
        recorredor=recorredor->siguente;
        largo++;
    }
    return largo;
}
int mayor(int a,int b ,int c){
    int candidato=a;
    if(b>a && b>c){
        candidato=b;
    }else if(c>b && c>a){
        candidato=c;
    }
    return candidato;
}
void imprimerPilaAvanzado(Nodo *pila,Nodo *pila2,Nodo *pila3){
    int largoPila1=largoPila(pila);
    int largoPila2=largoPila(pila2);
    int largoPila3=largoPila(pila3);
    int mayorAltura=mayor(largoPila1,largoPila2,largoPila3);
    /*printf("largo pila 1 =(%i)",largoPila1);
    printf("largo pila 2 =(%i)",largoPila2);
    printf("largo pila 3 =(%i)\n",largoPila3);
    printf("mayor altura =(%i)\n",mayorAltura);*/
    int espacio1=mayorAltura-largoPila1;
    int espacio2=mayorAltura-largoPila2;
    int espacio3=mayorAltura-largoPila3;
    Nodo *pilaCopia1=pila;
    Nodo *pilaCopia2=pila2;
    Nodo *pilaCopia3=pila3;
    for(int i=0;i<3*mayorAltura;i++){
        if(i%3==0){
            if(espacio1>0){
                printf("        ");
                espacio1--;
            }else{
                printf("(%i)     ",pilaCopia1->diametro);
                pilaCopia1=pilaCopia1->siguente;
            }
        }else if(i%3==1){
            if(espacio2>0){
                printf("          ");
                espacio2--;
            }else{
                printf("(%i)      ",pilaCopia2->diametro);
                pilaCopia2=pilaCopia2->siguente;
            }
        }else{
            if(espacio3>0){
                printf("          ");
                espacio3--;
            }else{
                printf("(%i)       ",pilaCopia3->diametro);
                pilaCopia3=pilaCopia3->siguente;
            }
            printf("\n");
        }
    }
    printf("torre1  torre2  torre3\n");
}
void moverTorre(int discos,Nodo** origen,Nodo** auxiliar,Nodo** destino){
    Nodo *mover;
    char tecla;
    if(discos==1){
        printf("Para seguir pulse ENTER POR FAVOR!!!!!: ");
        tecla=getchar();
        mover=desApilar(origen);
        apilar(destino,mover);
        imprimePilaSimple(*origen);
        imprimePilaSimple(*destino);
        printf("\n\n");
    }else{
        moverTorre(discos-1,origen,destino,auxiliar);
        printf("Para seguir pulse ENTER POR FAVOR!!!!!: ");
        tecla=getchar();
        mover=desApilar(origen);
        apilar(destino,mover);
        imprimePilaSimple(*origen);
        imprimePilaSimple(*destino);
        printf("\n\n");
        moverTorre(discos-1,auxiliar,origen,destino);
    }
}
#endif