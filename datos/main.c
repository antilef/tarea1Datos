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
    //1:origen 2:torre Auxiliar 3:destino
    if(torreInicio==1 && torreFin==2){//mover uno dos

    }else if(torreInicio==1 && torreFin==3){//uno tres

    }else if(torreInicio==2 && torreFin==1){//dos uno

    }else if(torreInicio==2 && torreFin==3){//dos tres

    }else if(torreInicio==3 && torreFin==1){//tres uno

    }else if(torreInicio==3 && torreFin==2){  //tres a dos

    }else{
        printf("Kha");
    }
    return 0;
}
