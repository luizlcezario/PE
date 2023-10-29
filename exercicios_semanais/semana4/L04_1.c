#include <stdio.h>

void show_vec(int *vec, int n);
void read_vec(int *vec, int n);

void show_vec(int *vec, int n)
{
    printf("O vetor é:\n");
    for (int i = 0; i < n; i++)
        printf("%i ", vec[i]);
    printf("\n");
}
void read_vec(int *vec, int n)
{
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &vec[i]);
    }
}

int main(void)
{
    int a = 0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%i", &a);
    int vec[a];
    read_vec(vec, a);
    show_vec(vec, a);
}