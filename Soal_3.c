#include <stdio.h>

int main (void) {
    int a, b, hasil = 0;

    scanf(" %d", &a);
    scanf(" %d", &b);

    for (a; a <= b; a++) {
      hasil = hasil + a;
    }
    printf ("%d\n", hasil); 
    
  return 0;
}