int main()
{
  int k;
  char s[101];
  scanf("%d %s", &k, &s);
  int dig = 0, i;
  for (i = 0; s[i] != '\0'; i++)
    dig++;
  if (dig <= k)
    printf("%s", s);
  else
  {
    for (i = 0; i < k; i++)
      printf("%c", s[i]);
    printf("...");
  }
}
