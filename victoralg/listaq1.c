#include <stdio.h>

int main()
{
    int ano;
    printf("Digite um ano entre 1800 e 2022:\n");
    scanf("%d", &ano);

    if (ano == 1896 || ano == 1900 || ano == 1904 || ano == 1908 || ano == 1912 || ano == 1920 || ano == 1924 || ano == 1928 || ano == 1932 || ano == 1936 || ano == 1948 || ano == 1952 || ano == 1956 || ano == 1960 || ano == 1964 || ano == 1968 || ano == 1972 || ano == 1976 || ano == 1980 || ano == 1984 || ano == 1988 || ano == 1992 || ano == 1996 || ano == 2000 || ano == 2004 || ano == 2008 || ano == 2012 || ano == 2016 || ano == 2020) // anos que ocoreram as olimpíadas dentro dos requisitos solicitados
    {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }
    else if (ano == 1930 || ano == 1934 || ano == 1938 || ano == 1950 || ano == 1954 || ano == 1958 || ano == 1962 || ano == 1966 || ano == 1970 || ano == 1974 || ano == 1978 || ano == 1982 || ano == 1986 || ano == 1990 || ano == 1994 || ano == 1998 || ano == 2002 || ano == 2006 || ano == 2010 || ano == 2014 || ano == 2018 || ano == 2022) // anos que ocorreram a copa do mundo dentro do tempo estabelecido
    // as duas barras retas verificam se um dos critérios são verdadeiros para que a operação consiga ser realizada corretamente
    {
        printf("A Copa Do Mundo  de Futebol ocorreu no ano de %d.\n", ano);
    }
    else
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa Do Mundo no ano %d.\n", ano);
    }
    return 0;
}