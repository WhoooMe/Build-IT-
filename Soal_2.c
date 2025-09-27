#include <stdio.h>

int main (void) {
    int N;
    int hasil;

    scanf(" %d", &N);

    for (int i = 1; i <= 10; i++) {
      hasil = N * i; 
      printf("%d x %d = %d\n", N, i, hasil);
    }

  return 0;
} 