int main()
{
  char s[2000000];
  scanf("%s", s);
  int i;
  long sum = 0;
  for (i = 0; s[i] != '\0'; i++)
    sum += s[i] - '0';
  if (sum % 9 == 0)
    printf("Yes");
  else
    printf("No");
}
