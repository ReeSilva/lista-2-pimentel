// program CALCULA_FATORIAL
//
// Autor: Renato Biancalana da Silva <me@reesilva.com>
// Data:  30/09/2015

#include <stdio.h>
#include <stdlib.h>

int main() {

  // Declaração de variáveis. Precisei usar long int pois os resultados a partir do 13 não cabem em int
  long int vB[15];
  long int iResultFatorial = 1;

  int vA[15];
  int iI, iJ, iK = 0;
  int iL;

  // Limpa a tela
  system("clear");

  // Pede para o usuário digitar cada valor do array, assim o usuário pode fazer o que quiser.
  for(iI = 0; iI < 15; iI++) {
    printf("Digite o %d valor: \n", iI);
    scanf("%d", &vA[iI]);
    
    // Impede valor negativo, assumindo que o usuário queria zero.
    if (vA[iI] < 0) {
      printf("Não existe fatorial de número negativo, colocaremos zero.");
      vA[iI] = 0;
    }
  }

  // Início da definição dos valores do vetor vB
  for(iJ = 0; iJ < 15; iJ++) {
    // Caso o valor seja 0 ou 1, já monta com 1, já que fatorial de 0 e 1 é sempre 1.
    if (vA[iJ] <= 1) {
      vB[iJ] = 1;
      continue;
    }

    // Calcula o fatorial do elemento
    for(iL = vA[iJ]; iL > 1; iL--) {
      iResultFatorial *= iL; 
    }
    
    // Atribui o resultado do fatorial ao elemento no vetor vB e reseta o acumulador do fatorial
    vB[iJ] = iResultFatorial;
    iResultFatorial = 1;
  }

  // Limpa a tela
  system("clear");

  // Imprime o vetor vA
  for(iK = 0; iK < 15; iK++) {
    printf("Vetor A, índice %d: %d \n", iK, vA[iK]);
  }

  // Imprime o vetor vB
  for(iK = 0; iK < 15; iK++) {
    printf("Vetor B, indice %d: %ld \n", iK, vB[iK]);
  }

  system("pause");

  return 0;
}
