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
  int N1, N2;
  printf("Digite os números: ");
  scanf("%d %d", &N1, &N2);

  for (int i = N1; i <= N2; i++){
    if(primo(i)){
      printf("%d ", i);
    }
  }
}