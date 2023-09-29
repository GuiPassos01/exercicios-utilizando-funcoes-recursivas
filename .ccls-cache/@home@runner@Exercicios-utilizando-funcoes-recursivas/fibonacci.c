// Sequência de Fibonacci recursiva: Escreva uma função recursiva que gera o
// termo n da sequência de Fibonacci. A sequência de Fibonacci começa com 0 e 1,
// e os termos subsequentes são a soma dos dois termos anteriores. Vocês devem
// devem escrever uma função que recebe um número n como entrada e retorna o
// termo total da sequência de Fibonacci.

#include <stdio.h>

int fibonacci(int n) {
  if (n <= 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main(void) {
  int n;
  int unused __attribute__((unused));
  printf("Digite a quantidade de termos que deseja ver: ");
  unused = scanf("%d", &n);

  int resultado = fibonacci(n);
  printf("O termo %d da sequência de Fibonacci é %d\n", n, resultado);
  printf("\n");
  for (int i = 0; i <= n; i++) {
    printf("%d | %d\n", i, fibonacci(i));
  }
  return 0;
}
