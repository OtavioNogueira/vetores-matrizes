#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j;
    int matriz[2][3];
    
    for ( i=0; i<2; i++ ){
        for ( j=0; j<3; j++ )
     {
      printf ("\nValor [%d] [%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
     }
    }
  
    printf("\n\n------------------------ \n");
  
    for(i = 0; i < 2; i++){
        putchar('\n');
        for(j = 0; j < 3; j++){
            printf("[%i]", matriz[i][j]);
        }
    }
    
    printf("\n\n------------------------ \n");

    for(i = 0; i < 3; i++){
        putchar('\n');
        for(j = 0; j < 2; j++){
            printf("[%i]", matriz[j][i]);
        }
    }
  
    getch();
     
    return 0;
}
