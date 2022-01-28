int main()
{
  long long p;
  scanf("%lld", &p);
  long long a[10] = {3628800, 362880, 40320, 5040, 720, 120, 24, 6, 2, 1};
  
  int i;
  long long cnt = 0;
  long long amari;
  long long shou;
  long long tmp = p;
  for (i = 0; a[i] != '\0'; i++)
  {
    if (a[i] > tmp)
    {
      continue;
    }
    shou = tmp / a[i];
    amari = tmp % p;
    tmp = tmp - a[i] * shou;
    cnt += shou;
  }
  printf("%lld", cnt);
}
