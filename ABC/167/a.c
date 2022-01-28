int main()
{
  char s[11], t[11];
  scanf("%s", &s);
  scanf("%s", &t);
  int i, dig = 0;
  for (i = 0; s[i] != '\0'; i++)
    dig++;
  if (strncmp(s, t, dig) == 0)
    printf("Yes");
  else
    printf("No");
}
