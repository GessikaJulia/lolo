#include <stdio.h>
#include <math.h>

// Fun��o para verificar se um n�mero � uma pot�ncia de 2
int ehPotenciaDeDois(int n) {
    return (n & (n - 1)) == 0;
}

int main() {
    int opcao;

    printf("Escolha uma op��o:\n");
    printf("1. Informar o n�mero de bits e obter m�dulo e n�mero m�ximo.\n");
    printf("2. Informar o m�dulo e obter a quantidade de bits.\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int numBits;
        printf("Informe o n�mero de bits: ");
        scanf("%d", &numBits);

        if (!ehPotenciaDeDois(numBits)) {
            printf("O n�mero de bits deve ser uma pot�ncia de 2.\n");
            return 1;
        }

        int modulo = pow(2, numBits);
        int numeroMaximo = modulo - 1;

        printf("M�dulo: %d\n", modulo);
        printf("N�mero m�ximo contabilizado: %d\n", numeroMaximo);
    } else if (opcao == 2) {
        int modulo;
        printf("Informe o m�dulo: ");
        scanf("%d", &modulo);

        if (!ehPotenciaDeDois(modulo)) {
            printf("O m�dulo deve ser uma pot�ncia de 2.\n");
            return 1;
        }

        int numBits = log2(modulo);

        printf("Quantidade de bits: %d\n", numBits);
    } else {
        printf("Op��o inv�lida.\n");
        return 1;
    }

    return 0;
}
