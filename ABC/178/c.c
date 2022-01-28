int main()
{
  int n;
  scanf("%d", &n);
  long long m = pow(10, 9) + 7;
  long long sum = 1, a = 1, b = 1, c = 1;
  long long ans;
  int i;
  for (i = 1; i <= n; i++)
  {
    sum = sum * 10 % m;
    a = a * 9 % m;
    b = a;
    c = c * 8 % m;
  }
  ans = sum - a - b + c;
  while (ans < 0)
    ans += m;
  ans = ans % m;
  printf("%lld\n", ans);
}
