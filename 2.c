#include <stdio.h>

int main()
{
    int i, j;
    int matriz[4][4];
    
    for ( i=0; i<4; i++ ){
        for ( j=0; j<4; j++ )
     {
      printf ("\nValor [%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
     }
    }
  
    printf("\n\n------------------------ \n");
    
    for(i = 0; i < 4; i++){
        putchar('\n');
        for(j = 0; j < 4; j++){
            printf("[%i]", matriz[i][j]);
        }
    }
    
    putchar('\n');
    putchar('\n');
    
    int sPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3];
    
    int sSecundaria = matriz[0][3] + matriz[1][2] + matriz[2][1] + matriz[3][0];
    
    printf("A soma dos valores na diagonal principal é: %d", sPrincipal);
    
    putchar('\n');
    putchar('\n');
    
    printf("A soma dos valores na diagonal secundária é: %d", sSecundaria);
    
    return 0;
}
