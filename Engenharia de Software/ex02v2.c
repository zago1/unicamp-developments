#include <stdio.h>

int main(int argc, char const *argv[]){

    //Variáveis
    int NAndares = 0;
    int Carga = 0;
    int S = 0; //Saída
    int E = 0; //Entrada
    int check = 10; 
    int erro = 0;
    int EAux = 0; //Entrada Auxiliar

    //Entrada de n/umero de andares percorridos e carga máxima em pessoas no elevador

    while(check){
        scanf("%d %d", &NAndares, &Carga);
        if (NAndares>0 && Carga>0) {
            if (NAndares<=1000 && Carga<=1000) {
                break;
            }
        }  
        printf("Entrada invalida, tente novamente...\n");
    }

    //Saída e Entrada das pessoas por andar

    for(int i = 0; i < NAndares; i++){
        
        while(check){
            scanf("%d %d", &S, &EAux);
            if (S>=0 && EAux>=0) {
                if (S<=1000 && EAux<=1000) {
                    break;
                }
            }  
            printf("Entrada invalida, tente novamente...\n");
        }
        E += EAux;
        E -= S;
        if(E > Carga){
            erro = 1; //Caso o número de pessoas dentro do elevador exceda a carga
        }
        
    }
    
    if (erro == 1) {
        printf("S\n"); //Sim, o número de pessoas no elevador excedeu sua carga
    }
    else {
        printf("N\n"); //Não, o número de pessoas no elevador não excedeu sua carga
    }
    
    return 0;
}
