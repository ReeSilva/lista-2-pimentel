// program GOL_BRASIL
//
// Autor: Renato Biancalana da Silva <me@reesilva.com>
// Data:  30/09/2015

#include <stdio.h>
#include <stdlib.h>

int iCount, iPrintBrasil = 0;

int main() {

  // Começa a printar
  for (iCount = 0; iCount < 3; iCount++) {
    printf("Gol!\n");

    // Se for a primeira passagem imprime mais de uma vez
    if (iCount == 0) {
      for (iPrintBrasil = 0; iPrintBrasil < 2; iPrintBrasil++) {
        printf("Brasil!\n");
      }
    }

    // Imprime sempre pelo menos uma vez o Brasil! a cada Gol!
    printf("Brasil!\n");
  }

  return 0;

}
