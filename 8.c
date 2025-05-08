#include <stdio.h>

int main() {
    
    int interval, init, limit;
    
    printf("Insira o número inicial: \n");
    scanf("%d", &init);
    printf("Insira o número limite: \n");
    scanf("%d", &limit);
    printf("Insira o intervalo: \n");
    scanf("%d", &interval);
    
    for(int i = init; i <= limit; i+=interval){
        printf("%d\n", i);
    }
}