#include <stdio.h>
 
int main() {

    int k;

    scanf("%d", &k);
    k++;

    for (int i = 1; i != k; i++) {
        // Aloca e lê entrada tudo de uma vez
        char memoria[30000]; // 1 byte
        char entrada[100000];
        char programa[100000];
        scanf("\n%s", entrada);
        scanf("\n%s", programa);

        printf("Instancia %d\n", i);

        int p = 0; // Ponteiro da "máquina"
        int instrucaoIndiceAtual = 0;
        int instrucaoAtual;

        // Enquanto há instruções no programa serem executadas
        while (instrucaoAtual = programa[instrucaoIndiceAtual++]) {
            printf("\ninstrucao: %c", programa[instrucaoIndiceAtual - 1]);

            switch (instrucaoAtual) {
                case '>': // Incrementa o ponteiro.
                    p++;
                    break;
                case '<': // Decrementa o ponteiro.
                    p--;
                    break;
                case '+': // Incrementa o byte na posição indicada pelo ponteiro.
                    memoria[p]++;
                    break;
                case '-': // Decrementa o byte na posição indicada pelo ponteiro.
                    memoria[p]--;
                    break;
                case '.': // Imprime o valor do byte na posição indicada pelo ponteiro.
                    printf("\nsaida (%d): ", memoria[p]);
                    putchar(memoria[p]);
                    printf("\n");
                    break;
                case ',': // Lê um byte e armazena na posição indicada pelo ponteiro. Se não houver nada que possa ser lido (entrada acabou), armazenar zero.
                    memoria[p] = getchar();
                    break;
                case '[': // Início do loop: Executa o código delimitado até que o byte na posição indicada pelo ponteiro seja igual a zero.
                    // TODO: position stack control
                    break;
                case ']': // Fim do loop.
                    // TODO: position stack control and pointer value verification
                    break;
                case '#': // Imprime os valores das 10 primeiras posições do vetor.
                    printf("\nsaida 10: ", memoria[p]);
                    for (int i = 0; i < 10; i++)
                        putchar(memoria[i]);
                    printf("\n");
                    break;
            }

            printf("\nmemoria: [%3d", memoria[0]);
            for (int i = 1; i < 15; i++)
                printf(",%3d", memoria[i], memoria[i]);
            printf("]");
            printf("\nponteiro:  ");
            for (int i = 0; i < p || i == 15; i++)
                printf("    ");
            printf("^\n");
        }

        printf("\nfim do programa, instrucaoIndiceAtual: %d", instrucaoIndiceAtual);
    }

 
    return 0;
}