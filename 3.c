#include <stdio.h>

int
main ()
{
  int i, j;

  int matrizA[2][2];
  int matrizB[2][2];

  matrizA[0][0] = 3;
  matrizA[0][1] = 11;

  matrizA[1][0] = 2;
  matrizA[1][1] = 13;

  matrizB[0][0] = 3;
  matrizB[0][1] = 11;
 
  matrizB[1][0] = 2;
  matrizB[1][1] = 13;

    for (i = 0; i < 2; i++)
    {
      putchar ('\n');
      for (j = 0; j < 2; j++)
	{
	  printf ("[%i]", matrizA[i][j]);
	}
    }
    
    putchar ('\n');
    
    for (i = 0; i < 2; i++)
    {
      putchar ('\n');
      for (j = 0; j < 2; j++)
	{
	  printf ("[%i]", matrizB[i][j]);
	}
    }
    
    putchar ('\n');
    
    if(matrizA[i][j] == matrizB[i][j]){
        printf("\nNão são opostas");
    }else if(matrizB[i][j] == matrizA[i][j] - (2 * matrizA[i][j])) {
        printf("\nSão opostas");
    }
    
  return 0;
}
