#include <stdio.h>

int primo(int N){
  if (N <= 1){
    return 0;
  }
  else if (N >= 2){
    for(int i = 2; i <= N/2; i++){
      if (N % i == 0){
        return 0;
      }          
    }
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int num, resultado;

  printf("Digite um número: ");
  scanf("%d", &num);

  resultado = primo(num);

  if (resultado == 1){
    printf("O valor booleano é %d, sendo um número primo", resultado);
  }
  else{
    printf("O valor booleano é %d, não sendo um número primo", resultado);
  }

  return 0;
}