int main(void)
{
  char s[11];
  scanf("%s", s);
  int i, len, flg = 1;
  len = strlen(s) - 1;
  while (s[len - i] == '0')
    len--;
  for (i = 0; i <= len - i; i++)
  {
    if (s[i] != s[len - i])
    {
      flg = 0;
      break;
    }
  }
  if (flg == 1)
    printf("Yes\n");
  else
    printf("No\n");
}
