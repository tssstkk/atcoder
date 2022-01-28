int main()
{
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  int ans = n - a + b;
  if (ans < 0)
    ans = 0;
  printf("%d", ans);
}
