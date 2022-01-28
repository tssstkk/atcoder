int main()
{
  char a[4], b[4];
  int i, sum1 = 0, sum2 = 0;
  scanf("%s %s", a, b);
  for (i = 0; a[i] != '\0'; i++)
  {
    sum1 += a[i] - '0';
    sum2 += b[i] - '0';
  }
  if (sum1 >= sum2)
    printf("%d", sum1);
  else
    printf("%d", sum2);
}
