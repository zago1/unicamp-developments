#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N = 0, C = 0, S= 0, E = 0, check = 10, final = 0;
    while(check){
        scanf("%d %d", &N, &C);
        if (N>0 && C>0) {
            if (N<=1000 && C<=1000) {
                break;
            }
        }  
        printf("Entrada invvalida, tente novamente...\n");
    }

    int EA = 0, SA = 0;
    for(size_t i = 0; i < N; i++)
    {
        
        while(check){
        scanf("%d %d", &SA, &EA);
        if (SA>=0 && EA>=0) {
            if (SA<=1000 && EA<=1000) {
                break;
            }
        }  
        printf("Entrada invvalida, tente novamente...\n");
        }
        E += EA;
        S += SA;
        if(E >= C){
            final = 1;
        }
        
    }
    
    if (final == 1) {
        printf("N\n");
    }
    else {
        printf("S\n");
    }
    
    
    return 0;
}
