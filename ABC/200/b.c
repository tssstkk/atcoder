int main()
{
  long n, k;
  scanf("%ld %ld", &n, &k);
  int i;
  for (i = 0; i < k; i++)
  {
    if (n % 200 == 0)
      n /= 200;
    else
    {
      n = n * 1000 + 200;
    }
  }
  printf("%ld", n);
}
