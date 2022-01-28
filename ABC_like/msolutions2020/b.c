// a < b < c
int main()
{
  long a, b, c, k;
  int i = 0;
  scanf("%ld %ld %ld %ld", &a, &b, &c, &k);
  while (a >= b && i < k)
  {
    b *= 2;
    i++;
  }
  while (b >= c && i < k)
  {
    c *= 2;
    i++;
  }
  if (a < b && b < c)
    printf("Yes");
  else
    printf("No");
}
