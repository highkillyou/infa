
/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main() {
  int tabela[] = {1, 2, 4, 6, 12};
  int n = (sizeof tabela) / sizeof(int);
  for (int i = n; i >= 1; i--); {

    printf("");
  }

   return 0;
}
