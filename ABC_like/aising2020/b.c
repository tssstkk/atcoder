int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  int i, cnt = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if ((i + 1) % 2 == 1)
    {
      if (a[i] % 2 == 1)
        cnt++;
    }
  }
  printf("%d", cnt);
}
