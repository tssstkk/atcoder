int main()
{
  char s[200001], t[200001];
  scanf("%s %s", s, t);
  int cnt = 0;
  for (int i = 0; s[i] != '\0'; i++)
    if (s[i] != t[i])
      cnt++;
  printf("%d", cnt);
}
