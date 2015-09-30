#include <stdio.h>
#include <stdlib.h>

int iCount, iPrintBrasil = 0;

int main() {

  for (iCount = 0; iCount < 3; iCount++) {
    printf("Gol!\n");

    if (iCount == 0) {
      for (iPrintBrasil = 0; iPrintBrasil < 2; iPrintBrasil++) {
        printf("Brasil!\n");
      }
    }

    printf("Brasil!\n");
  }

  return 0;

}
