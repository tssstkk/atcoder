int main()
{
  int n;
  double d1, h1;
  scanf("%d %lf %lf", &n, &d1, &h1);
  int i;
  int d[n], h[n];
  double ans = 0, ktmk;
  for (i = 0; i < n; i++)
  {
    scanf("%d %d", &d[i], &h[i]);
    ktmk = h1 - d1 * (h1 - h[i]) / (d1 - d[i]);
    if (ans < ktmk)
      ans = ktmk;
  }
  printf("%lf", ans);
}
