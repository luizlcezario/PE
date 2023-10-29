#include <stdio.h>

int main (void) {
    double entr;
    
    printf("Digite sua nota:");
    scanf("%le", &entr);
    if (entr >= 8.5) {
        printf("Conceito A - desempenho excepcional");
    } else if (entr >= 7.0) {
        printf("Conceito B - bom desempenho");
    } else if (entr >= 6.0) {
        printf("Conceito C - desempenho adequado");
    } else if (entr >= 5.0) {
        printf("Conceito D - desempenho mínimo");
    } else {
        printf("Conceito F - reprovado");
    }
    return 0;
}