#include <stdio.h>
#include <stdlib.h>

int main() {

  long int vB[15];
  long int iResultFatorial = 1;

  int vA[15];
  int iI, iJ, iK = 0;
  int iL;

  system("clear");
  for(iI = 0; iI < 15; iI++) {
    printf("Digite o %d valor: \n", iI);
    scanf("%d", &vA[iI]);
  }

  for(iJ = 0; iJ < 15; iJ++) {
    if (vA[iJ] <= 1) {
      vB[iJ] = 1;
      continue;
    }

    for(iL = vA[iJ]; iL > 1; iL--) {
      iResultFatorial *= iL; 
    }

    vB[iJ] = iResultFatorial;
    iResultFatorial = 1;
  }

  system("clear");

  for(iK = 0; iK < 15; iK++) {
    printf("Vetor A, índice %d: %d \n", iK, vA[iK]);
  }

  for(iK = 0; iK < 15; iK++) {
    printf("Vetor B, indice %d: %ld \n", iK, vB[iK]);
  }

  system("pause");

  return 0;
}
