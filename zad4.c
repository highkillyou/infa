/*4. Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.
  silnia(3) = 1 * 2 * 3 = 6
  silnia(4) = 1 * 2 *3 * 4 = 24

*/


#include <stdio.h>



int silnia(int k) {
  int s = 1;
  for(int n = 1; n<= k; n++) {
    s = s * n;
  }
  return s;
  }
  int main () {
    printf("silnia(0) = %d\n", silnia(0));
    printf("silnia(1) = %d\n", silnia(1));
    printf("silnia(2) = %d\n", silnia(2));
    printf("silnia(3) = %d\n", silnia(3));
    printf("silnia(4) = %d\n", silnia(4));
}
