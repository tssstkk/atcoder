int main()
{
  int n;
  scanf("%d", &n);
  int ans;
  ans = n / 100;
  if (n % 100 != 0)
    ans++;
  printf("%d", ans);
}
