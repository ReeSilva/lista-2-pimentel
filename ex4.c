#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int iQtdTermos, iCount = 0;
  int iPow = 5;
  
  float fResultado, fValorX, fTmpResult = 0.00;
  float fDecimal = 0.2;
  
  // Limpa a tela e pede as variáveis para o usuário
  system("clear");
  printf("Digite a quantidade de termos: ");
  scanf("%d", &iQtdTermos);

  printf("\nDigite um valor para X: ");
  scanf("%f", &fValorX);

  // Faz a iteração por quantos termos o usuário pediu
  for (iCount = 0; iCount < iQtdTermos; iCount++) {
    fTmpResult = (fDecimal * pow(fValorX, iPow))/sqrt((fValorX + iPow)); // Calcula o resultado de um elemento da soma
    fResultado += fTmpResult; // Soma o resultado à soma total

    fTmpResult = 0; // Reseta o total de cada elemento
    iPow += 2; // Adiciona ao valor do expoente com base no exercício
    fDecimal += 0.3; // Adiciona ao valor que multiplica o X com base no exercício
  }

  // Limpa a tela e imprime o resultado final
  system("clear");
  printf("O resultado final e: %.2f", fResultado);

  system("pause");

  return 0;

}
