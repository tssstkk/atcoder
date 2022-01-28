int main()
{
  char s[13];
  scanf("%s", s);
  int i = 0, cnt = 0;
  while (s[i] != '\0')
  {
    if (s[i] == 'Z')
      if (strncmp("ZONe", &s[i], 4) == 0)
      {
        cnt++;
        i += 3;
      }
    i++;
  }
  printf("%d\n", cnt);
}
