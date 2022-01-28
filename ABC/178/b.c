int main()
{
  long long a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  long long e[7];
  e[0] = a * c;
  e[1] = b * d;
  e[2] = a * d;
  e[3] = b * c;
  long long ans = e[0];
  int i = 1;
  if ((a <= 0 && b >= 0) || (c <= 0 && d >= 0))
  {
    e[4] = 0;
    while (i < 5)
    {
      if (ans < e[i])
        ans = e[i];
      i++;
    }
  }
  else
  {
    while (i < 4)
    {
      if (ans < e[i])
        ans = e[i];
      i++;
    }
  }
  printf("%lld", ans);
}
