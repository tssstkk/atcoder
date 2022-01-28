int main()
{
  char s[1001];
  scanf("%s", s);
  int len = strlen(s);
  if (s[len - 1] == 's')
    printf("%ses", s);
  else
    printf("%ss", s);
}
