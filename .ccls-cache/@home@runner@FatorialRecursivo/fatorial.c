// Escreva uma função recursiva em C que calcula o fatorial de um número inteiro não negativo fornecido pelo usuário. 

#include <stdio.h>

int fatorial(int num){
  if(num == 0){
    return 1;
  } else{
    return num * fatorial(num-1);
  }
}

int main(void) {
  int num;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  if(num < 0){
    printf("Numero Invalido, execute o programa novamente e digite um numero inteiro positivo!");
  }else{
    printf("%d! = %d\n", num, fatorial(num));
  }
  return 0;
}
