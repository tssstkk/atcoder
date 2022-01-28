int main()
{
  int n;
  scanf("%d", &n);
  int a[n], b[n];
  int i, j;
  long sum = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%d %d", &a[i], &b[i]);
    sum += ((long)b[i] - a[i] + 1) * (a[i] + b[i]) / 2;
  }
  printf("%ld\n", sum);
}
