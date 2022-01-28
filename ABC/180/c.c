int main()
{
  long long n;
  scanf("%lld", &n);
  long long i;
  long long j = 0;
  long long tmp[100000], tmp2[100000];
  for (i = 1; i * i < n; i++)
  {
    if (n % i == 0)
    {
      tmp[j] = i;
      tmp2[j] = n / i;
      j++;
    }
  }
  long long k = i;
  for (i = 0; i < j; i++)
    printf("%lld\n", tmp[i]);
  if (k * k == n)
    printf("%lld\n", k);
  for (i = j - 1; i >= 0; i--)
    printf("%lld\n", tmp2[i]);
}
