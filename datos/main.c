#include "nodo.h"

int main(int argc,char** argv){
    Nodo *pila=NULL;
    Nodo *pila2=NULL;
    Nodo *pila3=NULL;
    srand(time(NULL));
    if(argc!=5){
        printf("ejecute ./prog numeroDePiso torreInicio torreDestino mode \n");
        exit(EXIT_FAILURE);
    }
    int numeroDisco=atoi(argv[1]);
    int torreInicio=atoi(argv[2]);
    int torreFin=atoi(argv[3]);
    int mode=atoi(argv[4]);
    if(mode!=0 && mode!=1){
        printf("Error mode incorrecto ejecute ./prog numeroDePiso torreInicio torreDestino mode \n");
        exit(EXIT_FAILURE);
        // 1 para verlo paso a paso
        //0 solo para ver el resultado
    }
    /*llenarTorre(&pila,numeroDisco);
    imprimerPilaAvanzado(pila,pila2,pila3);
    moverTorreInteractivo(numeroDisco,&pila,&pila2,&pila3);
    //1:origen 2:torre Auxiliar 3:destino*/
    if(torreInicio==1 && torreFin==2){//mover uno dos
        llenarTorre(&pila,numeroDisco);
        if(mode==1){
            moverTorreInteractivo(numeroDisco,&pila,&pila3,&pila2);
            // origen, aux, destino
        }else{
            imprimerPilaAvanzado(pila,pila2,pila3);
            moverTorre(numeroDisco,&pila,&pila3,&pila2);
            imprimerPilaAvanzado(pila,pila2,pila3);
        }
    }else if(torreInicio==1 && torreFin==3){//uno tres
        llenarTorre(&pila,numeroDisco);
        if(mode==1){
            moverTorreInteractivo(numeroDisco,&pila,&pila2,&pila3);
        }else{
            imprimerPilaAvanzado(pila,pila2,pila3);
            moverTorre(numeroDisco,&pila,&pila2,&pila3);
            imprimerPilaAvanzado(pila,pila2,pila3);
        }
    }else if(torreInicio==2 && torreFin==1){//dos uno
        llenarTorre(&pila2,numeroDisco);
        if(mode==1){
            moverTorreInteractivo(numeroDisco,&pila2,&pila3,&pila);
        }else{
            imprimerPilaAvanzado(pila,pila2,pila3);
            moverTorre(numeroDisco,&pila2,&pila3,&pila);
            imprimerPilaAvanzado(pila,pila2,pila3);
        }
    }else if(torreInicio==2 && torreFin==3){//dos tres
        llenarTorre(&pila2,numeroDisco);
        if(mode==1){
            moverTorreInteractivo(numeroDisco,&pila2,&pila,&pila3);
        }else{
            imprimerPilaAvanzado(pila,pila2,pila3);
            moverTorre(numeroDisco,&pila2,&pila,&pila3);
            imprimerPilaAvanzado(pila,pila2,pila3);
        }
    }else if(torreInicio==3 && torreFin==1){//tres uno
        llenarTorre(&pila3,numeroDisco);
        if(mode==1){
            moverTorreInteractivo(numeroDisco,&pila3,&pila2,&pila);
        }else{
            imprimerPilaAvanzado(pila,pila2,pila3);
            moverTorre(numeroDisco,&pila3,&pila2,&pila);
            imprimerPilaAvanzado(pila,pila2,pila3);
        }
    }else if(torreInicio==3 && torreFin==2){  //tres a dos
        llenarTorre(&pila3,numeroDisco);
        if(mode==1){
            moverTorreInteractivo(numeroDisco,&pila3,&pila,&pila2);
            imprimerPilaAvanzado(pila,pila2,pila3);
        }else{
            imprimerPilaAvanzado(pila,pila2,pila3);
            printf("\n");
            moverTorre(numeroDisco,&pila3,&pila,&pila2);
            imprimerPilaAvanzado(pila,pila2,pila3);
        }
    }else{
        printf("Eso no tiene sentido\n");
    }
    return 0;
}
