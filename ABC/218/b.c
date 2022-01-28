int main()
{
  int p[27] = {0};
  int i;
  char c = 96;
  for (i = 0; i < 26; i++)
  {
    scanf("%d", &p[i]);
    c = 96 + p[i];
    printf("%c", c);
  }
}
