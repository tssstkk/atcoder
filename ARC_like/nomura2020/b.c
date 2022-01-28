int main()
{
  char t[200001];
  scanf("%s", t);
  int i;
  for (i = 0; t[i] != '\0'; i++)
  {
    if (t[i] == '?')
      t[i] = 'D';
  }
  printf("%s", t);
}
