int main()
{
  int n, x, t;
  scanf("%d %d %d", &n, &x, &t);
  int ans;
  if (n % x == 0)
    ans = n / x * t;
  else
    ans = n / x * t + t;
  printf("%d", ans);
}
