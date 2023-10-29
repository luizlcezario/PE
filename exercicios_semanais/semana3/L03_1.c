#include <stdio.h>
int compara(int a, int b);

int main(void) {
    int a =0, b= 0;
    printf("Digite dois valores: ");
    scanf("%i", &a);
    scanf("%i", &b);
    printf("O menor número eh %i.", compara(a, b));
}

int compara(int a, int b){
     if(a < b)
        return (a);
    return (b);
}