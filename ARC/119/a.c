long long pwll(long long a)
{
  long long ans = 1, i;
  for (i = 0; i < a; i++)
    ans *= 2;
  return (ans);
}

int main()
{
  long long n;
  scanf("%lld", &n);
  long long num = n;
  long long i, cnt = 0;
  long long a, b, c, tmp = 1;
  for (i = 0; 1; i++)
  {
    if (tmp > num)
      break;
    tmp *= 2;
    cnt++;
  }
  long long sum = 9223372036854775807;
  for (b = cnt; b >= 0; b--)
  {
    a = num / pwll(b);
    c = num - a * pwll(b);
    if (sum > a + b + c)
      sum = a + b + c;
  }
  printf("%lld\n", sum);
}
