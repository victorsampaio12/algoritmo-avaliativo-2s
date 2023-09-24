#include <stdio.h>

int main()
{
    int numero, digito, soma = 0;
    printf("Digite um numero inteiro positivo de 0 a 1000000000:\n ");
    scanf("%d", &numero);

    // verificando se o número é par, por meio da divisão por 2
    if (numero % 2 == 0)
    {
        printf("O numero digitado e par!\n");
    }

    else
    {
        printf("O numero digitado e impar!\n");
    }

    int copianumero = numero; // conserva o número inserido no início
    while (numero != 0)
    {
        digito = numero % 10; // seleciona o último dígito
        soma += digito;       // último dígito inserido na soma
        numero /= 10;         // excisão do ultimo digito
    }
    printf("A soma dos numeros inseridos (%d) e: %d\n", copianumero, soma);

    return 0;
}