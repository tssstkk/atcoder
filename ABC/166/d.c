int main(void)
{
  long x;
  scanf("%ld",&x);
  long long i, j;
  for (i = -120; i < 121; i++)
  {
    for (long long j = -120;j < 121;j++)
    {
      if(i * i * i * i * i - j * j * j * j * j == x)
      {
        printf("%lld %lld",i,j);
        return 0;
      }
    }
  }
}

