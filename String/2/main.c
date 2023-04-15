#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    String1();
    String3();
    String4();
    String5();
    String6();

    return 0;
}

void String1()
{
    char str1[20] = "Hello World";
    char str2[20];

    // str1 = str2; // Errado!

    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
}

void String2()
{
    /* A linguagem C possui algumas funções
    para manipulação de strings */
    // Biblioteca <string.h>

    // strlen - Tamanho da string
    // strcpy - Copiar uma string
    // strcat - Concatenar duas strings
    // strcmp - Comparar duas strings
}

void String3()
{
    // O tamanho de uma string
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho = %d\n", tamanho);
}

void String4()
{
    // Copiando uma string
    char palavra[20] = "Linguagem C";
    char novaPalavra[30];
    strcpy(novaPalavra, palavra);

    printf("Copia = %s\n", novaPalavra);
}

void String5()
{
    // Copiando uma string
    char palavra1[20] = "Bom ";
    char palavra2[30] = "dia";
    strcat(palavra1, palavra2);

    printf("palavra = %s\n", palavra1);
}

void String6()
{
    // Copiando uma string
    char palavra1[20] = "Linguagem C";
    char palavra2[30] = "LINGUAGEM C";

    if (strcmp(palavra1, palavra2) == 0)
    {
        printf("Strings iguais\n");
    }
    else
    {
        printf("Strings diferentes\n");
    }
}