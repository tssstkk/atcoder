int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int ans;
  ans = 2 * a + 100 - b;
  if (ans < 0)
    ans = 0;
  printf("%d\n", ans);
}
