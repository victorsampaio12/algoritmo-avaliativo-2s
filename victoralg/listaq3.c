#include <stdio.h>

int main()
{
    int senhacadastrada, senhainserida;
    int tentativas = 8;

    printf("Digite uma senha de sua preferencia com 4 numeros:\n ");
    scanf("%d", &senhacadastrada);

    for (int tentativa = 1; tentativa <= tentativas; tentativa++)
    {
        printf("Insira sua senha:\n");
        scanf("%d", &senhainserida);

        if (senhainserida == senhacadastrada)
        {
            printf("Senha valida!\n");
            return 0; // verifica que termina por aqui se feito corretamente
        }

        else
        {
            printf(" Senha invalida!\n Tentativas restantes: %d\n", tentativas - tentativa);
        }
    }

    printf("Suas tentativas foram esgotadas.\n"); // caso as 8 tentativas forem excedidas a mensagem será reproduzida

    return 0;
}