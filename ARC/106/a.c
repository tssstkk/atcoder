int main()
{
  long long n;
  scanf("%lld", &n);
  long i, j;
  long long tmp, a = 1, b = 1;
  for (i = 1; 1; i++)
  {
    a *= 5;
    tmp = n - a;
    if (tmp < 3)
    {
      printf("-1\n");
      return 0;
    }
    b = 1;
    for (j = 1; 1; j++)
    {
      b *= 3;
      if (tmp < b)
        break;
      if (tmp == b)
      {
        printf("%ld %ld\n", j, i);
        return 0;
      }
    }
  }
}
