#include <stdio.h>

int main(void) {
    String1();
    String2();
    String3();
    String4();
    String5();

    return 0;
}

void String1() {
    /* Strings: um array de caracteres
    Permite armazenar uma sequência de caracteres
    adjacentes na memória (palavras ou frases) */
    // Forma geral:
    // char nome_array[tamanho];

    // exemplo:
    char palavra[20];
}

void String2() {
    // Lendo e escrevendo uma string
    char palavra[20];
    printf("Digite uma palavra: ");
    scanf("%s", palavra); // scanf lê até acontecer um espaço ou uma ação de enter
    //gets(palavra); // gets lê até a ação de enter acontecer (então ele consegue ler frases)
    printf("Palavra lida: %s\n", palavra);
}

void String3() {
    // Inicializando uma string
    // Forma convencional
    char nome1[20] = {'J', 'o', 'a', 'o', '\0'};
    printf("nome: %s\n", nome1);

    // Forma especial
    char nome2[20] = "Joao";
    printf("nome: %s\n", nome2);
}

void String4() {
    char palavra[20] = "Teste";
    printf("Palavra = %s\n", palavra);
    palavra[0] = 'L';
    printf("Palavra = %s\n", palavra);
}

void String5() {
    /* A função do '\0' é desconsiderar
    as posições restantes da string */
    char palavra[20] = "Oitenta";
    printf("Palavra: %s\n", palavra);

    palavra[2] = '\0';
    printf("Palavra: %s\n", palavra);
}