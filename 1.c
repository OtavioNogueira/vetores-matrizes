#include <stdio.h>

int main()
{
    
    char texto1[50];
    printf("Insira um texto para ser enviado a outra matriz: ");
    fgets(texto1, 50, stdin);
    
    char texto2[50];
    
    for(int i = 0; i<51; i++){
        texto2[i] = texto1[i];
    }
    
    printf("O texto é: %s", texto2);

    return 0;
}
