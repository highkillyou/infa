/* zlicz znaki odstępu, tabulacji
{
}
#include &lt;stdio.h>
i nowego wiersza */

#include <stdio.h>
int main () {

int nb, nt, nl;
  int c;
  nt = 0;
  nl = 0;
  nb = 0;


if (c == ' ')

else if (c == '\t')
else if (c == '\n')
while ((c=getchar()) != EOF)
return 0;

++nl;
++nb;
++nt;

printf("%d %d %d\n", nb, nt, nl);


}
