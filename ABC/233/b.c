int main()
{
  int l, r;
  char s[100001];
  scanf("%d %d %s", &l, &r, s);
  int slen = strlen(s);
  int i = 0, j = 0;
  while (s[i] != '\0')
  {
    if (i == l - 1)
    {
      j = r - 1;
      while (j >= i)
      {
        printf("%c", s[j]);
        j--;
      }
      i = r;
      continue;
    }
    printf("%c", s[i]);
    i++;
  }
  printf("\n");
}
