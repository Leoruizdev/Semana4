#include <stdio.h>

double func(int n){
  double resultado = 0.0;
  int sinal = 1;

  for (int k = 1; k <= n; k++){
    double termo = (double)k / (k * k) * sinal;
    resultado = resultado + termo;
    sinal = sinal * -1;
  }
  return resultado;
}

int main(){
  int n;
  double resultado;

  printf("Digite o número: ");
  scanf("%d", &n);

  resultado = func(n);

  printf("%.15f\n", resultado);

  return 0;

}
