#include <stdlib.h>

int int_sort(const void* a, const void* b)
{
  return strcmp((char*)a, (char*)b);
}

int main()
{
  int n;
  scanf("%d", &n);
  int i;
  char s[n][11];
  for (i = 0; i < n; i++)
    scanf("%s", &s[i]);
  
  qsort((void*)s ,n ,sizeof(s[n]), int_sort);
  
  int cnt = 1;
  for (i = 0; i + 1 < n; i++)
  {
    if (strcmp(s[i], s[i + 1]) != 0)
      cnt++;
  }
  
  printf("%d", cnt);

}
