#include <stdio.h>
#include <malloc.h>

int main() {
    int tamanho;
    int *vetor;
    int contador = 0;
    printf("Informe o tamanho do vetor\n");
    scanf("%d",&tamanho);
    getchar();

    //ALOCANDO MEMORIA
    vetor = (int *)malloc(tamanho * sizeof(int));

    //ALOCANDO VALORES
    do {
        printf("Informe um numero para preencher o vetor: \n");
        scanf("%d",&*(vetor+contador));
        getchar();
        contador++;
    } while (contador < tamanho);

    //PRINTANDO VALORES
    printf("Vetor impresso:\n");
    for (int index = 0; index < tamanho; ++index) {
        printf("%d\n",*(vetor+index));
    }

    free(vetor);
}
