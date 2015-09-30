#include <stdio.h>
#include <stdlib.h>

int main() {

  float fProdutoUm[5];
  float fProdutoDois[5];
  float fProdutoTres[5];

  int i = 0;

  system("clear");
  printf("Digite o preco do produto um: \n");
  scanf("%f", &fProdutoUm[0]);
  
  printf("\nDigite o preco do produto dois: \n");
  scanf("%f", &fProdutoDois[0]);

  printf("\nDigite o preco do produto tres: \n");
  scanf("%f", &fProdutoTres[0]);

  for (i = 1; i < 5; i++) {
    if (i == 1 || i == 2) {
      fProdutoUm[i]   = fProdutoUm[i-1]   - (fProdutoUm[0]   * 0.05);
      fProdutoDois[i] = fProdutoDois[i-1] - (fProdutoDois[0] * 0.05);
      fProdutoTres[i] = fProdutoTres[i-1] - (fProdutoTres[0] * 0.05);
    } else {
      fProdutoUm[i]   = fProdutoUm[i-1]   - (fProdutoUm[0]   * 0.10);
      fProdutoDois[i] = fProdutoDois[i-1] - (fProdutoDois[0] * 0.10);
      fProdutoTres[i] = fProdutoTres[i-1] - (fProdutoTres[0] * 0.10);
    }
  }

  system("clear");

  for (i = 0; i < 5; i++) {
    printf("O preço do produto um na semana %d e: %.2f \n", i, fProdutoUm[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("O preço do produto dois na semana %d e: %.2f \n", i, fProdutoDois[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("O preço do produto tres na semana %d e: %.2f \n", i, fProdutoTres[i]);
  }

  system("pause");

  return 0;

}
