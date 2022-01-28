#include <ctype.h>
int main()
{
  char s, t;
  scanf("%c %c", &s, &t);
  if (s == 'Y')
    printf("%c", toupper(t));
  else
    printf("%c", t);
}
